#include "AnchorPrecisionCalibrationComponent.h"

#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"

DEFINE_LOG_CATEGORY_STATIC(LogAnchorPrecisionCalibration, Log, All);

UAnchorPrecisionCalibrationComponent::UAnchorPrecisionCalibrationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	// Sample after the anchor tracking / Spatial Anchor Manager have updated anchor transforms this frame.
	PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
}

AActor* UAnchorPrecisionCalibrationComponent::GetTargetActor() const
{
	return TargetActor ? TargetActor.Get() : GetOwner();
}

// ---------------------------------------------------------------------------------------------
// Sampling
// ---------------------------------------------------------------------------------------------

bool UAnchorPrecisionCalibrationComponent::GetAnchorInPawnSpace(const AActor* Anchor, FVector& OutLocal, FString& OutError) const
{
	const AActor* Target = GetTargetActor();
	if (!Target)
	{
		OutError = TEXT("No target actor. Either add this component directly to the Pawn, or call SetTargetActor(Pawn) first.");
		return false;
	}
	if (!Anchor)
	{
		OutError = TEXT("An anchor actor is not assigned.");
		return false;
	}
	if (Anchor == Target)
	{
		OutError = TEXT("An anchor cannot be the target actor itself.");
		return false;
	}

	// World position -> target-local (real-world tracking) space. The anchor is a fixed real-world
	// point and the target's transform IS the current real<->virtual mapping, so this gives the
	// anchor's position in the fixed real-world tracking frame - a value that stays the same no
	// matter what the target's transform is currently set to (exactly like GetMarkerInOwnerSpace
	// does for VRPN markers in VRPNCalibrationComponent).
	OutLocal = Target->GetActorTransform().InverseTransformPositionNoScale(Anchor->GetActorLocation());
	return true;
}

bool UAnchorPrecisionCalibrationComponent::SampleAnchors(FVector& OutA, FVector& OutB, FVector& OutC, FString& OutError) const
{
	OutC = FVector::ZeroVector;

	if (const APawn* TargetPawn = Cast<APawn>(GetTargetActor()))
	{
		if (!TargetPawn->IsLocallyControlled())
		{
			OutError = TEXT("Anchor precision calibration must run on the machine that locally controls the target Pawn (the VR headset's own client), not on a remote copy of it.");
			return false;
		}
	}

	if (!GetAnchorInPawnSpace(OriginAnchor, OutA, OutError)) { return false; }
	if (!GetAnchorInPawnSpace(AxisAnchor, OutB, OutError)) { return false; }
	if (bUseThirdPoint && !GetAnchorInPawnSpace(ThirdAnchor, OutC, OutError)) { return false; }
	return true;
}

void UAnchorPrecisionCalibrationComponent::AverageAndJitter(const TArray<FVector>& Samples, FVector& OutMean, double& OutMaxDeviation)
{
	OutMean = FVector::ZeroVector;
	OutMaxDeviation = 0.0;
	if (Samples.Num() == 0)
	{
		return;
	}

	FVector Sum = FVector::ZeroVector;
	for (const FVector& S : Samples)
	{
		Sum += S;
	}
	OutMean = Sum / static_cast<double>(Samples.Num());

	for (const FVector& S : Samples)
	{
		OutMaxDeviation = FMath::Max(OutMaxDeviation, (S - OutMean).Size());
	}
}

// ---------------------------------------------------------------------------------------------
// Calibration flow
// ---------------------------------------------------------------------------------------------

bool UAnchorPrecisionCalibrationComponent::StartCalibration()
{
	if (bCalibrating)
	{
		return false;
	}

	FString Error;
	FVector A, B, C;
	if (!SampleAnchors(A, B, C, Error))
	{
		FAnchorCalibrationResult Result;
		Result.Message = Error;
		FinishWith(Result);
		return false;
	}

	SamplesA.Reset();
	SamplesB.Reset();
	SamplesC.Reset();
	Elapsed = 0.0f;
	bCalibrating = true;
	SetComponentTickEnabled(true);
	return true;
}

void UAnchorPrecisionCalibrationComponent::CancelCalibration()
{
	bCalibrating = false;
	SetComponentTickEnabled(false);
	SamplesA.Reset();
	SamplesB.Reset();
	SamplesC.Reset();
	Elapsed = 0.0f;
}

void UAnchorPrecisionCalibrationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bCalibrating)
	{
		return;
	}

	FVector A, B, C;
	FString Error;
	if (SampleAnchors(A, B, C, Error))
	{
		SamplesA.Add(A);
		SamplesB.Add(B);
		if (bUseThirdPoint)
		{
			SamplesC.Add(C);
		}
	}

	Elapsed += DeltaTime;
	if (Elapsed >= SampleDuration)
	{
		bCalibrating = false;
		SetComponentTickEnabled(false);
		FinishWith(ComputeAndApply(SamplesA, SamplesB, SamplesC, MinSamples));
	}
}

FAnchorCalibrationResult UAnchorPrecisionCalibrationComponent::CalibrateInstant()
{
	FVector A, B, C;
	FString Error;
	if (!SampleAnchors(A, B, C, Error))
	{
		FAnchorCalibrationResult Result;
		Result.Message = Error;
		FinishWith(Result);
		return Result;
	}

	TArray<FVector> SA{ A };
	TArray<FVector> SB{ B };
	TArray<FVector> SC;
	if (bUseThirdPoint)
	{
		SC.Add(C);
	}

	FAnchorCalibrationResult Result = ComputeAndApply(SA, SB, SC, 1);
	FinishWith(Result);
	return Result;
}

float UAnchorPrecisionCalibrationComponent::GetProgress() const
{
	if (!bCalibrating || SampleDuration <= 0.0f)
	{
		return 0.0f;
	}
	return FMath::Clamp(Elapsed / SampleDuration, 0.0f, 1.0f);
}

FAnchorCalibrationResult UAnchorPrecisionCalibrationComponent::ComputeAndApply(const TArray<FVector>& InSamplesA, const TArray<FVector>& InSamplesB, const TArray<FVector>& InSamplesC, int32 RequiredSamples)
{
	FAnchorCalibrationResult Result;
	Result.bUsedThirdPoint = bUseThirdPoint;

	if (InSamplesA.Num() < RequiredSamples || InSamplesB.Num() < RequiredSamples || (bUseThirdPoint && InSamplesC.Num() < RequiredSamples))
	{
		Result.Message = FString::Printf(TEXT("Not enough samples (need at least %d)."), RequiredSamples);
		return Result;
	}

	AActor* Target = GetTargetActor();
	if (!Target)
	{
		Result.Message = TEXT("No target actor. Either add this component directly to the Pawn, or call SetTargetActor(Pawn) first.");
		return Result;
	}

	FVector MeanA, MeanB, MeanC = FVector::ZeroVector;
	double JitterA = 0.0, JitterB = 0.0, JitterC = 0.0;
	AverageAndJitter(InSamplesA, MeanA, JitterA);
	AverageAndJitter(InSamplesB, MeanB, JitterB);
	if (bUseThirdPoint)
	{
		AverageAndJitter(InSamplesC, MeanC, JitterC);
	}

	Result.OriginJitter = JitterA;
	Result.AxisJitter = JitterB;
	Result.ThirdJitter = JitterC;
	Result.SampleCount = InSamplesA.Num();

	if (MaxJitter > 0.0 && (JitterA > MaxJitter || JitterB > MaxJitter || (bUseThirdPoint && JitterC > MaxJitter)))
	{
		Result.Message = FString::Printf(TEXT("An anchor's tracked position was still moving while sampling (max jitter %.2f uu, limit %.2f). Let tracking settle and try again."),
			FMath::Max(JitterA, FMath::Max(JitterB, JitterC)), MaxJitter);
		return Result;
	}

	Result.MeasuredDistance = (MeanB - MeanA).Size();
	Result.ExpectedDistance = (TargetAxisWorld - TargetOriginWorld).Size();
	Result.DistanceErrorPercent = Result.ExpectedDistance > KINDA_SMALL_NUMBER
		? FMath::Abs(Result.MeasuredDistance - Result.ExpectedDistance) / Result.ExpectedDistance * 100.0
		: 0.0;

	if (MaxDistanceErrorPercent > 0.0 && Result.DistanceErrorPercent > MaxDistanceErrorPercent)
	{
		Result.Message = FString::Printf(TEXT("Anchor distance off by %.1f%% (measured %.1f uu, expected %.1f uu). Check anchor placement and Target*World values."),
			Result.DistanceErrorPercent, Result.MeasuredDistance, Result.ExpectedDistance);
		return Result;
	}

	FQuat OutRotation;
	FVector OutLocation;
	FString SolveError;
	bool bSolved;

	if (bUseThirdPoint)
	{
		bSolved = UVRPNCalibrationComponent::SolveThreePoint(MeanA, MeanB, MeanC,
			TargetOriginWorld, TargetAxisWorld, TargetThirdWorld,
			OutRotation, OutLocation, SolveError);
	}
	else
	{
		bSolved = UVRPNCalibrationComponent::SolveTwoPoint(MeanA, MeanB,
			TargetOriginWorld, TargetAxisWorld,
			Target->GetActorQuat(), Mode,
			OutRotation, OutLocation, SolveError);
	}

	if (!bSolved)
	{
		Result.Message = SolveError;
		return Result;
	}

	// We deliberately stop here and do NOT call OrientToAnchor ourselves - bind OnCalibrationFinished
	// (or read LastResult right after this call) and call OrientToAnchor(NewPawnLocation,
	// NewPawnRotation) yourself from the Pawn's own graph.
	Result.bSuccess = true;
	Result.NewPawnLocation = OutLocation;
	Result.NewPawnRotation = OutRotation.Rotator();
	Result.Message = FString::Printf(TEXT("Calibrated from %s. Distance error %.1f%%. Call OrientToAnchor with NewPawnLocation/NewPawnRotation to apply it."),
		bUseThirdPoint ? TEXT("3 anchors") : TEXT("2 anchors"), Result.DistanceErrorPercent);
	return Result;
}

void UAnchorPrecisionCalibrationComponent::FinishWith(const FAnchorCalibrationResult& Result)
{
	LastResult = Result;
	OnCalibrationFinished.Broadcast(Result);

	UE_LOG(LogAnchorPrecisionCalibration, Log, TEXT("Anchor precision calibration %s: %s"),
		Result.bSuccess ? TEXT("succeeded") : TEXT("FAILED"), *Result.Message);

	if (bShowOnScreenMessage && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 6.0f, Result.bSuccess ? FColor::Cyan : FColor::Red, Result.Message);
	}
}

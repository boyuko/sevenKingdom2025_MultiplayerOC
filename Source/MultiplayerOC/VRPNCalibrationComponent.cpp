#include "VRPNCalibrationComponent.h"

#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

DEFINE_LOG_CATEGORY_STATIC(LogVRPNCalibration, Log, All);

UVRPNCalibrationComponent::UVRPNCalibrationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	// Sample after LiveLink component controllers have moved the markers this frame.
	PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
}

void UVRPNCalibrationComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bAutoLoadOnBeginPlay)
	{
		LoadCalibration();
	}
}

// ---------------------------------------------------------------------------------------------
// Pure math
// ---------------------------------------------------------------------------------------------

bool UVRPNCalibrationComponent::SolveTwoPoint(const FVector& OriginLocal, const FVector& AxisLocal,
	const FVector& TargetOrigin, const FVector& TargetAxis,
	const FQuat& CurrentRotation, EVRPNCalibrationMode InMode,
	FQuat& OutRotation, FVector& OutLocation, FString& OutError)
{
	const FVector LocalVec = AxisLocal - OriginLocal;
	const FVector WorldVec = TargetAxis - TargetOrigin;

	if (LocalVec.Size() < 1.0 || WorldVec.Size() < 1.0)
	{
		OutError = TEXT("The two points are too close together (< 1 uu).");
		return false;
	}

	const FQuat R0 = CurrentRotation.GetNormalized();
	// Where the marker line currently points in the world (with the owner's present rotation).
	const FVector V0 = R0.RotateVector(LocalVec);

	FQuat NewRot;
	if (InMode == EVRPNCalibrationMode::YawOnly)
	{
		if (V0.Size2D() < 1.0 || WorldVec.Size2D() < 1.0)
		{
			OutError = TEXT("Yaw Only needs the two points to be spread horizontally (line is vertical).");
			return false;
		}
		const double DeltaYaw = FMath::Atan2(WorldVec.Y, WorldVec.X) - FMath::Atan2(V0.Y, V0.X);
		NewRot = FQuat(FVector::UpVector, DeltaYaw) * R0;
	}
	else
	{
		NewRot = FQuat::FindBetweenVectors(V0, WorldVec) * R0;
	}
	NewRot.Normalize();

	OutRotation = NewRot;
	OutLocation = TargetOrigin - NewRot.RotateVector(OriginLocal);
	return true;
}

bool UVRPNCalibrationComponent::SolveThreePoint(const FVector& OriginLocal, const FVector& AxisLocal, const FVector& ThirdLocal,
	const FVector& TargetOrigin, const FVector& TargetAxis, const FVector& TargetThird,
	FQuat& OutRotation, FVector& OutLocation, FString& OutError)
{
	const FVector XL = AxisLocal - OriginLocal;
	const FVector XW = TargetAxis - TargetOrigin;
	const FVector NL = FVector::CrossProduct(XL, ThirdLocal - OriginLocal);
	const FVector NW = FVector::CrossProduct(XW, TargetThird - TargetOrigin);

	if (XL.Size() < 1.0 || XW.Size() < 1.0 || NL.Size() < 1.0 || NW.Size() < 1.0)
	{
		OutError = TEXT("The three points are (almost) on one line or too close together.");
		return false;
	}

	const FVector XLn = XL.GetSafeNormal();
	const FVector XWn = XW.GetSafeNormal();
	const FVector ZLn = NL.GetSafeNormal();
	const FVector ZWn = NW.GetSafeNormal();

	// Step 1: swing the local X axis onto the world X axis.
	const FQuat Q1 = FQuat::FindBetweenNormals(XLn, XWn);
	// Step 2: twist about the world X axis so the plane normals coincide.
	const FVector N1 = Q1.RotateVector(ZLn);
	const double TwistAngle = FMath::Atan2(FVector::DotProduct(XWn, FVector::CrossProduct(N1, ZWn)), FVector::DotProduct(N1, ZWn));
	const FQuat Q2(XWn, TwistAngle);

	FQuat NewRot = Q2 * Q1;
	NewRot.Normalize();

	// Anchor on the origin marker so it lands exactly on TargetOrigin (world 0,0,0 by default).
	OutRotation = NewRot;
	OutLocation = TargetOrigin - NewRot.RotateVector(OriginLocal);
	return true;
}

void UVRPNCalibrationComponent::AverageAndJitter(const TArray<FVector>& Samples, FVector& OutMean, double& OutMaxDeviation)
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
// Sampling
// ---------------------------------------------------------------------------------------------

bool UVRPNCalibrationComponent::GetMarkerInOwnerSpace(const AActor* Marker, FVector& OutLocal, FString& OutError) const
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		OutError = TEXT("Component has no owner.");
		return false;
	}
	if (!Marker)
	{
		OutError = TEXT("A marker actor is not assigned.");
		return false;
	}
	if (Marker == Owner)
	{
		OutError = TEXT("A marker cannot be the owner itself.");
		return false;
	}

	const USceneComponent* MarkerRoot = Marker->GetRootComponent();
	if (!MarkerRoot)
	{
		OutError = FString::Printf(TEXT("Marker '%s' has no root component."), *Marker->GetName());
		return false;
	}

	if (bRequireMarkersAttachedToOwner && Owner->GetRootComponent() && !MarkerRoot->IsAttachedTo(Owner->GetRootComponent()))
	{
		OutError = FString::Printf(TEXT("Marker '%s' is not attached to '%s'. Attach it as a child (or untick bRequireMarkersAttachedToOwner)."),
			*Marker->GetName(), *Owner->GetName());
		return false;
	}

	// World position -> owner space. NoScale gives (owner scale * tracker-space position),
	// which is exactly what the owner's rotation/translation must act on.
	OutLocal = Owner->GetActorTransform().InverseTransformPositionNoScale(Marker->GetActorLocation());
	return true;
}

bool UVRPNCalibrationComponent::SampleMarkers(FVector& OutA, FVector& OutB, FVector& OutC, FString& OutError) const
{
	OutC = FVector::ZeroVector;
	if (!GetMarkerInOwnerSpace(OriginMarker, OutA, OutError)) { return false; }
	if (!GetMarkerInOwnerSpace(AxisMarker, OutB, OutError)) { return false; }
	if (bUseThirdPoint && !GetMarkerInOwnerSpace(ThirdMarker, OutC, OutError)) { return false; }
	return true;
}

// ---------------------------------------------------------------------------------------------
// Calibration flow
// ---------------------------------------------------------------------------------------------

bool UVRPNCalibrationComponent::StartCalibration()
{
	if (bCalibrating)
	{
		UE_LOG(LogVRPNCalibration, Warning, TEXT("StartCalibration ignored: already calibrating."));
		return false;
	}

	if (SampleDuration <= KINDA_SMALL_NUMBER)
	{
		return CalibrateInstant().bSuccess;
	}

	FVector A, B, C;
	FString Error;
	if (!SampleMarkers(A, B, C, Error))
	{
		FVRPNCalibrationResult Failed;
		Failed.bUsedThirdPoint = bUseThirdPoint;
		Failed.Message = Error;
		FinishWith(Failed);
		return false;
	}

	SamplesA.Reset();
	SamplesB.Reset();
	SamplesC.Reset();
	Elapsed = 0.0f;
	VerifyTicksRemaining = 0;
	bCalibrating = true;
	SetComponentTickEnabled(true);

	UE_LOG(LogVRPNCalibration, Log, TEXT("Calibration started (%.1f s, %s). Keep the markers still."),
		SampleDuration, bUseThirdPoint ? TEXT("3 points") : TEXT("2 points"));
	return true;
}

void UVRPNCalibrationComponent::CancelCalibration()
{
	if (!bCalibrating)
	{
		return;
	}
	bCalibrating = false;
	SetComponentTickEnabled(false);
	SamplesA.Reset();
	SamplesB.Reset();
	SamplesC.Reset();
	UE_LOG(LogVRPNCalibration, Log, TEXT("Calibration cancelled."));
}

FVRPNCalibrationResult UVRPNCalibrationComponent::CalibrateInstant()
{
	FVRPNCalibrationResult Result;
	Result.bUsedThirdPoint = bUseThirdPoint;

	if (bCalibrating)
	{
		Result.Message = TEXT("A timed calibration is already running.");
		return Result;
	}

	FVector A, B, C;
	FString Error;
	if (!SampleMarkers(A, B, C, Error))
	{
		Result.Message = Error;
		FinishWith(Result);
		return Result;
	}

	TArray<FVector> SA{ A }, SB{ B }, SC;
	if (bUseThirdPoint)
	{
		SC.Add(C);
	}

	Result = ComputeAndApply(SA, SB, SC, 1);
	FinishWith(Result);
	return Result;
}

void UVRPNCalibrationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bCalibrating)
	{
		// Idle: only used for the short "was the result overwritten?" check after a successful calibration.
		if (VerifyTicksRemaining > 0)
		{
			if (--VerifyTicksRemaining == 0)
			{
				VerifyOwnerTransform();
				SetComponentTickEnabled(false);
			}
		}
		else
		{
			SetComponentTickEnabled(false);
		}
		return;
	}

	FVector A, B, C;
	FString Error;
	if (!SampleMarkers(A, B, C, Error))
	{
		FVRPNCalibrationResult Failed;
		Failed.bUsedThirdPoint = bUseThirdPoint;
		Failed.Message = Error;
		FinishWith(Failed);
		return;
	}

	SamplesA.Add(A);
	SamplesB.Add(B);
	if (bUseThirdPoint)
	{
		SamplesC.Add(C);
	}

	Elapsed += DeltaTime;
	if (Elapsed >= SampleDuration)
	{
		const FVRPNCalibrationResult Result = ComputeAndApply(SamplesA, SamplesB, SamplesC, MinSamples);
		FinishWith(Result);
	}
}

FVRPNCalibrationResult UVRPNCalibrationComponent::ComputeAndApply(const TArray<FVector>& InSamplesA, const TArray<FVector>& InSamplesB, const TArray<FVector>& InSamplesC, int32 RequiredSamples)
{
	FVRPNCalibrationResult Result;
	Result.bUsedThirdPoint = bUseThirdPoint;
	Result.SampleCount = InSamplesA.Num();

	AActor* Owner = GetOwner();
	if (!Owner)
	{
		Result.Message = TEXT("Component has no owner.");
		return Result;
	}

	const int32 N = InSamplesA.Num();
	if (N < 1 || N < RequiredSamples || InSamplesB.Num() != N || (bUseThirdPoint && InSamplesC.Num() != N))
	{
		Result.Message = FString::Printf(TEXT("Not enough samples (%d, need %d)."), N, RequiredSamples);
		return Result;
	}

	// ---- average + stillness check
	FVector A, B, C = FVector::ZeroVector;
	AverageAndJitter(InSamplesA, A, Result.OriginJitter);
	AverageAndJitter(InSamplesB, B, Result.AxisJitter);
	if (bUseThirdPoint)
	{
		AverageAndJitter(InSamplesC, C, Result.ThirdJitter);
	}
	Result.OriginMarkerLocal = A;
	Result.AxisMarkerLocal = B;
	Result.ThirdMarkerLocal = C;

	const double WorstJitter = FMath::Max3(Result.OriginJitter, Result.AxisJitter, Result.ThirdJitter);
	if (MaxJitter > 0.0 && WorstJitter > MaxJitter)
	{
		Result.Message = FString::Printf(TEXT("Markers moved too much while sampling (%.2f uu > %.2f uu). Keep them still."), WorstJitter, MaxJitter);
		return Result;
	}

	// ---- scale / placement sanity check
	Result.MeasuredDistance = (B - A).Size();
	Result.ExpectedDistance = (TargetAxisWorld - TargetOriginWorld).Size();
	if (Result.ExpectedDistance < 1.0)
	{
		Result.Message = TEXT("TargetOriginWorld and TargetAxisWorld are the same point.");
		return Result;
	}
	Result.DistanceErrorPercent = FMath::Abs(Result.MeasuredDistance - Result.ExpectedDistance) / Result.ExpectedDistance * 100.0;

	auto DistanceOk = [this](const TCHAR* Name, double Measured, double Expected, FString& OutErr) -> bool
	{
		if (Expected < 1.0)
		{
			OutErr = FString::Printf(TEXT("Target points for %s coincide."), Name);
			return false;
		}
		const double ErrPct = FMath::Abs(Measured - Expected) / Expected * 100.0;
		if (MaxDistanceErrorPercent > 0.0 && ErrPct > MaxDistanceErrorPercent)
		{
			OutErr = FString::Printf(TEXT("Distance %s is %.1f uu but should be %.1f uu (%.1f%% off). Wrong marker placement, wrong marker assignment or wrong units?"),
				Name, Measured, Expected, ErrPct);
			return false;
		}
		return true;
	};

	FString DistError;
	if (!DistanceOk(TEXT("Origin-Axis"), Result.MeasuredDistance, Result.ExpectedDistance, DistError))
	{
		Result.Message = DistError;
		return Result;
	}
	if (bUseThirdPoint)
	{
		if (!DistanceOk(TEXT("Origin-Third"), (C - A).Size(), (TargetThirdWorld - TargetOriginWorld).Size(), DistError)
			|| !DistanceOk(TEXT("Axis-Third"), (C - B).Size(), (TargetThirdWorld - TargetAxisWorld).Size(), DistError))
		{
			Result.Message = DistError;
			return Result;
		}
	}

	// ---- solve
	FQuat NewRot;
	FVector NewLoc;
	FString SolveError;
	bool bSolved;
	if (bUseThirdPoint)
	{
		bSolved = SolveThreePoint(A, B, C, TargetOriginWorld, TargetAxisWorld, TargetThirdWorld, NewRot, NewLoc, SolveError);
	}
	else
	{
		bSolved = SolveTwoPoint(A, B, TargetOriginWorld, TargetAxisWorld, Owner->GetActorQuat(), Mode, NewRot, NewLoc, SolveError);
	}
	if (!bSolved)
	{
		Result.Message = SolveError;
		return Result;
	}

	// ---- residuals with the solved transform
	auto ToWorld = [&NewRot, &NewLoc](const FVector& P) { return NewRot.RotateVector(P) + NewLoc; };
	Result.OriginResidual = (ToWorld(A) - TargetOriginWorld).Size();
	Result.AxisResidual = (ToWorld(B) - TargetAxisWorld).Size();
	Result.ThirdResidual = bUseThirdPoint ? (ToWorld(C) - TargetThirdWorld).Size() : 0.0;

	// ---- apply
	const USceneComponent* OwnerRoot = Owner->GetRootComponent();
	if (OwnerRoot && OwnerRoot->Mobility != EComponentMobility::Movable)
	{
		Result.Message = FString::Printf(TEXT("Owner '%s' root component is not Movable, so its transform cannot change at runtime. Set its Mobility to Movable."), *Owner->GetName());
		return Result;
	}

	const FTransform OldTransform = Owner->GetActorTransform();
	const FTransform NewTransform(NewRot, NewLoc, Owner->GetActorScale3D());
	Owner->SetActorTransform(NewTransform, false, nullptr, ETeleportType::TeleportPhysics);

	// Read back right away: did the engine really move the actor?
	const FTransform Applied = Owner->GetActorTransform();
	if ((Applied.GetLocation() - NewLoc).Size() > 1.0 || Applied.GetRotation().AngularDistance(NewRot) > FMath::DegreesToRadians(0.5))
	{
		Result.Message = FString::Printf(TEXT("SetActorTransform did not take effect on '%s' (wanted location %s, got %s)."),
			*Owner->GetName(), *NewLoc.ToString(), *Applied.GetLocation().ToString());
		return Result;
	}

	PreviousTransform = OldTransform;
	bHasPreviousTransform = true;
	UE_LOG(LogVRPNCalibration, Log, TEXT("Owner '%s' moved: location %s -> %s"), *Owner->GetName(), *OldTransform.GetLocation().ToString(), *NewLoc.ToString());

	Result.NewOwnerTransform = NewTransform;
	Result.YawDeltaDegrees = FMath::UnwindDegrees(NewRot.Rotator().Yaw - OldTransform.GetRotation().Rotator().Yaw);
	Result.bSuccess = true;
	Result.Message = FString::Printf(
		TEXT("Calibration OK (%s, %d samples). Distance %.1f/%.1f uu (%.2f%% off). Residual origin %.2f, axis %.2f%s uu. Yaw change %.2f deg. Location %s"),
		bUseThirdPoint ? TEXT("3 points, full 6-DOF") : TEXT("2 points"),
		N, Result.MeasuredDistance, Result.ExpectedDistance, Result.DistanceErrorPercent,
		Result.OriginResidual, Result.AxisResidual,
		bUseThirdPoint ? *FString::Printf(TEXT(", third %.2f"), Result.ThirdResidual) : TEXT(""),
		Result.YawDeltaDegrees, *NewLoc.ToString());
	return Result;
}

void UVRPNCalibrationComponent::FinishWith(const FVRPNCalibrationResult& Result)
{
	bCalibrating = false;
	SetComponentTickEnabled(false);
	SamplesA.Reset();
	SamplesB.Reset();
	SamplesC.Reset();

	LastResult = Result;

	if (Result.bSuccess)
	{
		UE_LOG(LogVRPNCalibration, Log, TEXT("%s"), *Result.Message);
		if (bAutoSaveAfterCalibration)
		{
			SaveCalibration();
		}
	}
	else
	{
		UE_LOG(LogVRPNCalibration, Warning, TEXT("Calibration failed: %s"), *Result.Message);
	}

	if (bShowOnScreenMessage && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 6.0f, Result.bSuccess ? FColor::Green : FColor::Red, Result.Message);
	}

	if (Result.bSuccess)
	{
		// Check a few frames later that nothing (e.g. the owner's own Tick) wrote the old transform back.
		VerifyExpectedTransform = Result.NewOwnerTransform;
		VerifyTicksRemaining = 3;
		SetComponentTickEnabled(true);
	}

	OnCalibrationFinished.Broadcast(Result);
}

void UVRPNCalibrationComponent::VerifyOwnerTransform()
{
	const AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	const FTransform Now = Owner->GetActorTransform();
	const double LocError = (Now.GetLocation() - VerifyExpectedTransform.GetLocation()).Size();
	const double RotErrorDeg = FMath::RadiansToDegrees(Now.GetRotation().AngularDistance(VerifyExpectedTransform.GetRotation()));
	if (LocError <= 1.0 && RotErrorDeg <= 0.5)
	{
		UE_LOG(LogVRPNCalibration, Log, TEXT("Verified: owner transform is still the calibrated one."));
		return;
	}

	const FString Message = FString::Printf(
		TEXT("Calibration was applied, but a few frames later '%s' was moved again (location off by %.1f uu, rotation off by %.1f deg; now at %s). Something writes the transform every frame - check the owner's Event Tick / UpdateVRPNLocation / UpdateVRPNRotation / Set Actor Location / Set Actor Rotation."),
		*Owner->GetName(), LocError, RotErrorDeg, *Now.GetLocation().ToString());

	LastResult.bSuccess = false;
	LastResult.Message = Message;
	UE_LOG(LogVRPNCalibration, Warning, TEXT("%s"), *Message);
	if (bShowOnScreenMessage && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Orange, Message);
	}
}

bool UVRPNCalibrationComponent::UndoLastCalibration()
{
	AActor* Owner = GetOwner();
	if (!Owner || !bHasPreviousTransform)
	{
		return false;
	}

	const FTransform Current = Owner->GetActorTransform();
	Owner->SetActorTransform(PreviousTransform, false, nullptr, ETeleportType::TeleportPhysics);
	PreviousTransform = Current; // undo twice = redo
	UE_LOG(LogVRPNCalibration, Log, TEXT("Calibration undone."));
	return true;
}

// ---------------------------------------------------------------------------------------------
// Persistence
// ---------------------------------------------------------------------------------------------

FString UVRPNCalibrationComponent::GetSavePath() const
{
	return FPaths::Combine(FPaths::ProjectSavedDir(), SaveFileName);
}

bool UVRPNCalibrationComponent::SaveCalibration() const
{
	const AActor* Owner = GetOwner();
	if (!Owner)
	{
		return false;
	}

	const FVector L = Owner->GetActorLocation();
	const FQuat Q = Owner->GetActorQuat();
	const FString Text = FString::Printf(TEXT("%.9f %.9f %.9f %.9f %.9f %.9f %.9f"), L.X, L.Y, L.Z, Q.X, Q.Y, Q.Z, Q.W);

	const bool bOk = FFileHelper::SaveStringToFile(Text, *GetSavePath());
	UE_LOG(LogVRPNCalibration, Log, TEXT("Save calibration to %s: %s"), *GetSavePath(), bOk ? TEXT("ok") : TEXT("FAILED"));
	return bOk;
}

bool UVRPNCalibrationComponent::LoadCalibration()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return false;
	}

	FString Text;
	if (!FFileHelper::LoadFileToString(Text, *GetSavePath()))
	{
		UE_LOG(LogVRPNCalibration, Log, TEXT("No saved calibration at %s"), *GetSavePath());
		return false;
	}

	TArray<FString> Tokens;
	Text.ParseIntoArrayWS(Tokens);
	if (Tokens.Num() != 7)
	{
		UE_LOG(LogVRPNCalibration, Warning, TEXT("Saved calibration file is malformed: %s"), *GetSavePath());
		return false;
	}

	const FVector L(FCString::Atod(*Tokens[0]), FCString::Atod(*Tokens[1]), FCString::Atod(*Tokens[2]));
	FQuat Q(FCString::Atod(*Tokens[3]), FCString::Atod(*Tokens[4]), FCString::Atod(*Tokens[5]), FCString::Atod(*Tokens[6]));
	Q.Normalize();

	PreviousTransform = Owner->GetActorTransform();
	bHasPreviousTransform = true;
	Owner->SetActorTransform(FTransform(Q, L, Owner->GetActorScale3D()), false, nullptr, ETeleportType::TeleportPhysics);

	UE_LOG(LogVRPNCalibration, Log, TEXT("Loaded calibration from %s (location %s)"), *GetSavePath(), *L.ToString());
	return true;
}

float UVRPNCalibrationComponent::GetProgress() const
{
	if (!bCalibrating || SampleDuration <= KINDA_SMALL_NUMBER)
	{
		return 0.0f;
	}
	return FMath::Clamp(Elapsed / SampleDuration, 0.0f, 1.0f);
}

// Multi-anchor precision calibration for BP_VRPawn.
//
// Problem: aligning the virtual world to a single Spatial Anchor trusts that one anchor's own
// self-reported ROTATION (Quest's SLAM orientation estimate for that anchor). Any small error in
// that one rotation reading turns into a large real-world misalignment at distance - exactly the
// "rotation is a little off and everything drifts" symptom.
//
// Fix: use the same trick VRPNCalibrationComponent already uses for the VRPN rig - solve the pose
// from the GEOMETRY between two (or three) points instead of trusting any single point's own
// orientation. Here the "points" are Spatial Anchors instead of VRPN markers.
//
// Setup:
//   1. Add this component to whichever actor is convenient (BP_VRPawn, your Spatial Anchor Manager's
//      owner, a menu/manager actor - it does not have to be BP_VRPawn). If you add it to BP_VRPawn
//      itself you can skip step 1b; anywhere else, set TargetActor to the VR Pawn at runtime.
//   1b. If this component is NOT on the Pawn, call SetTargetActor(Pawn) once you have a Pawn
//       reference (e.g. Get Player Pawn) before calibrating - it is what gets measured/solved for.
//   2. Place 2 (or 3) Spatial Anchors at real-world points whose VIRTUAL-world coordinates you
//      already know precisely. Tip: physically place them at the same marker points used for the
//      VRPN rig calibration (VRPNCalibrationComponent's TargetOriginWorld / TargetAxisWorld /
//      TargetThirdWorld) and reuse those exact same numbers here - then both systems are calibrated
//      against the same known-good reference points.
//   3. Assign OriginAnchor / AxisAnchor (and ThirdAnchor if bUseThirdPoint) to the corresponding
//      BP_SpatialAnchorModel actors, and set TargetOriginWorld / TargetAxisWorld / TargetThirdWorld
//      to the matching virtual-world positions.
//   4. Call StartCalibration() (or CalibrateInstant() for a one-frame calibration) once both/all
//      anchors are tracked and stable.
//
// Applying the result: this component only COMPUTES (Position, Rotation) - it does not call
// OrientToAnchor itself. Bind a Blueprint event to OnCalibrationFinished (or just read LastResult
// right after calling CalibrateInstant()/StartCalibration()), then call the Pawn's own existing
// "OrientToAnchor(Result.NewPawnLocation, Result.NewPawnRotation)" event yourself - the exact same
// event the existing single-anchor flow already calls, so SetActorLocation/SetActorRotation, the
// ServerOrientToAnchor RPC and the HMD recenter all keep working unchanged. This component never
// touches anchor save/load or the single-anchor manual flow.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VRPNCalibrationComponent.h" // reuse EVRPNCalibrationMode + the pure-math Solve functions
#include "AnchorPrecisionCalibrationComponent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAnchorCalibrationResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	bool bSuccess = false;

	/** Human readable status / error text. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	FString Message;

	/** Computed Pawn position - only meaningful when bSuccess. Feed this straight into OrientToAnchor's Position input. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	FVector NewPawnLocation = FVector::ZeroVector;

	/** Computed Pawn rotation - only meaningful when bSuccess. Feed this straight into OrientToAnchor's Rotation input. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	FRotator NewPawnRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	bool bUsedThirdPoint = false;

	/** Distance between the two anchors as currently tracked. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double MeasuredDistance = 0.0;

	/** Distance between the two target points (as configured). */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double ExpectedDistance = 0.0;

	/** |Measured - Expected| / Expected * 100. Large values usually mean an anchor is not where you think it is, or Target*World is wrong. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double DistanceErrorPercent = 0.0;

	/** Max deviation of any sample from the mean, for the origin/axis/third anchor. Large = an anchor's tracked pose was still settling. */
	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double OriginJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double AxisJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	double ThirdJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	int32 SampleCount = 0;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnchorCalibrationFinished, const FAnchorCalibrationResult&, Result);

/**
 * Add this wherever is convenient (BP_VRPawn, your Spatial Anchor Manager actor, a menu actor - see
 * TargetActor above). It does not replace OrientToAnchor / ServerOrientToAnchor or the anchor
 * save/load system - it only computes a more precise (Position, Rotation) pair from 2-3 anchors for
 * TargetActor. You call the Pawn's own OrientToAnchor event yourself with the result (see
 * OnCalibrationFinished / LastResult below).
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MULTIPLAYEROC_API UAnchorPrecisionCalibrationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAnchorPrecisionCalibrationComponent();

	// ---------------------------------------------------------------- Target

	/**
	 * The Pawn (or any Actor) this component solves the pose for. If left unset, GetOwner() is used
	 * instead (so putting this component directly on BP_VRPawn still needs zero extra setup, exactly
	 * like before) - set this explicitly when the component lives somewhere else, e.g. your Spatial
	 * Anchor Manager or a menu actor, and call SetTargetActor(Pawn) once you have a Pawn reference.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Target")
	TObjectPtr<AActor> TargetActor;

	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration|Target")
	void SetTargetActor(AActor* Actor) { TargetActor = Actor; }

	/** TargetActor if set, otherwise GetOwner(). This is the actual Actor every calibration call measures/solves for. */
	UFUNCTION(BlueprintPure, Category = "Anchor Calibration|Target")
	AActor* GetTargetActor() const;

	// ---------------------------------------------------------------- Anchors

	/** Spatial Anchor actor (BP_SpatialAnchorModel) physically placed at TargetOriginWorld. Usually the same anchor the existing manual flow calls "OriginAnchor". */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Anchors")
	TObjectPtr<AActor> OriginAnchor;

	/** Spatial Anchor actor physically placed at TargetAxisWorld. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Anchors")
	TObjectPtr<AActor> AxisAnchor;

	/** Optional third anchor for a full 6-DOF solve (pitch/roll get corrected too, not just yaw). Needs the three anchors not to be in one line. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Anchors")
	bool bUseThirdPoint = false;

	/** Spatial Anchor actor physically placed at TargetThirdWorld. Only used when bUseThirdPoint. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Anchors", meta = (EditCondition = "bUseThirdPoint"))
	TObjectPtr<AActor> ThirdAnchor;

	// Anchors are created/loaded at RUNTIME (there's nothing to drag-assign in the Details panel at
	// edit time), so use these three setters from Blueprint wherever you already have a reference to
	// the anchor actor (e.g. straight off the anchor-creation/discovery node's output pin, or the
	// same BP_SpatialAnchorModel reference the existing manual flow stores in "OriginAnchor"). Any
	// Actor reference works - BP_SpatialAnchorModel is just an Actor subclass, so the pin is the same
	// colour/type as any other Actor reference.

	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration|Anchors")
	void SetOriginAnchor(AActor* Anchor) { OriginAnchor = Anchor; }

	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration|Anchors")
	void SetAxisAnchor(AActor* Anchor) { AxisAnchor = Anchor; }

	/** Also flips bUseThirdPoint on, since assigning a third anchor only makes sense if you intend to use it. */
	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration|Anchors")
	void SetThirdAnchor(AActor* Anchor) { ThirdAnchor = Anchor; bUseThirdPoint = true; }

	// ---------------------------------------------------------------- Targets

	/** Known virtual-world position the origin anchor's real-world point corresponds to. Typically (0,0,0), matching the existing single-anchor flow's convention. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Targets")
	FVector TargetOriginWorld = FVector::ZeroVector;

	/** Known virtual-world position the axis anchor's real-world point corresponds to. Tip: reuse the VRPN rig's TargetAxisWorld and place this anchor at the same physical marker. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Targets")
	FVector TargetAxisWorld = FVector(100.0, 0.0, 0.0);

	/** Known virtual-world position the third anchor's real-world point corresponds to. Only used when bUseThirdPoint. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Targets", meta = (EditCondition = "bUseThirdPoint"))
	FVector TargetThirdWorld = FVector(0.0, 100.0, 0.0);

	/** Two-anchor solve mode. Ignored when bUseThirdPoint is on. YawOnly is almost always right for a gravity-aligned (Z up) real-world floor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Targets", meta = (EditCondition = "!bUseThirdPoint"))
	EVRPNCalibrationMode Mode = EVRPNCalibrationMode::YawOnly;

	// ---------------------------------------------------------------- Sampling / validation

	/** Seconds to average the anchors for before solving. 0 = use the current frame only (same as CalibrateInstant). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Sampling", meta = (ClampMin = "0.0"))
	float SampleDuration = 1.0f;

	/** Calibration fails if fewer frames than this were sampled. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Sampling", meta = (ClampMin = "1"))
	int32 MinSamples = 5;

	/** Reject the calibration when the measured anchor-to-anchor distance differs from the target distance by more than this percentage. 0 = no check. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Sampling", meta = (ClampMin = "0.0"))
	double MaxDistanceErrorPercent = 5.0;

	/** Reject the calibration when an anchor's tracked position moved more than this (Unreal units) from its average during sampling. 0 = no check. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Sampling", meta = (ClampMin = "0.0"))
	double MaxJitter = 3.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anchor Calibration|Sampling")
	bool bShowOnScreenMessage = true;

	// ---------------------------------------------------------------- API

	/** Start averaging the anchors for SampleDuration seconds, then calibrate and apply. Result arrives through OnCalibrationFinished (and is returned via LastResult). */
	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration")
	bool StartCalibration();

	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration")
	void CancelCalibration();

	/** Calibrate immediately from the current frame only (no averaging). Handy for testing. */
	UFUNCTION(BlueprintCallable, Category = "Anchor Calibration")
	FAnchorCalibrationResult CalibrateInstant();

	UFUNCTION(BlueprintPure, Category = "Anchor Calibration")
	bool IsCalibrating() const { return bCalibrating; }

	/** 0..1 while sampling. */
	UFUNCTION(BlueprintPure, Category = "Anchor Calibration")
	float GetProgress() const;

	UPROPERTY(BlueprintAssignable, Category = "Anchor Calibration")
	FAnchorCalibrationFinished OnCalibrationFinished;

	UPROPERTY(BlueprintReadOnly, Category = "Anchor Calibration")
	FAnchorCalibrationResult LastResult;

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool GetAnchorInPawnSpace(const AActor* Anchor, FVector& OutLocal, FString& OutError) const;
	bool SampleAnchors(FVector& OutA, FVector& OutB, FVector& OutC, FString& OutError) const;
	FAnchorCalibrationResult ComputeAndApply(const TArray<FVector>& InSamplesA, const TArray<FVector>& InSamplesB, const TArray<FVector>& InSamplesC, int32 RequiredSamples);
	void FinishWith(const FAnchorCalibrationResult& Result);
	static void AverageAndJitter(const TArray<FVector>& Samples, FVector& OutMean, double& OutMaxDeviation);

	bool bCalibrating = false;
	float Elapsed = 0.0f;
	TArray<FVector> SamplesA;
	TArray<FVector> SamplesB;
	TArray<FVector> SamplesC;
};

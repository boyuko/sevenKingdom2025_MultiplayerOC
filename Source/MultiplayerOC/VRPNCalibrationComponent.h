// VRPN two/three-point auto calibration for BP_VRPNTransform.
//
// Put the physical markers (each driven by a LiveLink VRPN subject and attached as a child
// of BP_VRPNTransform) at TargetOriginWorld (default 0,0,0), TargetAxisWorld (default 100,0,0)
// and optionally TargetThirdWorld (default 0,100,0). Assign them in the Details panel, then call
// StartCalibration(); after SampleDuration seconds the owner actor's transform is changed so that
// the origin marker sits exactly on TargetOriginWorld in WORLD space and the others line up with their targets.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VRPNCalibrationComponent.generated.h"

class AActor;

UENUM(BlueprintType)
enum class EVRPNCalibrationMode : uint8
{
	/** Solve yaw (rotation about world Z) + translation. Existing pitch/roll of the owner is kept. Best when the tracking space is gravity aligned (Z up). */
	YawOnly UMETA(DisplayName = "Yaw Only (keep pitch/roll)"),

	/** Rotate the owner by the shortest arc so the marker line matches the target line (roll about that line is left unchanged). */
	Full3DAlign UMETA(DisplayName = "Full 3D Align (shortest arc)")
};

USTRUCT(BlueprintType)
struct FVRPNCalibrationResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	bool bSuccess = false;

	/** Human readable status / error text. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FString Message;

	/** Transform that was applied to the owner (only valid when bSuccess). */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FTransform NewOwnerTransform;

	/** Averaged marker positions expressed in the owner's (tracker) space, in world scale. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FVector OriginMarkerLocal = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FVector AxisMarkerLocal = FVector::ZeroVector;

	/** Only meaningful when bUsedThirdPoint. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FVector ThirdMarkerLocal = FVector::ZeroVector;

	/** True when the optional third marker took part (full 6-DOF solve). */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	bool bUsedThirdPoint = false;

	/** Distance between the two markers as measured by the tracker. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double MeasuredDistance = 0.0;

	/** Distance between the two target points. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double ExpectedDistance = 0.0;

	/** |Measured - Expected| / Expected * 100. Large values mean wrong marker placement or wrong units. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double DistanceErrorPercent = 0.0;

	/** Distance between where each marker ends up and its target world point after applying the result. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double OriginResidual = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double AxisResidual = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double ThirdResidual = 0.0;

	/** Max deviation of any sample from the mean (origin / axis / third marker). Large = markers were moving. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double OriginJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double AxisJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double ThirdJitter = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	int32 SampleCount = 0;

	/** Change of owner yaw caused by this calibration, in degrees. */
	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	double YawDeltaDegrees = 0.0;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVRPNCalibrationFinished, const FVRPNCalibrationResult&, Result);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MULTIPLAYEROC_API UVRPNCalibrationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UVRPNCalibrationComponent();

	// ---------------------------------------------------------------- Markers

	/** Actor (child of the owner, driven by LiveLink VRPN) that is physically placed at TargetOriginWorld. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Markers")
	TObjectPtr<AActor> OriginMarker;

	/** Actor (child of the owner, driven by LiveLink VRPN) that is physically placed at TargetAxisWorld. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Markers")
	TObjectPtr<AActor> AxisMarker;

	/**
	 * Optional third point. When enabled, all three markers are used and the full position + rotation
	 * (yaw, pitch AND roll) is solved, so Mode is ignored. The three points must not lie on one line.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Markers")
	bool bUseThirdPoint = false;

	/** Actor (child of the owner, driven by LiveLink VRPN) that is physically placed at TargetThirdWorld. Only used when bUseThirdPoint. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Markers", meta = (EditCondition = "bUseThirdPoint"))
	TObjectPtr<AActor> ThirdMarker;

	/** Fail if the markers are not attached (directly or indirectly) to the owner. Their positions could not be converted to tracker space otherwise. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Markers")
	bool bRequireMarkersAttachedToOwner = true;

	// ---------------------------------------------------------------- Targets

	/** World position where the origin marker is physically placed (Unreal units, 1 = 1 cm). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Targets")
	FVector TargetOriginWorld = FVector::ZeroVector;

	/** World position where the axis marker is physically placed. Default = 1 m along +X. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Targets")
	FVector TargetAxisWorld = FVector(100.0, 0.0, 0.0);

	/** World position where the optional third marker is physically placed. Default = 1 m along +Y. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Targets", meta = (EditCondition = "bUseThirdPoint"))
	FVector TargetThirdWorld = FVector(0.0, 100.0, 0.0);

	/** Two-point solve mode. Ignored when bUseThirdPoint is on. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Targets", meta = (EditCondition = "!bUseThirdPoint"))
	EVRPNCalibrationMode Mode = EVRPNCalibrationMode::YawOnly;

	// ---------------------------------------------------------------- Sampling / validation

	/** Seconds the markers are averaged for. Keep them still during this time. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Sampling", meta = (ClampMin = "0.0"))
	float SampleDuration = 2.0f;

	/** Calibration fails if fewer frames than this were sampled. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Sampling", meta = (ClampMin = "1"))
	int32 MinSamples = 10;

	/** Reject the calibration when the measured marker distance differs from the target distance by more than this percentage. 0 = no check. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Sampling", meta = (ClampMin = "0.0"))
	double MaxDistanceErrorPercent = 5.0;

	/** Reject the calibration when a marker moved more than this (Unreal units) from its average during sampling. 0 = no check. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Sampling", meta = (ClampMin = "0.0"))
	double MaxJitter = 3.0;

	// ---------------------------------------------------------------- Persistence / feedback

	/** Write the result to Saved/<SaveFileName> after every successful calibration. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Persistence")
	bool bAutoSaveAfterCalibration = true;

	/** Restore the saved calibration to the owner on BeginPlay (if the file exists). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Persistence")
	bool bAutoLoadOnBeginPlay = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Persistence")
	FString SaveFileName = TEXT("VRPNCalibration.txt");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRPN Calibration|Persistence")
	bool bShowOnScreenMessage = true;

	// ---------------------------------------------------------------- API

	/** Start averaging the markers for SampleDuration seconds, then calibrate. Result arrives through OnCalibrationFinished. */
	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	bool StartCalibration();

	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	void CancelCalibration();

	/** Calibrate immediately from the current frame only (no averaging). Handy for testing. */
	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	FVRPNCalibrationResult CalibrateInstant();

	/** Put the owner back to the transform it had before the last successful calibration. */
	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	bool UndoLastCalibration();

	/** Save the owner's current location + rotation to Saved/<SaveFileName>. */
	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	bool SaveCalibration() const;

	/** Load location + rotation from Saved/<SaveFileName> and apply it to the owner. */
	UFUNCTION(BlueprintCallable, Category = "VRPN Calibration")
	bool LoadCalibration();

	UFUNCTION(BlueprintPure, Category = "VRPN Calibration")
	bool IsCalibrating() const { return bCalibrating; }

	/** 0..1 while sampling. */
	UFUNCTION(BlueprintPure, Category = "VRPN Calibration")
	float GetProgress() const;

	UFUNCTION(BlueprintPure, Category = "VRPN Calibration")
	FString GetSavePath() const;

	UPROPERTY(BlueprintAssignable, Category = "VRPN Calibration")
	FVRPNCalibrationFinished OnCalibrationFinished;

	UPROPERTY(BlueprintReadOnly, Category = "VRPN Calibration")
	FVRPNCalibrationResult LastResult;

	/**
	 * Pure math. OriginLocal / AxisLocal are the marker positions in the owner's space (owner world scale already applied).
	 * Finds the owner rotation + location such that Origin -> TargetOrigin and Axis lies on the target line.
	 */
	static bool SolveTwoPoint(const FVector& OriginLocal, const FVector& AxisLocal,
		const FVector& TargetOrigin, const FVector& TargetAxis,
		const FQuat& CurrentRotation, EVRPNCalibrationMode InMode,
		FQuat& OutRotation, FVector& OutLocation, FString& OutError);

	/**
	 * Pure math for three points. Builds an orthonormal frame from (Origin, Axis, Third) in both
	 * spaces (X = Origin->Axis, Z = X x (Origin->Third), Y = Z x X), takes the rotation between the frames,
	 * and a translation anchored on the origin marker, so the origin marker lands exactly on TargetOrigin.
	 */
	static bool SolveThreePoint(const FVector& OriginLocal, const FVector& AxisLocal, const FVector& ThirdLocal,
		const FVector& TargetOrigin, const FVector& TargetAxis, const FVector& TargetThird,
		FQuat& OutRotation, FVector& OutLocation, FString& OutError);

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool GetMarkerInOwnerSpace(const AActor* Marker, FVector& OutLocal, FString& OutError) const;
	bool SampleMarkers(FVector& OutA, FVector& OutB, FVector& OutC, FString& OutError) const;
	FVRPNCalibrationResult ComputeAndApply(const TArray<FVector>& InSamplesA, const TArray<FVector>& InSamplesB, const TArray<FVector>& InSamplesC, int32 RequiredSamples);
	void FinishWith(const FVRPNCalibrationResult& Result);
	static void AverageAndJitter(const TArray<FVector>& Samples, FVector& OutMean, double& OutMaxDeviation);
	void VerifyOwnerTransform();

	int32 VerifyTicksRemaining = 0;
	FTransform VerifyExpectedTransform;

	bool bCalibrating = false;
	float Elapsed = 0.0f;
	TArray<FVector> SamplesA;
	TArray<FVector> SamplesB;
	TArray<FVector> SamplesC;

	bool bHasPreviousTransform = false;
	FTransform PreviousTransform;
};

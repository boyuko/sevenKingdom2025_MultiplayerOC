// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

class USceneCaptureComponent2D;
class UCineCameraComponent;

/**
 *
 */
UCLASS()
class MULTIPLAYEROC_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Same math as CineCamera Filmback + Sensor Offset (lens shift), applied to a SceneCaptureComponent2D.
	UFUNCTION(BlueprintCallable, Category = "Projection")
	static void ApplyCineProjection(USceneCaptureComponent2D* Capture,
		float FocalLength = 18.75f, float SensorW = 36.f, float SensorH = 20.25f,
		float OffsetX = 0.f, float OffsetY = 0.f, float NearClip = 10.f);

	// Floor capture that seamlessly continues below WallCamera's bottom edge.
	// Reads WallCamera's current focal length / filmback and the angle between the two cameras every call,
	// so call it on Tick (or whenever focal length / preset changes).
	// WidthScale: floor width relative to the seam width (e.g. 9/7 = 1.285714)
	// AspectRatio: floor render target width / height (e.g. 3:2 = 1.5)
	UFUNCTION(BlueprintCallable, Category = "Projection")
	static void ApplyFloorProjection(USceneCaptureComponent2D* FloorCapture, UCineCameraComponent* WallCamera,
		float WidthScale = 1.285714f, float AspectRatio = 1.5f, float NearClip = 10.f);
};

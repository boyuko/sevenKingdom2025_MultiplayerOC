// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Components/SceneCaptureComponent2D.h"
#include "CineCameraComponent.h"

void UMyBlueprintFunctionLibrary::ApplyCineProjection(USceneCaptureComponent2D* Capture,
	float FocalLength, float SensorW, float SensorH,
	float OffsetX, float OffsetY, float NearClip)
{
	if (!Capture || FocalLength <= 0.f || SensorW <= 0.f || SensorH <= 0.f)
	{
		return;
	}

	// Frustum edges as tangents (x/z, y/z), shifted by the sensor offset (lens shift)
	const float L = (-SensorW * 0.5f + OffsetX) / FocalLength;
	const float R = ( SensorW * 0.5f + OffsetX) / FocalLength;
	const float B = (-SensorH * 0.5f + OffsetY) / FocalLength;
	const float T = ( SensorH * 0.5f + OffsetY) / FocalLength;

	// UE reversed-Z, infinite far plane perspective matrix with off-center offset
	const FMatrix M(
		FPlane(2.f / (R - L),      0.f,                0.f,      0.f),
		FPlane(0.f,                2.f / (T - B),      0.f,      0.f),
		FPlane(-(R + L) / (R - L), -(T + B) / (T - B), 0.f,      1.f),
		FPlane(0.f,                0.f,                NearClip, 0.f));

	Capture->bUseCustomProjectionMatrix = true;
	Capture->CustomProjectionMatrix = M;
}

void UMyBlueprintFunctionLibrary::ApplyFloorProjection(USceneCaptureComponent2D* FloorCapture, UCineCameraComponent* WallCamera,
	float WidthScale, float AspectRatio, float NearClip)
{
	if (!FloorCapture || !WallCamera || AspectRatio <= 0.f || WidthScale <= 0.f)
	{
		return;
	}

	const float FocalLength = WallCamera->CurrentFocalLength;
	const float SensorW = WallCamera->Filmback.SensorWidth;
	const float SensorH = WallCamera->Filmback.SensorHeight;
	if (FocalLength <= 0.f || SensorW <= 0.f || SensorH <= 0.f)
	{
		return;
	}

	// Wall camera frustum (symmetric): bottom-edge tan and half-width tan
	const float A = (SensorH * 0.5f) / FocalLength;
	const float S = (SensorW * 0.5f) / FocalLength;

	// Theta = 90deg - angle between the two cameras' forward vectors
	// (floor capture at relative pitch -90 -> 0; at -85 under a -5 pitched camera -> 5deg)
	const float Dot = FMath::Clamp(FVector::DotProduct(WallCamera->GetForwardVector(), FloorCapture->GetForwardVector()), -1.f, 1.f);
	const float Theta = HALF_PI - FMath::Acos(Dot);

	const float Z = FMath::Sin(Theta) + A * FMath::Cos(Theta);
	const float F = FMath::Cos(Theta) - A * FMath::Sin(Theta);
	if (Z <= KINDA_SMALL_NUMBER)
	{
		return;
	}

	const float TopTan    = F / Z;                     // seam edge
	const float HalfWTan  = (S / Z) * WidthScale;      // floor half width
	const float SpanTan   = 2.f * HalfWTan / AspectRatio;

	// Express as an equivalent lens with a reference focal length of 10
	const float Ref = 10.f;
	const float OutSensorW = 2.f * Ref * HalfWTan;
	const float OutSensorH = Ref * SpanTan;
	const float OutOffsetY = Ref * TopTan - OutSensorH * 0.5f;

	ApplyCineProjection(FloorCapture, Ref, OutSensorW, OutSensorH, 0.f, OutOffsetY, NearClip);
}

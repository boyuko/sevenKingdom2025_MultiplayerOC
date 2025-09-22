// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "MyViewportBPLibrary.generated.h"

UCLASS()
class MULTIPLAYEROC_API UMyViewportBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Blueprint 呼叫：把當前 Viewport BackBuffer 複製到指定 RenderTarget */
    UFUNCTION(BlueprintCallable, Category = "Viewport")
    static void CopyViewportToRenderTarget(UTextureRenderTarget2D* TargetRT);
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "Engine/TextureRenderTarget2D.h"
#include "MyGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYEROC_API UMyGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	
public:
	virtual void Draw(FViewport* InViewport, FCanvas* SceneCanvas) override;

	/** 允許從藍圖指定 RenderTarget */
	UFUNCTION(BlueprintCallable, Category = "Viewport")
	void SetTargetRenderTexture(UTextureRenderTarget2D* InTarget);

private:
	UPROPERTY()
	UTextureRenderTarget2D* MyTargetRenderTexture;
	
	
};

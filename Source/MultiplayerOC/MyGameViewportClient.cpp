// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameViewportClient.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RHICommandList.h"
#include "RenderUtils.h"

 void CopyBackBufferToRenderTarget(FTexture2DRHIRef BackBuffer, UTextureRenderTarget2D* TargetRT)
{
    if (!TargetRT || !TargetRT->GetRenderTargetResource())
        return;

    FTextureRHIRef DestTexture = TargetRT->GetRenderTargetResource()->GetRenderTargetTexture();

    FRHICopyTextureInfo CopyInfo;
    ENQUEUE_RENDER_COMMAND(CopyBackBuffer)(
        [BackBuffer, DestTexture, CopyInfo](FRHICommandListImmediate& RHICmdList)
        {
            RHICmdList.CopyTexture(BackBuffer, DestTexture, CopyInfo);
        }
     );
}

void UMyGameViewportClient::Draw(FViewport* InViewport, FCanvas* SceneCanvas)
{
    Super::Draw(InViewport, SceneCanvas);

    if (InViewport && InViewport->GetRenderTargetTexture())
    {
        FTextureRHIRef BackBuffer = Viewport->GetRenderTargetTexture();

        // ✅ 複製 BackBuffer → RenderTarget
        CopyBackBufferToRenderTarget(BackBuffer, MyTargetRenderTexture);
    }
}

void UMyGameViewportClient::SetTargetRenderTexture(UTextureRenderTarget2D* InTarget)
{
    MyTargetRenderTexture = InTarget;
}


#include "MyViewportBPLibrary.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "RHI.h"
#include "RHICommandList.h"

void UMyViewportBPLibrary::CopyViewportToRenderTarget(UTextureRenderTarget2D* TargetRT)
{
    if (!TargetRT || !GEngine || !GEngine->GameViewport)
    {
        UE_LOG(LogTemp, Warning, TEXT("CopyViewportToRenderTarget: Invalid inputs"));
        return;
    }

    FViewport* Viewport = GEngine->GameViewport->Viewport;
    if (!Viewport)
        return;

    FTextureRHIRef BackBuffer = Viewport->GetRenderTargetTexture();
    if (!BackBuffer.IsValid())
        return;

    // 把 TargetRT 的 RHI 資源取得 & 丟到渲染執行緒
    ENQUEUE_RENDER_COMMAND(CopyBackBuffer)(
        [TargetRT, BackBuffer](FRHICommandListImmediate& RHICmdList)
        {
            if (TargetRT->GetRenderTargetResource())
            {
                FTextureRHIRef DestTexture = TargetRT->GetRenderTargetResource()->GetRenderTargetTexture();
                FRHICopyTextureInfo CopyInfo;
                RHICmdList.CopyTexture(BackBuffer, DestTexture, CopyInfo);
            }
        }
        );
}

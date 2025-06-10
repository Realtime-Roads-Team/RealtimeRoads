// Copyright Epic Games, Inc. All Rights Reserved.

#include "Objects/CompositeWorldData.h"

#include "Assets/Composite.h"
#include "Actors/CompositePlanarReflection.h"
#include "Components/CompositePlanarReflectionComponent.h"

#include "Kismet/KismetRenderingLibrary.h"

UCompositeWorldData::UCompositeWorldData()
{
    bIsWorldCompositeEnabled = true;
    bEnableCameraMotionBlur = false; // Disable camera motion blur by defaults due to artifacts it can cause, especially when keying.
	WorldComposite = CreateDefaultSubobject<UComposite>(TEXT("Composite"), /* bTransient = */false);
}

ACompositePlanarReflection* UCompositeWorldData::GetCompositePlanarReflection() const
{
    return CompositePlanarReflection;
}

void UCompositeWorldData::SetCompositePlanarReflection(ACompositePlanarReflection* NewCompositePlanarReflection)
{
    if (CompositePlanarReflection)
    {
        CompositePlanarReflection->GetCaptureComponent2D()->bCaptureEveryFrame = false;
        UKismetRenderingLibrary::ClearRenderTarget2D(this, CompositePlanarReflection->GetCaptureComponent2D()->TextureTarget, FLinearColor(0, 0, 0, 0));
    }

    CompositePlanarReflection = NewCompositePlanarReflection;

    if (CompositePlanarReflection)
    {
        CompositePlanarReflection->GetCaptureComponent2D()->bCaptureEveryFrame = true;
    }
}

#if WITH_EDITOR

void UCompositeWorldData::PreEditChange(FProperty* PropertyAboutToChange)
{
    const FName PropertyName = (PropertyAboutToChange != nullptr) ? PropertyAboutToChange->GetFName() : NAME_None;

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCompositeWorldData, CompositePlanarReflection))
    {
        // Disable rendering on the current planar reflection before the new one is set.
        SetCompositePlanarReflection(nullptr);
    }

    Super::PreEditChange(PropertyAboutToChange);
}

void UCompositeWorldData::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

    const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCompositeWorldData, CompositePlanarReflection))
    {
        SetCompositePlanarReflection(CompositePlanarReflection);
    }

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCompositeWorldData, bDebugVisualizeCompositeMeshes))
    {
        bDebugVisualizeShadows = false;
        bDebugVisualizeAlphaInRgb = false;
    }

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCompositeWorldData, bDebugVisualizeShadows))
    {
        bDebugVisualizeCompositeMeshes = false;
        bDebugVisualizeAlphaInRgb = false;
    }

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UCompositeWorldData, bDebugVisualizeAlphaInRgb))
    {
        bDebugVisualizeCompositeMeshes = false;
        bDebugVisualizeShadows = false;
    }
}
#endif

// Copyright Epic Games, Inc. All Rights Reserved.

#include "Objects/CompositeViewExtension.h"

#include "Subsystems/CompositorSubsystem.h"
#include "Objects/CompositeWorldData.h"

#include "Materials/MaterialParameterCollection.h"
#include "Kismet/KismetMaterialLibrary.h"

#include "SceneView.h"

//------------------------------------------------------------------------------
FCompositeViewExtension::FCompositeViewExtension(const FAutoRegister& AutoRegister, UCompositorSubsystem* Owner)
	: FSceneViewExtensionBase(AutoRegister)
	, CompositorSubsystem(Owner)
{}

void FCompositeViewExtension::SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView)
{

}

int32 FCompositeViewExtension::GetPriority() const
{
	return 50;
}

//------------------------------------------------------------------------------
bool FCompositeViewExtension::IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const
{
	bool bActive = false;
	if (CompositorSubsystem.IsValid())
	{
		if (CompositorSubsystem->GetCompositeViewport() == Context.Viewport)
		{
			const UCompositeWorldData* CompositeWorldData = CompositorSubsystem->GetCompositeWorldData();
			if (IsValid(CompositeWorldData))
			{
				bActive = CompositeWorldData->GetIsWorldCompositeEnabled();
			}
		}
	}
	return bActive;
}


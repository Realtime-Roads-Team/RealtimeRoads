// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RealtimeRoadsSystemsStyle.h"
#include "RealtimeRoadsSystems.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FRealtimeRoadsSystemsStyle::StyleInstance = nullptr;

void FRealtimeRoadsSystemsStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FRealtimeRoadsSystemsStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FRealtimeRoadsSystemsStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("RealtimeRoadsSystemsStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FRealtimeRoadsSystemsStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("RealtimeRoadsSystemsStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("RealtimeRoadsSystems")->GetBaseDir() / TEXT("Resources"));

	Style->Set("RealtimeRoadsSystems.PluginAction", new IMAGE_BRUSH_SVG(TEXT("CarIcon"), Icon20x20));
	Style->Set("RealtimeRoadsSystems.StartHAPIServerAction", new IMAGE_BRUSH_SVG(TEXT("HoudiniIcon"), Icon20x20));
	Style->Set("RealtimeRoadsSystems.PlayAction", new IMAGE_BRUSH_SVG(TEXT("PlayIcon"), Icon20x20));
	Style->Set("RealtimeRoadsSystems.PauseAction", new IMAGE_BRUSH_SVG(TEXT("PauseIcon"), Icon20x20));
	Style->Set("RealtimeRoadsSystems.StopAction", new IMAGE_BRUSH_SVG(TEXT("StopIcon"), Icon20x20));
	Style->Set("RealtimeRoadsSystems.TestAction", new IMAGE_BRUSH_SVG(TEXT("TestIcon"), Icon20x20));
	return Style;
}

void FRealtimeRoadsSystemsStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FRealtimeRoadsSystemsStyle::Get()
{
	return *StyleInstance;
}

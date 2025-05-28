// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RealtimeRoadsSystems.h"
#include "RealtimeRoadsSystemsStyle.h"
#include "RealtimeRoadsSystemsCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName RealtimeRoadsSystemsTabName("RealtimeRoadsSystems");

#define LOCTEXT_NAMESPACE "FRealtimeRoadsSystemsModule"

void FRealtimeRoadsSystemsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FRealtimeRoadsSystemsStyle::Initialize();
	FRealtimeRoadsSystemsStyle::ReloadTextures();

	FRealtimeRoadsSystemsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::PluginButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().StartHAPIServerAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::StartHapiButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FRealtimeRoadsSystemsModule::RegisterMenus));
}

void FRealtimeRoadsSystemsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FRealtimeRoadsSystemsStyle::Shutdown();

	FRealtimeRoadsSystemsCommands::Unregister();
}

void FRealtimeRoadsSystemsModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
		LOCTEXT("Realtime Roads test button text", "This is a {0}"),
		FText::FromString(TEXT("test"))
	);
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FRealtimeRoadsSystemsModule::StartHapiButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
		LOCTEXT("Realtime Roads test button text", "This is a {0}"),
		FText::FromString(TEXT("test"))
	);
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FRealtimeRoadsSystemsModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);
	// Extend the Toolbar menu
	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.SecondaryToolbar");
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");

		// Add toolbar buttons with command list correctly assigned
		FToolMenuEntry& Entry1 = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().PluginAction));
		Entry1.SetCommandList(PluginCommands);

		FToolMenuEntry& Entry2 = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().StartHAPIServerAction));
		Entry2.SetCommandList(PluginCommands);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRealtimeRoadsSystemsModule, RealtimeRoadsSystems)
// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RealtimeRoadsSystems.h"
#include "RealtimeRoadsSystemsStyle.h"
#include "RealtimeRoadsSystemsCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "HapiContainer.h"

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
		FRealtimeRoadsSystemsCommands::Get().TestAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::TestButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().StartHAPIServerAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::StartHapiButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().PlayAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::PlayButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().PauseAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::PauseButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FRealtimeRoadsSystemsCommands::Get().StopAction,
		FExecuteAction::CreateRaw(this, &FRealtimeRoadsSystemsModule::StopButtonClicked),
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

void FRealtimeRoadsSystemsModule::TestButtonClicked()
{
	UHapiContainer* HapiContainer = NewObject<UHapiContainer>();

	HapiContainer->TestHDA = LoadObject<UHoudiniAsset>(nullptr, TEXT("/RealtimeRoadsSystems/HoudiniContent/hda/object_RealtimeRoads_Test_1_0.object_RealtimeRoads_Test_1_0"));
	HapiContainer->CubesToSpawn = rand() % 101;
	HapiContainer->TestInput();
}

void FRealtimeRoadsSystemsModule::StartHapiButtonClicked()
{
	UHapiContainer* HapiContainer = NewObject<UHapiContainer>();

	FString HapiOut = HapiContainer->StartHapi();

	FText DialogText = FText::Format(
		LOCTEXT("HAPI Server", "{0}"),
		FText::FromString(HapiOut)
	);
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FRealtimeRoadsSystemsModule::PlayButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
		LOCTEXT("Realtime Roads test button text", "This is a {0}"),
		FText::FromString(TEXT("test"))
	);
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FRealtimeRoadsSystemsModule::PauseButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
		LOCTEXT("Realtime Roads test button text", "This is a {0}"),
		FText::FromString(TEXT("test"))
	);
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FRealtimeRoadsSystemsModule::StopButtonClicked()
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
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.User");
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("RealtimeRoads");

		// Add toolbar buttons with command list correctly assigned
		FToolMenuEntry& PluginButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().PluginAction));
		PluginButton.SetCommandList(PluginCommands);

		FToolMenuEntry& StartHapiButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().StartHAPIServerAction));
		StartHapiButton.SetCommandList(PluginCommands);

		FToolMenuEntry& PlayButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().PlayAction));
		PlayButton.SetCommandList(PluginCommands);

		FToolMenuEntry& PauseButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().PauseAction));
		PauseButton.SetCommandList(PluginCommands);

		FToolMenuEntry& StopButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().StopAction));
		StopButton.SetCommandList(PluginCommands);

		FToolMenuEntry& TestButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().TestAction));
		TestButton.SetCommandList(PluginCommands);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRealtimeRoadsSystemsModule, RealtimeRoadsSystems)
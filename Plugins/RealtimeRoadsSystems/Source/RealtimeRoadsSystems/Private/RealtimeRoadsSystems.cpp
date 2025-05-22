// Copyright Epic Games, Inc. All Rights Reserved.

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

void FRealtimeRoadsSystemsModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FRealtimeRoadsSystemsCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FRealtimeRoadsSystemsCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRealtimeRoadsSystemsModule, RealtimeRoadsSystems)
// Copyright Epic Games, Inc. All Rights Reserved.

#include "RealtimeRoadsSystemsCommands.h"

#define LOCTEXT_NAMESPACE "FRealtimeRoadsSystemsModule"

void FRealtimeRoadsSystemsCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "RealtimeRoadsSystems", "Execute RealtimeRoadsSystems action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE

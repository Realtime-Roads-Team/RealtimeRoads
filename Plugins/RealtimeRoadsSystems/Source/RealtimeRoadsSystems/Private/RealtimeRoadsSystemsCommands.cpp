// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright (c) 2025 Morgan Skillicorn. All rights reserved.

#include "RealtimeRoadsSystemsCommands.h"

#define LOCTEXT_NAMESPACE "FRealtimeRoadsSystemsModule"

void FRealtimeRoadsSystemsCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "RealtimeRoadsSystems", "Execute RealtimeRoadsSystems action", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(TestAction, "TEST ACTION", "TEST ACTION", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(StartHAPIServerAction, "Start HAPI Server", "Start the Houdini Engine HAPI session", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PlayAction, "Start", "Start driving scene playback", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PauseAction, "Pause", "Pause driving scene playback", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(StopAction, "Stop", "Stop driving scene playback", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Framework/Commands/Commands.h"
#include "RealtimeRoadsSystemsStyle.h"

class FRealtimeRoadsSystemsCommands : public TCommands<FRealtimeRoadsSystemsCommands>
{
public:

	FRealtimeRoadsSystemsCommands()
		: TCommands<FRealtimeRoadsSystemsCommands>(TEXT("RealtimeRoadsSystems"), NSLOCTEXT("Contexts", "RealtimeRoadsSystems", "RealtimeRoadsSystems Plugin"), NAME_None, FRealtimeRoadsSystemsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};

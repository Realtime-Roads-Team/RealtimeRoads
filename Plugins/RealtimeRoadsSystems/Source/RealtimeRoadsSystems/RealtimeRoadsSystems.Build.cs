// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RealtimeRoadsSystems : ModuleRules
{
	public RealtimeRoadsSystems(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// Public include paths (add if needed)
		PublicIncludePaths.AddRange(new string[]
		{
			// "RealtimeRoadsSystems/Public"
		});

		// Private include paths (add if needed)
		PrivateIncludePaths.AddRange(new string[]
		{
			// "RealtimeRoadsSystems/Private"
		});

		// Core runtime dependencies
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"Projects",
			"HoudiniEngineRuntime",
            "HoudiniEngineEditor",
            "HoudiniEngine",
        });

		// Editor-only modules
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"UnrealEd",
				"EditorFramework",
				"ToolMenus",
            });
		}

		// UI and framework
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore"
        });

		// Dynamically loaded modules (none currently)
		DynamicallyLoadedModuleNames.AddRange(new string[] {});
	}
}
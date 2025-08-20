// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UI_Project : ModuleRules
{
	public UI_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UI_Project",
			"UI_Project/Variant_Platforming",
			"UI_Project/Variant_Platforming/Animation",
			"UI_Project/Variant_Combat",
			"UI_Project/Variant_Combat/AI",
			"UI_Project/Variant_Combat/Animation",
			"UI_Project/Variant_Combat/Gameplay",
			"UI_Project/Variant_Combat/Interfaces",
			"UI_Project/Variant_Combat/UI",
			"UI_Project/Variant_SideScrolling",
			"UI_Project/Variant_SideScrolling/AI",
			"UI_Project/Variant_SideScrolling/Gameplay",
			"UI_Project/Variant_SideScrolling/Interfaces",
			"UI_Project/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

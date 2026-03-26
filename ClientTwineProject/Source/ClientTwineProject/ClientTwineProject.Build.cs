// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ClientTwineProject : ModuleRules
{
	public ClientTwineProject(ReadOnlyTargetRules Target) : base(Target)
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
			"ClientTwineProject",
			"ClientTwineProject/Variant_Platforming",
			"ClientTwineProject/Variant_Platforming/Animation",
			"ClientTwineProject/Variant_Combat",
			"ClientTwineProject/Variant_Combat/AI",
			"ClientTwineProject/Variant_Combat/Animation",
			"ClientTwineProject/Variant_Combat/Gameplay",
			"ClientTwineProject/Variant_Combat/Interfaces",
			"ClientTwineProject/Variant_Combat/UI",
			"ClientTwineProject/Variant_SideScrolling",
			"ClientTwineProject/Variant_SideScrolling/AI",
			"ClientTwineProject/Variant_SideScrolling/Gameplay",
			"ClientTwineProject/Variant_SideScrolling/Interfaces",
			"ClientTwineProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

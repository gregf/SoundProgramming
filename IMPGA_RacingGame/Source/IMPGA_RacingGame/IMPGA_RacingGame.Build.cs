// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IMPGA_RacingGame : ModuleRules
{
	public IMPGA_RacingGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"ChaosVehicles",
			"PhysicsCore",
			"UMG",
			"Slate"
		});

		PublicIncludePaths.AddRange(new string[] {
			"IMPGA_RacingGame",
			"IMPGA_RacingGame/SportsCar",
			"IMPGA_RacingGame/OffroadCar",
			"IMPGA_RacingGame/Variant_Offroad",
			"IMPGA_RacingGame/Variant_TimeTrial",
			"IMPGA_RacingGame/Variant_TimeTrial/UI"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

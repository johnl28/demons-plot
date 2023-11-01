// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DemonsPlot : ModuleRules
{
	public DemonsPlot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

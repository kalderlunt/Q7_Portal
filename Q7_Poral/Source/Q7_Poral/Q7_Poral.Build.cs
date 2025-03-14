// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Q7_Poral : ModuleRules
{
	public Q7_Poral(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

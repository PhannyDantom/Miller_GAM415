// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Miller_GAM415 : ModuleRules
{
	public Miller_GAM415(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

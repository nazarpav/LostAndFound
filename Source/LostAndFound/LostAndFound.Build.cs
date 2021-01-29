// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LostAndFound : ModuleRules
{
	public LostAndFound(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

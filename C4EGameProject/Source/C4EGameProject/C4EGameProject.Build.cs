// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C4EGameProject : ModuleRules
{
	public C4EGameProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "UMG", "AIModule", "Niagara", "NavigationSystem", "GameplayTasks" });
	}
}

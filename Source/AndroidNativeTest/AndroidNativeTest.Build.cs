// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AndroidNativeTest : ModuleRules
{
	public AndroidNativeTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "AndroidNative" });
	}
}

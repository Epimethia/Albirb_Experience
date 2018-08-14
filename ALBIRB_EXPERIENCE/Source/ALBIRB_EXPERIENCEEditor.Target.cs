// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ALBIRB_EXPERIENCEEditorTarget : TargetRules
{
	public ALBIRB_EXPERIENCEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("ALBIRB_EXPERIENCE");
	}
}

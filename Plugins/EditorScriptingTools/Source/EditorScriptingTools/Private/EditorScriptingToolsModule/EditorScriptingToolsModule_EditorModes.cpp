//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"
#include "BluEdMode.h"


#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_EditorModes"


void FEditorScriptingToolsModule::RegisterEditorModes()
{
	FBluEdMode::Register();
}


void FEditorScriptingToolsModule::UnregisterEditorModes()
{
	FBluEdMode::Unregister();
}


void FEditorScriptingToolsModule::RegisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetActivated())
	{
		BluEdMode->SetCurrentToolBlueprint(ModeToolBlueprint, true /*bAutoLoadTool*/);
	}
}

void FEditorScriptingToolsModule::RefreshEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	if (FBluEdMode* BluEdmode = FBluEdMode::GetPtr())
	{
		check(BluEdmode->GetModeToolBlueprint() == ModeToolBlueprint);
		BluEdmode->ReloadTool();
	}
}

void FEditorScriptingToolsModule::UnregisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->GetModeToolBlueprint() == ModeToolBlueprint)
		{
			BluEdMode->SetCurrentToolBlueprint(nullptr);
		}
	}
}

bool FEditorScriptingToolsModule::CanRegisterEditorModeToolUtilityBlueprint(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return !BluEdMode->IsToolRunning(ModeToolBlueprint);
	}
	return true;
}

bool FEditorScriptingToolsModule::IsEditorModeToolUtilityBlueprintRegistered(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->IsToolRunning(ModeToolBlueprint);
	}
	return false;
}

#undef LOCTEXT_NAMESPACE	
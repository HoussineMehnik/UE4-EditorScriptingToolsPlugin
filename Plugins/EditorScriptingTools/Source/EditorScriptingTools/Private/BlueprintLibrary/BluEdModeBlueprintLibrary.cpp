//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "BluEdModeBlueprintLibrary.h"
#include "BluEdMode.h"
#include "EditorScriptingToolsUtils.h"
#include "EditorModeToolInstance.h"


bool UBluEdModeBlueprintLibrary::RunEditorModeToolInstance(TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint)
{
	if (UEditorModeToolUtilityBlueprint* EditorModeToolUtilityBlueprint = ToolBlueprint.LoadSynchronous())
	{
		if (FBluEdMode* BluEdMode = FBluEdMode::GetActivated())
		{
			BluEdMode->SetCurrentToolBlueprint(EditorModeToolUtilityBlueprint, true /*bAutoLoadTool*/);
			return true;
		}
	}

	return false;
}

bool UBluEdModeBlueprintLibrary::StopActiveEditorModeToolInstance()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (BluEdMode->HasValidToolInstance())
		{
			BluEdMode->UnloadTool();
			return true;
		}
	}

	return false;
}


bool UBluEdModeBlueprintLibrary::IsAnyEditorModeToolInstanceRunning()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return BluEdMode->HasValidToolInstance();
	}
	return false;
}


bool UBluEdModeBlueprintLibrary::IsEditorModeToolInstanceRunning(TSoftObjectPtr<UEditorModeToolUtilityBlueprint> ToolBlueprint)
{
	if (UEditorModeToolUtilityBlueprint* EditorModeToolUtilityBlueprint = ToolBlueprint.LoadSynchronous())
	{
		if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
		{
			if (BluEdMode->HasValidToolInstance())
			{
				return (EditorModeToolUtilityBlueprint == BluEdMode->GetModeToolBlueprint());
			}
		}
	}

	return false;
}

UEditorModeToolInstance* UBluEdModeBlueprintLibrary::GetActiveEditorModeToolInstanceInstance(TSubclassOf<UEditorModeToolInstance> ToolClass)
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		if (UEditorModeToolInstance* ActiveTool = BluEdMode->GetActiveToolInstance())
		{
			if (BluEdMode->GetModeToolClass() == ToolClass)
			{
				return ActiveTool;
			}
		}
	}
	return nullptr;
}

TSoftObjectPtr<UEditorModeToolUtilityBlueprint> UBluEdModeBlueprintLibrary::GetActiveEditorModeToolUtilityBlueprint()
{
	if (FBluEdMode* BluEdMode = FBluEdMode::GetPtr())
	{
		return TSoftObjectPtr<UEditorModeToolUtilityBlueprint>(BluEdMode->GetModeToolBlueprint());
	}
	return nullptr;
}

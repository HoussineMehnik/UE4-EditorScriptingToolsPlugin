//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedActionsBlueprintLibrary.h"

#include "EditorUserDefinedCommands.h"
#include "EditorUserDefinedActions.h"



bool UEditorUserDefinedActionsBlueprintLibrary::RegisterEditorActions(UEditorUserDefinedActions* ActionsAsset)
{
	return FEditorUserDefinedCommands::RegisterActions(ActionsAsset);
}

bool UEditorUserDefinedActionsBlueprintLibrary::UnregisterEditorActions()
{
	return FEditorUserDefinedCommands::UnregisterActions(true);
}

UEditorUserDefinedActions* UEditorUserDefinedActionsBlueprintLibrary::GetActiveEditorActionsAsset()
{
	return FEditorUserDefinedCommands::GetCurrentActionsAsset();
}
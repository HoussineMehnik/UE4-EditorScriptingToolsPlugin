//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

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
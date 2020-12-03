//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingUtilityBlueprint.h"
#include "IEditorScriptingToolsModule.h"


UEditorScriptingUtilityBlueprint::UEditorScriptingUtilityBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	OnCompiled().AddUObject(this, &UEditorScriptingUtilityBlueprint::OnUtilityBlueprintCompiled);
}

void UEditorScriptingUtilityBlueprint::BeginDestroy()
{
	if (!IsEngineExitRequested())
	{
		OnBlueprintDeleted();
	}
	Super::BeginDestroy();
}

bool UEditorScriptingUtilityBlueprint::Rename(const TCHAR* NewName /*= nullptr*/, UObject* NewOuter /*= nullptr*/, ERenameFlags Flags /*= REN_None*/)
{
	const bool bPreRenameSuccessful = PreRenameBlueprint();
	const bool bRenameSuccessful = Super::Rename(NewName, NewOuter, Flags);
	PostRenameBlueprint(bPreRenameSuccessful, bRenameSuccessful);
	return bRenameSuccessful;
}

void UEditorScriptingUtilityBlueprint::OnRegisterDone()
{
	OnEditorScriptingUtilityRegiteredDelegate.Broadcast(true);
}


void UEditorScriptingUtilityBlueprint::OnUnregisterDone()
{
	OnEditorScriptingUtilityRegiteredDelegate.Broadcast(false);
}

void UEditorScriptingUtilityBlueprint::OnBlueprintDeleted()
{
	IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
	ScriptingToolsModule->UnregisterEditorScriptingUtility(this);
}

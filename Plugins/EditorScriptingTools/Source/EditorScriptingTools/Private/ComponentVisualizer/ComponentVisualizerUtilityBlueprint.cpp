//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "ComponentVisualizerUtilityBlueprint.h"
#include "ComponentVisualizerInstance.h"
#include "EditorScriptingToolsSubsystem.h"
#include "IEditorScriptingToolsModule.h"


#define LOCTEXT_NAMESPACE "ComponentVisualizerUtilityBlueprint"

UComponentVisualizerUtilityBlueprint::UComponentVisualizerUtilityBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ComponentClass(nullptr)
{

}

bool UComponentVisualizerUtilityBlueprint::IsValid() const
{
	return ComponentClass.Get() != nullptr;
}

bool UComponentVisualizerUtilityBlueprint::PreRenameBlueprint()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	if (ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Contains(this))
	{
		ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Remove(this);
		return true;
	}
	return false;
}

void UComponentVisualizerUtilityBlueprint::PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful)
{
	if (bPreRenameSuccessful)
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Add(this);
		UEditorScriptingToolsSubsystem::GetSubsystem()->NotifySettingsModified();
	}
}


FName UComponentVisualizerUtilityBlueprint::GetUtilitySettingsCategoryName() const
{
	return FName("VisualizerSettings");
}

void UComponentVisualizerUtilityBlueprint::GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const
{
	OutProperties.Empty();
	{
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UComponentVisualizerUtilityBlueprint, ComponentClass));
	}
}

#if WITH_EDITOR
void UComponentVisualizerUtilityBlueprint::GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const
{
	AllowedChildrenOfClasses.Empty();
	AllowedChildrenOfClasses.Add(UComponentVisualizerInstance::StaticClass());
}
#endif //WITH_EDITOR


#undef LOCTEXT_NAMESPACE //"ComponentVisualizerUtilityBlueprint"
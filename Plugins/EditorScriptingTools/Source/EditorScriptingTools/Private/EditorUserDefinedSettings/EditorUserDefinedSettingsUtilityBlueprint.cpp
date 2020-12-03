//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "EditorUserDefinedSettings.h"
#include "EditorScriptingToolsSubsystem.h"
#include "IEditorScriptingToolsModule.h"


#define LOCTEXT_NAMESPACE "EditorUserDefinedSettingsUtilityBlueprint"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// UEditorUserDefinedSettingsUtilityBlueprint

UEditorUserDefinedSettingsUtilityBlueprint::UEditorUserDefinedSettingsUtilityBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CategoryName("UserDefinedSettings")
	, SectionName("NewSettings")
	, DisplayName(LOCTEXT("SectionDisplayName", "New Settings"))
	, Description(LOCTEXT("SectionDescription", "New settings section descrption"))
{

}

void UEditorUserDefinedSettingsUtilityBlueprint::OnUtilityBlueprintCompiled(UBlueprint* RecompiledBlueprint)
{
	IEditorScriptingToolsModule* ScriptingToolsModule = IEditorScriptingToolsModule::GetPtr();
	if (ScriptingToolsModule->IsEditorScriptingUtilityRegistered(this))
	{
		if (ScriptingToolsModule->IsEditorScriptingUtilityRegistered(this))
		{
			ScriptingToolsModule->RefreshEditorScriptingUtility(this);
		}
	}
}

bool UEditorUserDefinedSettingsUtilityBlueprint::PreRenameBlueprint()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	if (ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Contains(this))
	{
		ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Remove(this);
		return true;
	}
	return false;
}

void UEditorUserDefinedSettingsUtilityBlueprint::PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful)
{
	if (bPreRenameSuccessful)
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Add(this);
		UEditorScriptingToolsSubsystem::GetSubsystem()->NotifySettingsModified();
	}
}

FName UEditorUserDefinedSettingsUtilityBlueprint::GetUtilitySettingsCategoryName() const
{
	return FName("SectionSettings");
}

void UEditorUserDefinedSettingsUtilityBlueprint::GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const
{
	OutProperties.Empty();
	{
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorUserDefinedSettingsUtilityBlueprint, CategoryName));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorUserDefinedSettingsUtilityBlueprint, SectionName));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorUserDefinedSettingsUtilityBlueprint, DisplayName));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorUserDefinedSettingsUtilityBlueprint, Description));
	}
}



#if WITH_EDITOR
void UEditorUserDefinedSettingsUtilityBlueprint::GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const
{
	AllowedChildrenOfClasses.Empty();
	AllowedChildrenOfClasses.Add(UEditorUserDefinedSettings::StaticClass());
}
#endif //WITH_EDITOR


#undef LOCTEXT_NAMESPACE //"EditorUserDefinedSettingsUtilityBlueprint"

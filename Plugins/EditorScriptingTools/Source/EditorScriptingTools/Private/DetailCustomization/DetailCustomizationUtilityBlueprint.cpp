//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "DetailCustomizationUtilityBlueprint.h"
#include "DetailCustomizationInstance.h"
#include "EditorScriptingToolsSubsystem.h"

#define LOCTEXT_NAMESPACE "DetailCustomizationUtilityBlueprint"

UDetailCustomizationUtilityBlueprint::UDetailCustomizationUtilityBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CustomizedClass(nullptr)
{

}

bool UDetailCustomizationUtilityBlueprint::IsValid() const
{
	return CustomizedClass.Get() != nullptr;
}

bool UDetailCustomizationUtilityBlueprint::PreRenameBlueprint()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	if (ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Contains(this))
	{
		ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Remove(this);
		return true;
	}
	return false;
}

void UDetailCustomizationUtilityBlueprint::PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful)
{
	if (bPreRenameSuccessful)
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		ScriptingToolsSubsystem->DetailCustomizationUtilityBlueprints.Add(this);
		UEditorScriptingToolsSubsystem::GetSubsystem()->NotifySettingsModified();
	}
}


FName UDetailCustomizationUtilityBlueprint::GetUtilitySettingsCategoryName() const
{
	return FName("DetailCustomizationSettings");
}

void UDetailCustomizationUtilityBlueprint::GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const
{
	OutProperties.Empty();
	{
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UDetailCustomizationUtilityBlueprint, CustomizedClass));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UDetailCustomizationUtilityBlueprint, bAllowDefaultObjectCustomization));
	}
}

#if WITH_EDITOR
void UDetailCustomizationUtilityBlueprint::GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const
{
	AllowedChildrenOfClasses.Empty();
	AllowedChildrenOfClasses.Add(UDetailCustomizationInstance::StaticClass());
}
#endif //WITH_EDITOR


#undef LOCTEXT_NAMESPACE //"DetailCustomizationUtilityBlueprint"
//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorModeToolUtilityBlueprint.h"
#include "EditorModeToolInstance.h"
#include "BluEdMode.h"
#include "EditorScriptingToolsSubsystem.h"


#define LOCTEXT_NAMESPACE "EditorModeToolUtilityBlueprint"

UEditorModeToolUtilityBlueprint::UEditorModeToolUtilityBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ToolkitWidgetClass(nullptr)
	, ViewportOverlayWidgetClass(nullptr)
	, bShowToolDetailsPanel(true)
{

}

bool UEditorModeToolUtilityBlueprint::PreRenameBlueprint()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	if (ScriptingToolsSubsystem->LastLoadedEdModeToolBlueprint.LoadSynchronous() == this)
	{
		return true;
	}
	return false;
}

void UEditorModeToolUtilityBlueprint::PostRenameBlueprint(bool bPreRenameSuccessful, bool bRenameSuccessful)
{
	if (bPreRenameSuccessful)
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		ScriptingToolsSubsystem->LastLoadedEdModeToolBlueprint = this;
		ScriptingToolsSubsystem->NotifySettingsModified();
	}
}

FName UEditorModeToolUtilityBlueprint::GetUtilitySettingsCategoryName() const
{
	return FName("ToolSettings");
}

void UEditorModeToolUtilityBlueprint::GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const
{
	OutProperties.Empty();
	{
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorModeToolUtilityBlueprint, ToolkitWidgetClass));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorModeToolUtilityBlueprint, ViewportOverlayWidgetClass));
		OutProperties.Add(GET_MEMBER_NAME_CHECKED(UEditorModeToolUtilityBlueprint, bShowToolDetailsPanel));
	}
}


#if WITH_EDITOR
void UEditorModeToolUtilityBlueprint::GetReparentingRules(TSet< const UClass* >& AllowedChildrenOfClasses, TSet< const UClass* >& DisallowedChildrenOfClasses) const
{
	AllowedChildrenOfClasses.Empty();
	AllowedChildrenOfClasses.Add(UEditorModeToolInstance::StaticClass());
}
#endif //WITH_EDITOR


#undef LOCTEXT_NAMESPACE
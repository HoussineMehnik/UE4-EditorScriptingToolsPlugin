//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorScriptingToolsSubsystem.h"

#include "ISettingsEditorModule.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "DetailCustomizationUtilityBlueprint.h"
#include "EditorModeToolUtilityBlueprint.h"
#include "EditorUserDefinedActions.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "EditorUserWidgetBlueprint.h"
#include "Editor/EditorEngine.h"
#include "Editor.h"
#include "EditorScriptingToolsTypes.h"

#define CHECK_UTILITY_LIST_VALIDITY(BlueprintsList)										\
{																						\
	int32 RemovedEntries = BlueprintsList.RemoveAll([](const auto& UtilityBlueprintPtr)	\
			{																			\
				if (auto* UtilityBlueprint = UtilityBlueprintPtr.LoadSynchronous())		\
				{																		\
					return !UtilityBlueprint->IsValid();								\
				}																		\
				return true;															\
			});																			\
																						\
	if (RemovedEntries > 0)																\
	{																					\
		bModified = true;																\
		UE_LOG(LogEditorScriptingTools, Warning, TEXT("%d invalid entries removed from %s."),RemovedEntries, TEXT(#BlueprintsList));\
	}																					\
}																						\

#define LOCTEXT_NAMESPACE "EditorScriptingToolsSubsystem"



UEditorScriptingToolsSubsystem::UEditorScriptingToolsSubsystem()
	: LastLoadedEdModeToolBlueprint(nullptr)
	, bEnableThumbnailOverlayOnRegisteredUtilities(true)
	, bEnableEditingWhileSimulating(false)
{

}

void UEditorScriptingToolsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{

}

void UEditorScriptingToolsSubsystem::Deinitialize()
{

}

void UEditorScriptingToolsSubsystem::CheckValidity()
{
	bool bModified = false;
	{
		CHECK_UTILITY_LIST_VALIDITY(DetailCustomizationUtilityBlueprints);
		CHECK_UTILITY_LIST_VALIDITY(ComponentVisualizerUtilityBlueprints);
		CHECK_UTILITY_LIST_VALIDITY(EditorUserDefinedSettingsUtilityBlueprints);
	}

	if (bModified)
	{
		NotifySettingsModified();
	}
}

void UEditorScriptingToolsSubsystem::NotifySettingsModified(bool bSaveConfig /*= true*/)
{
	if (bSaveConfig)
	{
		SaveConfig(CPF_Config, *GetDefaultConfigFilename());
	}

	FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate.Broadcast();
}

UEditorScriptingToolsSubsystem* UEditorScriptingToolsSubsystem::GetSubsystem()
{
	return GEditor->GetEditorSubsystem<UEditorScriptingToolsSubsystem>();
}


#undef LOCTEXT_NAMESPACE

#undef CHECK_UTILITY_LIST_VALIDITY
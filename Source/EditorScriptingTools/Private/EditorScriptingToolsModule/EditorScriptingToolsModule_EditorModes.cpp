//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorScriptingToolsModule.h"
#include "BluEdMode.h"
#include "EditorScriptingToolsStyle.h"
#include "EditorModeRegistry.h"
#include "Textures/SlateIcon.h"
#include "Styling/SlateStyle.h"
#include "EditorScriptingToolsSubsystem.h"
#include "EditorModeToolUtilityBlueprint.h"

#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_EditorModes"

UEditorModeToolUtilityBlueprint* FEditorScriptingToolsModule::GetRegisteredEditorModeBlueprintUtility(const FEditorModeID& ModeID) const
{
	if (const TWeakObjectPtr<UEditorModeToolUtilityBlueprint>* Key = RegisteredEdModeTools.FindKey(ModeID))
	{
		return Key->Get();
	}
	return nullptr;
}

void FEditorScriptingToolsModule::RegisterEditorModes()
{
	FEditorModeRegistry::Get().RegisterMode<FBluEdMode>(
		FBluEdMode::BluEdModeID,
		LOCTEXT("BluEdModeName", "Blueprint Editor Mode"),
		FSlateIcon(FEditorScriptingToolsStyle::Get()->GetStyleSetName(), TEXT("BluEdMode")),
		true,
		FBluEdMode::BluEdModePriorityOrder
		);

	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	for (const auto& ToolBlueprintPtr : ScriptingToolsSubsystem->CustomEdModeUtilityBlueprints)
	{
		if (UEditorModeToolUtilityBlueprint* ToolBlueprint = ToolBlueprintPtr.LoadSynchronous())
		{
			RegisterCustomEdMode(ToolBlueprint);
		}
	}
}


void FEditorScriptingToolsModule::UnregisterEditorModes()
{
	FEditorModeRegistry::Get().UnregisterMode(FBluEdMode::BluEdModeID);

	for (const auto& Elem : RegisteredEdModeTools)
	{
		UnregisterCustomEdMode(Elem.Key.Get(), false);
	}
	RegisteredEdModeTools.Empty();
}


void FEditorScriptingToolsModule::RegisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	if (!IsEditorModeToolUtilityBlueprintRegistered(ModeToolBlueprint))
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		if (!ScriptingToolsSubsystem->CustomEdModeUtilityBlueprints.Contains(ModeToolBlueprint))
		{
			ScriptingToolsSubsystem->CustomEdModeUtilityBlueprints.Add(ModeToolBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}

		RegisterCustomEdMode(ModeToolBlueprint);
		ModeToolBlueprint->OnUnregisterDone();
	}
}

void FEditorScriptingToolsModule::RefreshEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	check(IsEditorModeToolUtilityBlueprintRegistered(ModeToolBlueprint));
	UnregisterCustomEdMode(ModeToolBlueprint, true);
	ModeToolBlueprint->OnUnregisterDone();
	RegisterCustomEdMode(ModeToolBlueprint);
	ModeToolBlueprint->OnUnregisterDone();
}

void FEditorScriptingToolsModule::UnregisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	if (IsEditorModeToolUtilityBlueprintRegistered(ModeToolBlueprint))
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		{
			ScriptingToolsSubsystem->CustomEdModeUtilityBlueprints.Remove(ModeToolBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		UnregisterCustomEdMode(ModeToolBlueprint, true);
		ModeToolBlueprint->OnUnregisterDone();
	}
}

bool FEditorScriptingToolsModule::CanRegisterEditorModeToolUtilityBlueprint(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const
{
	for (const auto& Elem : RegisteredEdModeTools)
	{
		if (Elem.Key.Get() == ModeToolBlueprint)
		{
			return false;
		}
	}
	return true;
}

bool FEditorScriptingToolsModule::IsEditorModeToolUtilityBlueprintRegistered(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const
{
	for (const auto& Elem : RegisteredEdModeTools)
	{
		if (Elem.Key.Get() == ModeToolBlueprint)
		{
			return true;
		}
	}
	return false;
}


void FEditorScriptingToolsModule::RegisterCustomEdMode(UEditorModeToolUtilityBlueprint* ModeToolBlueprint)
{
	static int32 ModeIdx = 0;
	const FEditorModeID EdModeID = FName(TEXT("Custom Tool") + FString::FromInt(ModeIdx++));

	FEditorModeRegistry::Get().RegisterMode<FBluEdMode>(
		EdModeID,
		FText::FromName(ModeToolBlueprint->GetFName()),
		FSlateIcon(),
		true,
		FBluEdMode::BluEdModePriorityOrder + ModeIdx);

	RegisteredEdModeTools.Add(ModeToolBlueprint, EdModeID);
}

void FEditorScriptingToolsModule::UnregisterCustomEdMode(UEditorModeToolUtilityBlueprint* ModeToolBlueprint, bool bRemoveFromRegisterList)
{
	const auto* Value = RegisteredEdModeTools.Find(ModeToolBlueprint);
	if (Value != nullptr)
	{
		const FEditorModeID& EdModeID = *Value;
		FEditorModeRegistry::Get().UnregisterMode(EdModeID);

		if (bRemoveFromRegisterList)
		{
			RegisteredEdModeTools.Remove(ModeToolBlueprint);
		}
	}
}

#undef LOCTEXT_NAMESPACE	
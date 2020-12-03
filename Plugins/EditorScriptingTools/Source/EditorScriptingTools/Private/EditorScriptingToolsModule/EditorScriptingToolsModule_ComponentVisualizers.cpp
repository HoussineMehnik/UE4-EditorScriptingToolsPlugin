//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"
#include "EditorScriptingToolsSubsystem.h"
#include "ComponentVisualizerUtilityBlueprint.h"
#include "ComponentVisualizerInstance.h"
#include "NativeComponentVisualizerInstance.h"

#include "Editor/UnrealEdEngine.h"
#include "UnrealEdGlobals.h"


#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_ComponentVisualizers"

void FEditorScriptingToolsModule::RegisterComponentVisualizers()
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	for (auto& VisualizerPtr : ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints)
	{
		if (UComponentVisualizerUtilityBlueprint* VisualizerBlueprint = VisualizerPtr.LoadSynchronous())
		{
			RegisterComponentVisualizer(VisualizerBlueprint);
		}
	}
}


void FEditorScriptingToolsModule::UnregisterComponentVisualizers()
{
	for (auto& Elem : RegisteredComponentVisualizers)
	{
		UnregisterComponentVisualizer(Elem.Key.Get(), false);
	}
	RegisteredUserDefinedSettings.Empty();
}


void FEditorScriptingToolsModule::RegisterComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint)
{
	if (!IsComponentVisualizerUtilityBlueprintRegistered(VisualizerBlueprint))
	{
		check(VisualizerBlueprint->ComponentClass);
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		if (!ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Contains(VisualizerBlueprint))
		{
			ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Add(VisualizerBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		RegisterComponentVisualizer(VisualizerBlueprint);
		VisualizerBlueprint->OnUnregisterDone();
	}
}

void FEditorScriptingToolsModule::RefreshComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint)
{
	check(IsComponentVisualizerUtilityBlueprintRegistered(VisualizerBlueprint));
	UnregisterComponentVisualizer(VisualizerBlueprint, true);
	VisualizerBlueprint->OnUnregisterDone();
	RegisterComponentVisualizer(VisualizerBlueprint);
	VisualizerBlueprint->OnUnregisterDone();
}

void FEditorScriptingToolsModule::UnregisterComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint)
{
	if (IsComponentVisualizerUtilityBlueprintRegistered(VisualizerBlueprint))
	{
		UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
		{
			ScriptingToolsSubsystem->ComponentVisualizerUtilityBlueprints.Remove(VisualizerBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		UnregisterComponentVisualizer(VisualizerBlueprint, true);
		VisualizerBlueprint->OnUnregisterDone();
	}
}

bool FEditorScriptingToolsModule::CanRegisterComponentVisualizerClass(UClass* ComponentClass) const
{
	check(ComponentClass != nullptr);
	const FComponentClassInfo ComponentClassInfo{ ComponentClass, ComponentClass->GetFName() };

	return
		RegisteredComponentVisualizers.FindKey(ComponentClassInfo) == nullptr &&
		!GUnrealEd->FindComponentVisualizer(ComponentClassInfo.ClassName).IsValid();
}

bool FEditorScriptingToolsModule::CanRegisterComponentVisualizerUtilityBlueprint(const UComponentVisualizerUtilityBlueprint* VisualizerBlueprint) const
{
	if (UClass* ComponentClass = VisualizerBlueprint->ComponentClass)
	{
		return CanRegisterComponentVisualizerClass(ComponentClass);
	}
	return false;
}

bool FEditorScriptingToolsModule::IsComponentVisualizerUtilityBlueprintRegistered(const UComponentVisualizerUtilityBlueprint* VisualizerBlueprint) const
{
	for (const auto& Elem : RegisteredComponentVisualizers)
	{
		if (Elem.Key.Get() == VisualizerBlueprint)
		{
			return true;
		}
	}
	return false;
}

void FEditorScriptingToolsModule::RegisterComponentVisualizer(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint)
{
	const FComponentClassInfo ComponentClassInfo{ VisualizerBlueprint->ComponentClass, VisualizerBlueprint->ComponentClass->GetFName() };
	TSharedPtr<FNativeComponentVisualizerInstance> NativeCompVisInstance = MakeShareable(new FNativeComponentVisualizerInstance(VisualizerBlueprint));
	GUnrealEd->RegisterComponentVisualizer(ComponentClassInfo.ClassName, NativeCompVisInstance);
	NativeCompVisInstance->OnRegister();
	RegisteredComponentVisualizers.Add(VisualizerBlueprint, ComponentClassInfo);
}


void FEditorScriptingToolsModule::UnregisterComponentVisualizer(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint, bool bRemoveFromRegisterList)
{
	const auto* Value = RegisteredComponentVisualizers.Find(VisualizerBlueprint);
	if (Value != nullptr)
	{
		const FComponentClassInfo& ComponentClassInfo = *Value;
		if (GUnrealEd != nullptr)
		{
			GUnrealEd->UnregisterComponentVisualizer(ComponentClassInfo.ClassName);
		}

		if (bRemoveFromRegisterList)
		{
			RegisteredComponentVisualizers.Remove(VisualizerBlueprint);
		}
	}
}

void FEditorScriptingToolsModule::UnregisterInvalidComponentVisualizers()
{
	TArray<TWeakObjectPtr<UComponentVisualizerUtilityBlueprint>> VisualizersToUnregister;
	for (auto& Elem : RegisteredComponentVisualizers)
	{
		if (!Elem.Key->ComponentClass || !Elem.Value.Class)
		{
			VisualizersToUnregister.Add(Elem.Key);
		}
	}

	if (VisualizersToUnregister.Num() == 0)
	{
		return;
	}

	for (auto& VisualizerPtr : VisualizersToUnregister)
	{
		if (UComponentVisualizerUtilityBlueprint* VisualizerBlueprint = VisualizerPtr.Get())
		{
			UnregisterComponentVisualizerUtilityBlueprint(VisualizerBlueprint);
		}
	}
}

#undef LOCTEXT_NAMESPACE	
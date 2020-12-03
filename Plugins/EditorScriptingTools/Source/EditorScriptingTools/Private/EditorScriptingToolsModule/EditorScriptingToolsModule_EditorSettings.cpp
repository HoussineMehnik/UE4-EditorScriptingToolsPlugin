//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"
#include "EditorScriptingToolsSubsystem.h"

#include "EditorUserDefinedSettings.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"


#include "ISettingsModule.h"
#include "ISettingsSection.h"



#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_EditorSettings"


void FEditorScriptingToolsModule::RegisterEditorSettings()
{
	ISettingsModule& SettingsModule = FModuleManager::LoadModuleChecked<ISettingsModule>("Settings");
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	for (auto& SettingsBlueprintPtr : ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints)
	{
		if (UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint = SettingsBlueprintPtr.LoadSynchronous())
		{
			RegisterSingleEditorUserDefinedSettingsEntry(&SettingsModule, SettingsBlueprint);
		}
	}
}

void FEditorScriptingToolsModule::UnregisterEditorSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		for (const auto& Elem : RegisteredUserDefinedSettings)
		{
			if (UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint = Elem.Key.Get())
			{
				UnregisterSingleEditorUserDefinedSettingsEntry(SettingsModule, SettingsBlueprint, false);
			}
		}
		RegisteredUserDefinedSettings.Empty();
	}
}

void FEditorScriptingToolsModule::RegisterEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint)
{
	if (!IsEditorUserDefinedSettingsUtilityBlueprintRegistered(SettingsBlueprint))
	{
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
			if (!ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Contains(SettingsBlueprint))
			{
				ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Add(SettingsBlueprint);
				ScriptingToolsSubsystem->NotifySettingsModified();
			}
			RegisterSingleEditorUserDefinedSettingsEntry(SettingsModule, SettingsBlueprint);
			SettingsBlueprint->OnRegisterDone();
		}
	}
}

void FEditorScriptingToolsModule::RefreshEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint)
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		check(IsEditorUserDefinedSettingsUtilityBlueprintRegistered(SettingsBlueprint));
		UnregisterSingleEditorUserDefinedSettingsEntry(SettingsModule, SettingsBlueprint, true);
		SettingsBlueprint->OnUnregisterDone();
		RegisterSingleEditorUserDefinedSettingsEntry(SettingsModule, SettingsBlueprint);
		SettingsBlueprint->OnRegisterDone();
	}
}

void FEditorScriptingToolsModule::UnregisterEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint)
{
	if (IsEditorUserDefinedSettingsUtilityBlueprintRegistered(SettingsBlueprint))
	{
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			UnregisterSingleEditorUserDefinedSettingsEntry(SettingsModule, SettingsBlueprint, true);
			UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
			ScriptingToolsSubsystem->EditorUserDefinedSettingsUtilityBlueprints.Remove(SettingsBlueprint);
			ScriptingToolsSubsystem->NotifySettingsModified();
		}
		SettingsBlueprint->OnUnregisterDone();
	}
}

bool FEditorScriptingToolsModule::CanRegisterEditorUserDefinedSettingsUtilityBlueprint(const UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint) const
{
	const auto* SettingBlueprintPtr = RegisteredUserDefinedSettings.FindKey({ SettingsBlueprint->CategoryName, SettingsBlueprint->SectionName });
	return (SettingBlueprintPtr == nullptr);
}

bool FEditorScriptingToolsModule::IsEditorUserDefinedSettingsUtilityBlueprintRegistered(const UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint) const
{
	const auto* SettingBlueprintPtr = RegisteredUserDefinedSettings.FindKey({ SettingsBlueprint->CategoryName, SettingsBlueprint->SectionName });
	return (SettingBlueprintPtr != nullptr) && (SettingBlueprintPtr->Get() == SettingsBlueprint);
}

void FEditorScriptingToolsModule::RegisterSingleEditorUserDefinedSettingsEntry(ISettingsModule* SettingsModule, UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint)
{
	UEditorScriptingToolsSubsystem* ScriptingToolsSubsystem = UEditorScriptingToolsSubsystem::GetSubsystem();
	const FName CategoryName = SettingsBlueprint->CategoryName;
	const FName SectionName = SettingsBlueprint->SectionName;
	const FText DisplayName = SettingsBlueprint->DisplayName; // Using ref allows to change the display name without having to re register the settings.
	const FText Description = SettingsBlueprint->Description;

	UEditorUserDefinedSettings* SettingsObject = GetMutableDefault<UEditorUserDefinedSettings>(SettingsBlueprint->GeneratedClass); 
	checkSlow(SettingsObject != nullptr);

	TSharedPtr<ISettingsSection> SettingsSection = SettingsModule->RegisterSettings("Project", CategoryName, SectionName, DisplayName, Description, SettingsObject);
	SettingsSection->OnCanEdit().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnCanEdit);
	SettingsSection->OnExport().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnExport);
	SettingsSection->OnImport().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnImport);
	SettingsSection->OnModified().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnModified);
	SettingsSection->OnResetDefaults().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnResetDefaults);
	SettingsSection->OnSave().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnSave);
	SettingsSection->OnStatus().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnStatus);
	SettingsSection->OnSelect().BindUObject(SettingsObject, &UEditorUserDefinedSettings::OnSelect);
	const FEditorSettingsEntryInfo SettingsSectionInfo{ CategoryName, SectionName };
	RegisteredUserDefinedSettings.Add(SettingsBlueprint, SettingsSectionInfo);
}


void FEditorScriptingToolsModule::UnregisterSingleEditorUserDefinedSettingsEntry(ISettingsModule* SettingsModule, UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint, bool bRemoveFromRegisterList)
{
	const auto* SettingsEntryInfo = RegisteredUserDefinedSettings.Find(SettingsBlueprint);
	if (SettingsEntryInfo != nullptr)
	{
		SettingsModule->UnregisterSettings("Project", SettingsEntryInfo->CategoryName, SettingsEntryInfo->SectionName);

		if (bRemoveFromRegisterList)
		{
			RegisteredUserDefinedSettings.Remove(SettingsBlueprint);
		}
	}
}

#undef LOCTEXT_NAMESPACE	
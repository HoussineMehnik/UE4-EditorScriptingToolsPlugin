//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedSettings.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"
#include "IEditorScriptingToolsModule.h"



bool UEditorUserDefinedSettings::OnCanEdit_Implementation()
{
	return true;
}

bool UEditorUserDefinedSettings::OnExport_Implementation(const FString& Path)
{
	return true;
}

bool UEditorUserDefinedSettings::OnImport_Implementation(const FString& Path)
{
	return true;
}

bool UEditorUserDefinedSettings::OnModified_Implementation()
{
	return true;
}

bool UEditorUserDefinedSettings::OnResetDefaults_Implementation()
{
	return true;
}

bool UEditorUserDefinedSettings::OnSave_Implementation()
{
	return true;
}

bool UEditorUserDefinedSettings::OnSaveDefaults_Implementation()
{
	return true;
}

FText UEditorUserDefinedSettings::OnStatus_Implementation()
{
	return FText::GetEmpty();
}

UEditorUserDefinedSettings* UEditorUserDefinedSettings::GetEditorUserDefinedSettingsObject(TSoftObjectPtr<UEditorUserDefinedSettingsUtilityBlueprint> SettingsBlueprint, bool& bIsRegistered)
{
	bIsRegistered = false;
	UEditorUserDefinedSettings* OutSettingsObj = nullptr;

	if (UEditorUserDefinedSettingsUtilityBlueprint* Blueprint = SettingsBlueprint.LoadSynchronous())
	{
		if (UClass* Class = Blueprint->GeneratedClass)
		{
			OutSettingsObj = GetMutableDefault<UEditorUserDefinedSettings>(Class);
			bIsRegistered = OutSettingsObj != nullptr && IEditorScriptingToolsModule::GetPtr()->IsEditorScriptingUtilityRegistered(Blueprint);
		}
	}

	return OutSettingsObj;
}

bool UEditorUserDefinedSettings::SaveSettings()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		SaveConfig();
		return true;
	}
	return false;
}


class UWorld* UEditorUserDefinedSettings::GetWorld() const
{
	if (GWorld)
	{
		// When in 'Simulate' mode, the editor mode tools will actually interact with the PIE world
		if (GEditor->bIsSimulatingInEditor)
		{
			return GEditor->GetPIEWorldContext()->World();
		}
		else
		{
			return GEditor->GetEditorWorldContext().World();
		}
	}

	return Super::GetWorld();
}
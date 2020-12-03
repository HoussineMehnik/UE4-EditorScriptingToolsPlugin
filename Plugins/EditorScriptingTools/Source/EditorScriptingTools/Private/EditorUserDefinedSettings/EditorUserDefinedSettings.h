//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EditorUserDefinedSettings.generated.h"

class UEditorUserDefinedSettingsUtilityBlueprint;

UCLASS(Abstract, Blueprintable, config = Editor, defaultconfig)
class UEditorUserDefinedSettings : public UObject
{
	GENERATED_BODY()

public:

	/**
	 * A delegate that is executed to check whether a settings section can be edited.
	 *
	 * The return value indicates whether the section can be edited.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "HandleSettingsEdit"))
		bool OnCanEdit();

	/**
	 * A delegate that is executed when a settings section should export its values to a file.
	 *
	 * The first parameter is the path to the file to export to.
	 * The return value indicates whether exporting succeeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "HandleSettingsExport"))
		bool OnExport(const FString& Path);

	/**
	 * A delegate that is executed when a settings section should import its values from a file.
	 *
	 * The first parameter is the path to the file to import from.
	 * The return value indicates whether importing succeeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "HandleSettingsImport"))
		bool OnImport(const FString& Path);

	/**
	 * A delegate that is executed when a settings section has been modified.
	 *
	 * The return value indicates whether the modifications should be saved.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "HandleSettingsSaved"))
		bool OnModified();

	/**
	 * A delegate that is executed when a settings section should have its values reset to default.
	 *
	 * The return value indicates whether resetting to defaults succeeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "Handle"))
		bool OnResetDefaults();

	/**
	 * A delegate that is executed when a settings section should have its values saved.
	 *
	 * The return value indicates whether saving succeeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "Handle"))
		bool OnSave();


	/**
	 * A delegate that is executed when a settings section should have its values saved as default.
	 *
	 * The return value indicates whether saving as default succeeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "HandleSaveDefaults"))
		bool OnSaveDefaults();

	/**
	 * A delegate that is executed to retrieve a status message for a settings section.
	 *
	 * The return value is status message.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "GetSatutsMessage"))
		FText OnStatus();

	/**
	* A delegate that is executed to check whether a settings section can be edited.
	*
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = EditorUserDefinedSettings, meta = (DisplayName = "OnSectionSelected"))
		void OnSelect();


	UFUNCTION(BlueprintPure, Category = "Editor Scripting | Editor User Defined Settings", meta = (DeterminesOutputType = "SettingsClass"))
		static UEditorUserDefinedSettings* GetEditorUserDefinedSettingsObject(TSoftObjectPtr<UEditorUserDefinedSettingsUtilityBlueprint> SettingsBlueprint, bool& bIsRegistered);

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor User Defined Settings", meta = (DisplayName = "Save Settings", Keywords = "save config settings"))
		bool SaveSettings();


	//~ Begin UObject interface
	virtual class UWorld* GetWorld() const final;
	//~ End UObject interface
};

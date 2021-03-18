//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "EditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/SoftObjectPtr.h"
#include "UserDefinedPlacementCategoriesTypes.h"
#include "EditorScriptingToolsSubsystem.generated.h"



UCLASS(config = EditorPerProjectUserSettings)
class UEditorScriptingToolsSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	UEditorScriptingToolsSubsystem();

	//~ USubsystem interface begin
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	//~ USubsystem interface end
	
	void CheckValidity();
	void NotifySettingsModified(bool bSaveConfig = true);
	static UEditorScriptingToolsSubsystem* GetSubsystem();

public:
	UPROPERTY(config)
		TSoftObjectPtr<class UEditorModeToolUtilityBlueprint> LastLoadedEdModeToolBlueprint;

	UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category = General)
		bool bEnableThumbnailOverlayOnRegisteredUtilities;

	UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category = EditorMode)
		bool bEnableEditingWhileSimulating;

	UPROPERTY(config, EditAnywhere, Category = ComponentVisualizers)
		TArray<TSoftObjectPtr<class UComponentVisualizerUtilityBlueprint>> ComponentVisualizerUtilityBlueprints;

	UPROPERTY(config, EditAnywhere, Category = DetailCustomizations)
		TArray<TSoftObjectPtr<class UDetailCustomizationUtilityBlueprint>> DetailCustomizationUtilityBlueprints;

	UPROPERTY(config, EditAnywhere, Category = UserDefinedSettings)
		TArray<TSoftObjectPtr<class UEditorUserDefinedSettingsUtilityBlueprint>> EditorUserDefinedSettingsUtilityBlueprints;

	UPROPERTY(config, EditAnywhere, Category = UserDefinedPlacementCategories)
		TSet<FUserDefinedPlacementCategoryInfo> PlacementCategoriesInfo;
};
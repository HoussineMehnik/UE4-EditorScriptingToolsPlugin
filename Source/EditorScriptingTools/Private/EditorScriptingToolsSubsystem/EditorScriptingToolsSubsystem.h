//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

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

	UPROPERTY(config)
		TArray<TSoftObjectPtr<class  UEditorModeToolUtilityBlueprint>> CustomEdModeUtilityBlueprints;

	UPROPERTY(config)
		TArray<TSoftObjectPtr<class UComponentVisualizerUtilityBlueprint>> ComponentVisualizerUtilityBlueprints;

	UPROPERTY(config)
		TArray<TSoftObjectPtr<class UDetailCustomizationUtilityBlueprint>> DetailCustomizationUtilityBlueprints;

	UPROPERTY(config)
		TArray<TSoftObjectPtr<class UEditorUserDefinedSettingsUtilityBlueprint>> EditorUserDefinedSettingsUtilityBlueprints;

	UPROPERTY(config, EditAnywhere, Category = UserDefinedPlacementCategories)
		TSet<FUserDefinedPlacementCategoryInfo> PlacementCategoriesInfo;
};
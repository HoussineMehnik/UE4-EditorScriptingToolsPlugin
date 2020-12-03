//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once

#include "IEditorScriptingToolsModule.h"

#include "EditorScriptingToolsTypes.h"
#include "AssetTypeCategories.h"
#include "Templates/SubclassOf.h"

class UClass;
class UObject;
class UWorld;
class UBlueprint;
class IAssetTools;
class IAssetTypeActions;
class FPropertyEditorModule;
class ISettingsModule;
class FWorkspaceItem;
class FSpawnTabArgs;

class UEditorModeToolUtilityBlueprint;
class UEditorUserDefinedSettings;
class UEditorUserDefinedSettingsUtilityBlueprint;
class UComponentVisualizerUtilityBlueprint;
class UDetailCustomizationUtilityBlueprint;
class UEditorUserDefinedActions;

class UActorComponent;


class FEditorScriptingToolsModule : public IEditorScriptingToolsModule
{
private:

	struct FEditorScriptingToolsTabs
	{
		static const FName ScriptingToolsSettingsTabID;
		static const FName PlacementBrowser;
	};

	template<class ClassType>
	struct FObjectClassInfo
	{
		FObjectClassInfo(UClass* InCompClass, const FName& InClassName) : Class(InCompClass), ClassName(InClassName) {}
		bool operator ==(const FObjectClassInfo& Other) const
		{
			return (Class != nullptr && Class == Other.Class) || (ClassName == Other.ClassName);
		}

		const TSubclassOf<ClassType> Class;
		const FName ClassName;
	};

	typedef FObjectClassInfo<UObject> FCustomizedClassInfo;
	typedef FObjectClassInfo<UActorComponent> FComponentClassInfo;

	struct FEditorSettingsEntryInfo
	{
		FEditorSettingsEntryInfo(const FName& InCategoryName, const FName& InSectionName) : CategoryName(InCategoryName), SectionName(InSectionName) {}
		bool operator ==(const FEditorSettingsEntryInfo& Other) const
		{
			return  (CategoryName == Other.CategoryName) && (SectionName == Other.SectionName);
		}

		FName CategoryName;
		FName SectionName;
	};


public:
	//~ Begin IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~ End IModuleInterface

	//~ Begin IEditorScriptingToolsModule
	virtual FName GetEditorScriptingToolsTabName() const override;
	virtual uint32 GetEditorScriptingAssetCategory() const override;
	virtual bool IsPlacementBrowserTabActive() const override;
	virtual void RequestRefreshPlacementBrowserTab() override;
	virtual void RequestClosePlacementBrowserTab() override;
	virtual void RegisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) override;
	virtual void RefreshEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) override;
	virtual void UnregisterEditorScriptingUtility(IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) override;
	virtual bool CanRegisterEditorScriptingUtility(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const override;
	virtual bool IsEditorScriptingUtilityRegistered(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const override;
	virtual FText GetRegisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	virtual FText GetUnregisterScriptingUtilityText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	virtual FText GetRegisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	virtual FText GetRefreshScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	virtual FText GetUnregisterScriptingUtilityToolTipText(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	virtual FColor GetScriptingUtilityAssetColor(const IEditorScriptingUtilityAssetInterface* ScriptingUtilityAsset) const  override;
	//~ End IEditorScriptingToolsModule

private:

	void OnPostEngineInit();
	void PostEditorTick(float DeltaSeconds);

	void ExtendLevelEditorMenu();

	void RegisterBlueprintCompilers();
	void UnregisterBlueprintCompilers();

	void RegisterAssetTypesActions();
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);
	void UnregisterCreatedAssetTypes();

	void RegisterCustomClassLayouts();
	void UnregisterCustomClassLayouts();
	void RegisterDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint);
	void RefreshDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint);
	void UnregisterDetailCustomizationUtilityBlueprint(UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint);
	bool CanRegisterCustomClassLayoutClass(UClass* CustomizedClass) const;
	bool CanRegisterDetailCustomizationUtilityBlueprint(const UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint) const;
	bool IsDetailCustomizationUtilityBlueprintRegistered(const UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint) const;
	void RegisterCustomClassLayout(FPropertyEditorModule* PropertyModule, UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint);
	void UnregisterCustomClassLayout(FPropertyEditorModule* PropertyModule, UDetailCustomizationUtilityBlueprint* DetailCustomizationBlueprint, bool bRemoveFromRegisterList);
	void UnregisterInvalidClassesLayouts();


	void RegisterComponentVisualizers();
	void UnregisterComponentVisualizers();
	void RegisterComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint);
	void RefreshComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint);
	void UnregisterComponentVisualizerUtilityBlueprint(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint);
	bool CanRegisterComponentVisualizerUtilityBlueprint(const UComponentVisualizerUtilityBlueprint* VisualizerBlueprint) const;
	bool CanRegisterComponentVisualizerClass(UClass* ComponentClass) const;
	void RegisterComponentVisualizer(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint);
	bool IsComponentVisualizerUtilityBlueprintRegistered(const UComponentVisualizerUtilityBlueprint* VisualizerBlueprint) const;
	void UnregisterComponentVisualizer(UComponentVisualizerUtilityBlueprint* VisualizerBlueprint, bool bRemoveFromRegisterList);
	void UnregisterInvalidComponentVisualizers();

	void RegisterEditorModes();
	void UnregisterEditorModes();
	void RegisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint);
	void RefreshEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint);
	void UnregisterEditorModeToolUtilityBlueprint(UEditorModeToolUtilityBlueprint* ModeToolBlueprint);
	bool CanRegisterEditorModeToolUtilityBlueprint(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const;
	bool IsEditorModeToolUtilityBlueprintRegistered(const UEditorModeToolUtilityBlueprint* ModeToolBlueprint) const;

	void RegisterEditorSettings();
	void UnregisterEditorSettings();
	void RegisterEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint);
	void RefreshEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint);
	void UnregisterEditorUserDefinedSettingsUtilityBlueprint(UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint);
	bool CanRegisterEditorUserDefinedSettingsUtilityBlueprint(const UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint) const;
	bool IsEditorUserDefinedSettingsUtilityBlueprintRegistered(const UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint) const;
	void RegisterSingleEditorUserDefinedSettingsEntry(ISettingsModule* SettingsModule, UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint);
	void UnregisterSingleEditorUserDefinedSettingsEntry(ISettingsModule* SettingsModule, UEditorUserDefinedSettingsUtilityBlueprint* SettingsBlueprint, bool bRemoveFromRegisterList);

	void RegisterEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset);
	void RefreshEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset);
	void UnregisterEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset);
	bool CanRegisterEditorUserDefinedActions(const UEditorUserDefinedActions* UserDefinedActionsAsset) const;
	bool IsEditorUserDefinedActionsRegistered(const UEditorUserDefinedActions* UserDefinedActionsAsset) const;

	void RegeneratePlacementModeTab();
	void RegisterPlacementModeExtensions();
	void UnregisterPlacementModeExtensions();

	void BindEditorDelegates();
	void UnbindEditorDelegates();


	void HandleAnyBlueprintPreCompiled(UBlueprint* Blueprint);
	void HandleAnyBlueprintCompiled();
	void HandleEditorModeEntered(const FEditorModeID& ModeID);
	void HandleMapChanged(UWorld* InWorld, EMapChangeType MapChangeType);
	void HandleTabManagerChanged();
	void HandlePreBeginPIE(bool bIsSimulating);
	void HandleAssetsPreDelete(const TArray<UObject*>& PreDeletedAssets);
	void HandleAssetsDeleted(const TArray<UClass*>& DeletedClasses);
	TSharedRef<SDockTab> OnSpawnScriptingToolsSettingsTab(const FSpawnTabArgs& SpawnTabArgs);

private:
	/**singleton for the module while loaded and available */
	friend IEditorScriptingToolsModule;  
	static IEditorScriptingToolsModule* Singleton;

	TSharedPtr<FWorkspaceItem> EditorScriptingToolsMenuGroup;
	FDelegateHandle PostEditorTickHandle;
	EAssetTypeCategories::Type EditorScriptingToolsAssetCategory;
	bool bPlaceablesTabRefreshRequested{ false };
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;



	TMap<TWeakObjectPtr<UDetailCustomizationUtilityBlueprint>, FCustomizedClassInfo> RegisteredCustomDetailLayouts;
	TMap<TWeakObjectPtr<UComponentVisualizerUtilityBlueprint>, FComponentClassInfo> RegisteredComponentVisualizers;
	TMap<TWeakObjectPtr<UEditorUserDefinedSettingsUtilityBlueprint>, FEditorSettingsEntryInfo> RegisteredUserDefinedSettings;

	TArray<FName> RegisteredPlacementCategoriesHandles;
};

//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsModule.h"
#include "EditorScriptingToolsSubsystem.h"

#include "IPlacementModeModule.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_PlacementMode"

bool FEditorScriptingToolsModule::IsPlacementBrowserTabActive() const
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	if (LevelEditorTabManager)
	{
		if (LevelEditorTabManager->HasTabSpawner(FEditorScriptingToolsTabs::PlacementBrowser))
		{
			TSharedPtr<SDockTab> PlacementBrowserTab = LevelEditorTabManager->FindExistingLiveTab(FEditorScriptingToolsTabs::PlacementBrowser);
			if (PlacementBrowserTab.IsValid())
			{
				return true;
			}
		}
	}
	
	return false;
}

void FEditorScriptingToolsModule::RequestRefreshPlacementBrowserTab()
{
	bPlaceablesTabRefreshRequested = true;
}

void FEditorScriptingToolsModule::RequestClosePlacementBrowserTab()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	if (LevelEditorTabManager)
	{
		if (LevelEditorTabManager->HasTabSpawner(FEditorScriptingToolsTabs::PlacementBrowser))
		{
			TSharedPtr<SDockTab> PlacementBrowserTab = LevelEditorTabManager->FindExistingLiveTab(FEditorScriptingToolsTabs::PlacementBrowser);
			if (PlacementBrowserTab.IsValid())
			{
				PlacementBrowserTab->RequestCloseTab();
			}
		}
	}
}

void FEditorScriptingToolsModule::RegeneratePlacementModeTab()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
	bool bCloseTabRequested = false;
	if (LevelEditorTabManager)
	{
		if (LevelEditorTabManager->HasTabSpawner(FEditorScriptingToolsTabs::PlacementBrowser))
		{
			TSharedPtr<SDockTab> PlacementBrowserTab = LevelEditorTabManager->FindExistingLiveTab(FEditorScriptingToolsTabs::PlacementBrowser);
			if (PlacementBrowserTab.IsValid())
			{
				PlacementBrowserTab->RequestCloseTab();
				bCloseTabRequested = true;
			}
			else
			{
				UnregisterPlacementModeExtensions();
				RegisterPlacementModeExtensions();
				LevelEditorTabManager->TryInvokeTab(FEditorScriptingToolsTabs::PlacementBrowser);
			}
		}
	}

	if (!bCloseTabRequested)
	{
		bPlaceablesTabRefreshRequested = false;
	}
}

void FEditorScriptingToolsModule::RegisterPlacementModeExtensions()
{
	const auto& PlacementCategoriesInfo = UEditorScriptingToolsSubsystem::GetSubsystem()->PlacementCategoriesInfo;
	for (const FUserDefinedPlacementCategoryInfo& PlacementCategoryInfo : PlacementCategoriesInfo)
	{
		FPlacementCategoryInfo Info(
			FText::FromName(PlacementCategoryInfo.Name),
			PlacementCategoryInfo.Name,
			TEXT("PM") + PlacementCategoryInfo.Name.ToString(),
			PlacementCategoryInfo.SortOrder,
			PlacementCategoryInfo.bSortable
		);
		IPlacementModeModule::Get().RegisterPlacementCategory(Info);
		RegisteredPlacementCategoriesHandles.Add(PlacementCategoryInfo.Name);

		for (const TSubclassOf<AActor> ItemClass : PlacementCategoryInfo.ActorClasses)
		{
			IPlacementModeModule::Get().RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(new FPlaceableItem(nullptr, FAssetData(ItemClass))));
		}
	}
}

void FEditorScriptingToolsModule::UnregisterPlacementModeExtensions()
{
	if (IPlacementModeModule::IsAvailable())
	{
		for (const FName& Handle : RegisteredPlacementCategoriesHandles)
		{
			IPlacementModeModule::Get().UnregisterPlacementCategory(Handle);
		}
	}
}

#undef LOCTEXT_NAMESPACE	
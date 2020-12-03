//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "SlateOptMacros.h"	
#include "Styling/SlateTypes.h"
#include "EditorStyleSet.h"
#include "Styling/SlateStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Brushes/SlateImageBrush.h"

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( FEditorScriptingToolsStyle::InContent( RelativePath, ".png" ), __VA_ARGS__ )


FString FEditorScriptingToolsStyle::InContent(const FString& RelativePath, const ANSICHAR* Extension)
{
	static FString IconsDir = IPluginManager::Get().FindPlugin(TEXT("EditorScriptingTools"))->GetBaseDir() / TEXT("Resources/Icons");
	return (IconsDir / RelativePath) + Extension;
}

TSharedPtr<FSlateStyleSet> FEditorScriptingToolsStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FEditorScriptingToolsStyle::Get() 
{
	if (!StyleSet.IsValid())
	{
		ReloadTextures();
		Initialize();
	}

	return StyleSet; 
}


FName FEditorScriptingToolsStyle::GetStyleSetName()
{
	return StyleSet->GetStyleSetName();
}


void FEditorScriptingToolsStyle::ReloadTextures()
{
	FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
}

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void FEditorScriptingToolsStyle::Initialize()
{

	// Const icon & thumbnail sizes
	const FVector2D Icon16x16(16.0f, 16.f);
	const FVector2D Icon20x20(20.0f, 20.0f);
	const FVector2D Icon40x40(40.f, 40.f);
	const FVector2D Icon64x64(64.f, 64.f);
	const FVector2D Icon128x128(128.f, 128.f);


	// Only register once
	if (StyleSet.IsValid())
	{
		return;
	}

	// Style Set Allocation
	StyleSet = MakeShareable(new FSlateStyleSet("EditorScriptingToolsStyle"));
	FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("EditorScriptingTools"))->GetContentDir();
	StyleSet->SetContentRoot(ContentDir);

	//----- Level Editor Extensions -------------------------------------------------------------------------------------------------------------------------
	StyleSet->Set(TEXT("BluEdMode"), new IMAGE_BRUSH("icon_BluEdMode_64x", Icon40x40));
	StyleSet->Set(TEXT("BluEdMode.Small"), new IMAGE_BRUSH("icon_BluEdMode_64x", Icon16x16));
	StyleSet->Set(TEXT("BluEdMode.LevelEditorTab"), new IMAGE_BRUSH("icon_BluEdMode_64x", Icon16x16));
	StyleSet->Set(TEXT("EditorScriptingTools"), new IMAGE_BRUSH("icon_ToolsMenu_40x", Icon16x16));
	StyleSet->Set(TEXT("EditorScriptingTools.SettingsTab"), new IMAGE_BRUSH("icon_tab_Tools_40x", Icon16x16));


	//----- Scripting Utility Actions -----------------------------------------------------------------------------------------------------------------------
	StyleSet->Set(TEXT("EditorScriptingUtility.Register"), new IMAGE_BRUSH("icon_RegisterUtility_16px", Icon16x16));
	StyleSet->Set(TEXT("EditorScriptingUtility.Unregister"), new IMAGE_BRUSH("icon_UnregisterUtility_16px", Icon16x16));
	StyleSet->Set(TEXT("EditorScriptingUtility.Refresh"), new IMAGE_BRUSH("icon_RefreshUtility_20px", Icon16x16));

	//----- BluEdMode ToolKit -------------------------------------------------------------------------------------------------------------------------------
	StyleSet->Set(TEXT("BluEdMode.ShowToolkitWidget"), new IMAGE_BRUSH("WidgetBlueprint_16x", Icon16x16));
	StyleSet->Set(TEXT("BluEdMode.ShowOverlayWidget"), new IMAGE_BRUSH("icon_Viewports_40x", Icon16x16));
	StyleSet->Set(TEXT("BluEdMode.ShowDetailsView"), new IMAGE_BRUSH("icon_SelectionDetails_16x", Icon16x16));
	StyleSet->Set(TEXT("BluEdMode.ApplyInstanceChanges"), new IMAGE_BRUSH("icon_Apply_40x", Icon20x20));

	//----- User Defined Actions Asset Editor ----------------------------------------------------------------------------------------------------------------
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.MapActions"), new IMAGE_BRUSH("icon_Commands_MapActions_40x", Icon40x40));
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.MapActions.Small"), new IMAGE_BRUSH("icon_Commands_MapActions_40x", Icon16x16));

	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.UnmapActions"), new IMAGE_BRUSH("icon_Commands_UnmapActions_40x", Icon40x40));
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.UnmapActions.Small"), new IMAGE_BRUSH("icon_Commands_UnmapActions_40x", Icon16x16));

	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.RefreshMappings"), new IMAGE_BRUSH("icon_Commands_RefreshMappings_40x", Icon40x40));
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.RefreshMappings.Small"), new IMAGE_BRUSH("icon_Commands_RefreshMappings_40x", Icon16x16));

	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.ArrowUp"), new IMAGE_BRUSH("icon_ArrowUp", Icon16x16));
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.ArrowDown"), new IMAGE_BRUSH("icon_ArrowDown", Icon16x16));
	StyleSet->Set(TEXT("EditorUserDefinedActionsEditor.Clear"), new IMAGE_BRUSH("icon_Clear", Icon16x16));

	//----- Class Thumbnails & Icons ----------------------------------------------------------------------------------------------------------------------
	StyleSet->Set("ClassIcon.EditorModeToolInstance", new IMAGE_BRUSH("icon_Class_EditorModeTool_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorModeToolInstance", new IMAGE_BRUSH("icon_Class_EditorModeTool_64x", Icon64x64));
	StyleSet->Set("ClassIcon.EditorModeToolUtilityBlueprint", new IMAGE_BRUSH("icon_Class_EditorModeTool_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorModeToolUtilityBlueprint", new IMAGE_BRUSH("icon_Class_EditorModeTool_64x", Icon64x64));

	StyleSet->Set("ClassIcon.DetailCustomizationInstance", new IMAGE_BRUSH("icon_Class_DetailCustomization_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.DetailCustomizationInstance", new IMAGE_BRUSH("icon_Class_DetailCustomization_64x", Icon64x64));
	StyleSet->Set("ClassIcon.DetailCustomizationUtilityBlueprint", new IMAGE_BRUSH("icon_Class_DetailCustomization_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.DetailCustomizationUtilityBlueprint", new IMAGE_BRUSH("icon_Class_DetailCustomization_64x", Icon64x64));

	StyleSet->Set("ClassIcon.ComponentVisualizerInstance", new IMAGE_BRUSH("icon_Class_ComponentVisualizer_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.ComponentVisualizerInstance", new IMAGE_BRUSH("icon_Class_ComponentVisualizer_64x", Icon64x64));
	StyleSet->Set("ClassIcon.ComponentVisualizerUtilityBlueprint", new IMAGE_BRUSH("icon_Class_ComponentVisualizer_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.ComponentVisualizerUtilityBlueprint", new IMAGE_BRUSH("icon_Class_ComponentVisualizer_64x", Icon64x64));

	StyleSet->Set("ClassIcon.EditorUserDefinedSettings", new IMAGE_BRUSH("icon_Class_EditorUserDefinedSettings_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorUserDefinedSettings", new IMAGE_BRUSH("icon_Class_EditorUserDefinedSettings_64x", Icon64x64));
	StyleSet->Set("ClassIcon.EditorUserDefinedSettingsUtilityBlueprint", new IMAGE_BRUSH("icon_Class_EditorUserDefinedSettings_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorUserDefinedSettingsUtilityBlueprint", new IMAGE_BRUSH("icon_Class_EditorUserDefinedSettings_64x", Icon64x64));
	
	StyleSet->Set("ClassIcon.EditorUserDefinedActions", new IMAGE_BRUSH("icon_Class_EditorUserDefinedActions_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorUserDefinedActions", new IMAGE_BRUSH("icon_Class_EditorUserDefinedActions_64x", Icon64x64));

	StyleSet->Set("ClassIcon.EditorUserWidget", new IMAGE_BRUSH("icon_Class_EditorUserWidget_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorUserWidget", new IMAGE_BRUSH("icon_Class_EditorUserWidget_64x", Icon64x64));
	StyleSet->Set("ClassIcon.EditorUserWidgetBlueprint", new IMAGE_BRUSH("icon_Class_EditorUserWidget_64x", Icon16x16));
	StyleSet->Set("ClassThumbnail.EditorUserWidgetBlueprint", new IMAGE_BRUSH("icon_Class_EditorUserWidget_64x", Icon64x64));

	StyleSet->Set("ClassIcon.AssetDropTargetWidget", new IMAGE_BRUSH("AssetDropTargetWidget_32x", Icon16x16));
	StyleSet->Set("ClassIcon.AssetPickerWidget", new IMAGE_BRUSH("AssetPickerWidget_16x", Icon16x16));
	StyleSet->Set("ClassIcon.AssetThumbnailWidget", new IMAGE_BRUSH("AssetThumbnailWidget_16x", Icon16x16));

	//----- Tab buttons ------------------------------------------------------------------------------------------------------------------------------------
	StyleSet->Set(TEXT("OtherSettings.Icon"), new IMAGE_BRUSH("icon_SettingsTab_ToolsSettingsTab_40x", Icon40x40));
	StyleSet->Set(TEXT("OtherSettings.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_ToolsSettingsTab_40x", Icon40x40));

	StyleSet->Set(TEXT("BluEdMode.Icon"), new IMAGE_BRUSH("icon_SettingsTab_EditorModeTool_64x", Icon40x40));
	StyleSet->Set(TEXT("BluEdMode.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_EditorModeTool_64x", Icon40x40));

	StyleSet->Set(TEXT("DetailCustomizations.Icon"), new IMAGE_BRUSH("icon_SettingsTab_DetailCustomization_64x", Icon40x40));
	StyleSet->Set(TEXT("DetailCustomizations.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_DetailCustomization_64x", Icon40x40));

	StyleSet->Set(TEXT("ComponentVisualizers.Icon"), new IMAGE_BRUSH("icon_SettingsTab_ComponentVisualizer_40x", Icon40x40));
	StyleSet->Set(TEXT("ComponentVisualizers.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_ComponentVisualizer_40x", Icon40x40));

	StyleSet->Set(TEXT("UserDefinedSettings.Icon"), new IMAGE_BRUSH("icon_SettingsTab_EditorUserDefinedSettings_64x", Icon40x40));
	StyleSet->Set(TEXT("UserDefinedSettings.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_EditorUserDefinedSettings_64x", Icon40x40));

	StyleSet->Set(TEXT("UserDefinedActions.Icon"), new IMAGE_BRUSH("icon_SettingsTab_EditorUserDefinedActions_64x", Icon40x40));
	StyleSet->Set(TEXT("UserDefinedActions.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_EditorUserDefinedActions_64x", Icon40x40));

	StyleSet->Set(TEXT("UserDefinedPlacementCategories.Icon"), new IMAGE_BRUSH("icon_SettingsTab_PlacementCategories_40x", Icon40x40));
	StyleSet->Set(TEXT("UserDefinedPlacementCategories.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_PlacementCategories_40x", Icon40x40));

	StyleSet->Set(TEXT("OtherUtils.Icon"), new IMAGE_BRUSH("icon_SettingsTab_OtherUtils_40x", Icon40x40));
	StyleSet->Set(TEXT("OtherUtils.Icon.Small"), new IMAGE_BRUSH("icon_SettingsTab_OtherUtils_40x", Icon40x40));

	
	//----- Register Style Set ------------------------------------------------------------------------------------------------------------------------------
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef IMAGE_BRUSH


void FEditorScriptingToolsStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}


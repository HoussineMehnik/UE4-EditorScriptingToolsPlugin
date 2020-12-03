//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsTypes.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"
/*
#include "CanvasTypes.h"
#include "SceneManagement.h"
*/

DEFINE_LOG_CATEGORY(LogEditorScriptingTools);


FSimpleMulticastDelegate FEditorScriptingToolsDelegates::RefreshEditorScriptingToolsTabDelegate{};
const FDrawPrimitivesContext FDrawPrimitivesContext::InvalidContext{};
const FDrawHUDContext FDrawHUDContext::InvalidContext{};




const FColor FEditorScriptingUtilityAssetColorsHelper::ModeToolBlueprintColor(175, 0, 0);
const FColor FEditorScriptingUtilityAssetColorsHelper::ComponentVisualizerUtilityBlueprintColor(152, 57, 255);
const FColor FEditorScriptingUtilityAssetColorsHelper::DetailCustomizationInstanceColor(255, 168, 111);
const FColor FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedActionsAssetColor(128, 255, 128);
const FColor FEditorScriptingUtilityAssetColorsHelper::EditorUserDefinedSettingsUtilityBlueprintColor(255, 255, 0);
const FColor FEditorScriptingUtilityAssetColorsHelper::EditorUserWidgetBlueprintColor(175, 81, 128);

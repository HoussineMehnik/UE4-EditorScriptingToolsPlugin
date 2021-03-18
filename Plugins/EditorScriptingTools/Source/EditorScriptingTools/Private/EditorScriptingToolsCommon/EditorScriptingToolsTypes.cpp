//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorScriptingToolsTypes.h"
#include "EditorUserDefinedSettingsUtilityBlueprint.h"

#include "CanvasTypes.h"
#include "SceneManagement.h"
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



FDrawPrimitivesContext::FDrawPrimitivesContext() : PDI(nullptr)
, View(nullptr)
{

}

void FDrawPrimitivesContext::Set(const FSceneView* InView, FPrimitiveDrawInterface* InPDI)
{
	PDI = InPDI;
	View = InView;
}

void FDrawPrimitivesContext::Invalidate()
{
	if (PDI != nullptr)
	{
		PDI->SetHitProxy(nullptr);
	}

	PDI = nullptr;
	View = nullptr;
}

bool FDrawPrimitivesContext::IsValid() const
{
	return PDI != nullptr  && View != nullptr;
}




FDrawHUDContext::FDrawHUDContext() : Viewport(nullptr)
, View(nullptr)
, Canvas(nullptr)
{

}

void FDrawHUDContext::Set(const FViewport* InViewport, const FSceneView* InView, FCanvas* InCanvas)
{
	Viewport = InViewport;
	View = InView;
	Canvas = InCanvas;
}

void FDrawHUDContext::Invalidate()
{
	if (Canvas != nullptr)
	{
		Canvas->SetHitProxy(nullptr);
	}

	Viewport = nullptr;
	View = nullptr;
	Canvas = nullptr;
}

bool FDrawHUDContext::IsValid() const
{
	return Viewport != nullptr && View != nullptr && Canvas != nullptr;
}

//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "Framework/Commands/Commands.h"
#include "Templates/SubclassOf.h"
#include "EditorScriptingToolsTypes.generated.h"

class UEditorUserDefinedSettingsUtilityBlueprint;
class FPrimitiveDrawInterface;
class FViewport;
class FSceneView;
class FCanvas;


struct  FEditorScriptingToolsDelegates
{
	static FSimpleMulticastDelegate RefreshEditorScriptingToolsTabDelegate;
};

//
DECLARE_LOG_CATEGORY_EXTERN(LogEditorScriptingTools, Log, All);

//
DECLARE_STATS_GROUP(TEXT("EditorScriptingTools"), STATGROUP_EditorScriptingTools, STATCAT_Advanced);

//
#define UI_USER_DEFINED_COMMAND( CommandPtr,CommandId, FriendlyName, InDescription, CommandType, InDefaultChord, ... ) \
	MakeUICommand_InternalUseOnly( this, CommandPtr, TEXT(LOCTEXT_NAMESPACE), CommandId, *CommandId + TEXT("_ToolTip"), "." + *CommandId, FriendlyName, TEXT(InDescription), CommandType, InDefaultChord, ## __VA_ARGS__ );

//
#define EDITOR_SCRIPT_EXECUTION_GUARD FEditorScriptExecutionGuard ScriptGuard;

//
#define CAST_TO_UINT8(Val) static_cast<uint8>(Val)


enum class EEditorScriptingUtilityType : uint8
{
	EditorMode = 0,
	DetailCustomization,
	ComponentVisulizer,
	UserDefinedSettings,
	UserDefinedActions,

	None = 255,
};

enum class ELevelEditingContextType : uint8
{
	EditorMode = 0,
	ComponentVisulizer,


	Invalid = 255,
};

UENUM(BlueprintType)
enum class EEditorState : uint8
{
	Editor,
	SimulatingInEditor,
	PlayingInEditor,
	Unknown,
};

USTRUCT(BlueprintInternalUseOnly) struct FDummyStruct { GENERATED_USTRUCT_BODY() };
USTRUCT(BlueprintInternalUseOnly) struct FEventDummyReturn { GENERATED_USTRUCT_BODY() };
#define DUMMY_RETURN				return FEventDummyReturn();



class FEditorScriptingUtilityAssetColorsHelper
{

public:

	static const FColor ModeToolBlueprintColor;
	static const FColor ComponentVisualizerUtilityBlueprintColor;
	static const FColor DetailCustomizationInstanceColor;
	static const FColor EditorUserDefinedActionsAssetColor;
	static const FColor EditorUserDefinedSettingsUtilityBlueprintColor;
	static const FColor EditorUserWidgetBlueprintColor;
};

struct FDrawPrimitivesContext
{
	FDrawPrimitivesContext();
	void Set(const FSceneView* InView, FPrimitiveDrawInterface* InPDI);
	void Invalidate();
	bool IsValid() const;

	FPrimitiveDrawInterface* PDI;
	const FSceneView* View;
	static const FDrawPrimitivesContext InvalidContext;
};


struct FDrawHUDContext
{

	FDrawHUDContext();

	void Set(const FViewport* InViewport, const FSceneView* InView, FCanvas* InCanvas);

	void Invalidate();

	bool IsValid() const;

	const FViewport* Viewport;
	const FSceneView* View;
	FCanvas* Canvas;

	static const FDrawHUDContext InvalidContext;
};

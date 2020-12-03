// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUserWidget;
struct FDummyStruct;
enum class EHitProxyPriorityType : uint8;
struct FTransform;
struct FSelectionFrustumVolume;
struct FBox;
struct FVector;
class AActor;
enum class EEditModeAction : uint8;
struct FHitProxyHandle;
struct FLevelEditingViewportClick;
struct FRotator;
struct FKey;
enum class EInputKeyEventType : uint8;
class UEditorUserDefinedActions;
struct FIntPoint;
#ifdef EDITORSCRIPTINGTOOLS_EditorModeToolInstance_generated_h
#error "EditorModeToolInstance.generated.h already included, missing '#pragma once' in EditorModeToolInstance.h"
#endif
#define EDITORSCRIPTINGTOOLS_EditorModeToolInstance_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_RPC_WRAPPERS \
	virtual bool OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform); \
	virtual bool HandleSelectionFrustum_Implementation(FSelectionFrustumVolume const& InFrustum, bool InSelect); \
	virtual bool HandleSelectionBox_Implementation(FBox& InBox, bool InSelect); \
	virtual bool CanUseTransformGizmoByMode_Implementation(ETransformGizmoMode::Type CheckMode) const; \
	virtual bool CanUseTransformGizmo_Implementation() const; \
	virtual bool OverrideTransformGizmoLocation_Implementation(FVector& NewLocation) const; \
	virtual bool CanDrawTransformGizmo_Implementation() const; \
	virtual EMouseCursor::Type OverrideMouseCursor_Implementation(bool& bOverrideCursor) const; \
	virtual bool AllowPropertyWidgetsEditings_Implementation() const; \
	virtual bool OverrideCameraPivotForOrbit_Implementation(FVector& OutPivot) const; \
	virtual bool DisallowMouseDeltaTracking_Implementation() const; \
	virtual bool AllowTransformGizmoMove_Implementation(); \
	virtual ETransformGizmoAxisList::Type CustomizeTransformGizmoAxis_Implementation(ETransformGizmoMode::Type CurrentWidgetMode); \
	virtual bool CanUseViewportDragTool_Implementation() const; \
	virtual bool SelectionAllowed_Implementation(AActor* InActor, bool bSelection) const; \
	virtual bool SelectActor_Implementation(AActor* InActor, bool bIsSelected); \
	virtual bool ProcessEditPaste_Implementation(); \
	virtual bool ProcessEditCopy_Implementation(); \
	virtual bool ProcessEditCut_Implementation(); \
	virtual bool ProcessEditDelete_Implementation(); \
	virtual bool ProcessEditDuplicate_Implementation(); \
	virtual EEditModeAction OverrideActionEditPasteStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditCopyStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditCutStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditDeleteStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditDuplicateStatus_Implementation(); \
	virtual bool HandleClickHitProxy_Implementation(FHitProxyHandle& HitProxyHandle, FLevelEditingViewportClick const& ViewportClick); \
	virtual bool HandleMouseTrackingEnd_Implementation(); \
	virtual bool HandleMouseTrackingStart_Implementation(); \
	virtual bool HandleWidgetMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale); \
	virtual bool HandleInputAxis_Implementation(int32 ControllerId, FKey Key, float Delta, float DeltaTime); \
	virtual bool HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event); \
 \
	DECLARE_FUNCTION(execGetActiveViewportOverlayWidgetInstance); \
	DECLARE_FUNCTION(execGetActiveToolkitWidgetInstance); \
	DECLARE_FUNCTION(execClearActiveHitProxy); \
	DECLARE_FUNCTION(execCreateNewHitProxyByIndex); \
	DECLARE_FUNCTION(execOverrideTransformGizmoCoordinateSystem); \
	DECLARE_FUNCTION(execHandleSelectionFrustum); \
	DECLARE_FUNCTION(execHandleSelectionBox); \
	DECLARE_FUNCTION(execCanUseTransformGizmoByMode); \
	DECLARE_FUNCTION(execCanUseTransformGizmo); \
	DECLARE_FUNCTION(execOverrideTransformGizmoLocation); \
	DECLARE_FUNCTION(execCanDrawTransformGizmo); \
	DECLARE_FUNCTION(execOverrideMouseCursor); \
	DECLARE_FUNCTION(execAllowPropertyWidgetsEditings); \
	DECLARE_FUNCTION(execOverrideCameraPivotForOrbit); \
	DECLARE_FUNCTION(execDisallowMouseDeltaTracking); \
	DECLARE_FUNCTION(execAllowTransformGizmoMove); \
	DECLARE_FUNCTION(execCustomizeTransformGizmoAxis); \
	DECLARE_FUNCTION(execCanUseViewportDragTool); \
	DECLARE_FUNCTION(execSelectionAllowed); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execProcessEditPaste); \
	DECLARE_FUNCTION(execProcessEditCopy); \
	DECLARE_FUNCTION(execProcessEditCut); \
	DECLARE_FUNCTION(execProcessEditDelete); \
	DECLARE_FUNCTION(execProcessEditDuplicate); \
	DECLARE_FUNCTION(execOverrideActionEditPasteStatus); \
	DECLARE_FUNCTION(execOverrideActionEditCopyStatus); \
	DECLARE_FUNCTION(execOverrideActionEditCutStatus); \
	DECLARE_FUNCTION(execOverrideActionEditDeleteStatus); \
	DECLARE_FUNCTION(execOverrideActionEditDuplicateStatus); \
	DECLARE_FUNCTION(execHandleClickHitProxy); \
	DECLARE_FUNCTION(execHandleMouseTrackingEnd); \
	DECLARE_FUNCTION(execHandleMouseTrackingStart); \
	DECLARE_FUNCTION(execHandleWidgetMove); \
	DECLARE_FUNCTION(execHandleInputAxis); \
	DECLARE_FUNCTION(execHandleInputKey);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform); \
	virtual bool HandleSelectionFrustum_Implementation(FSelectionFrustumVolume const& InFrustum, bool InSelect); \
	virtual bool HandleSelectionBox_Implementation(FBox& InBox, bool InSelect); \
	virtual bool CanUseTransformGizmoByMode_Implementation(ETransformGizmoMode::Type CheckMode) const; \
	virtual bool CanUseTransformGizmo_Implementation() const; \
	virtual bool OverrideTransformGizmoLocation_Implementation(FVector& NewLocation) const; \
	virtual bool CanDrawTransformGizmo_Implementation() const; \
	virtual EMouseCursor::Type OverrideMouseCursor_Implementation(bool& bOverrideCursor) const; \
	virtual bool AllowPropertyWidgetsEditings_Implementation() const; \
	virtual bool OverrideCameraPivotForOrbit_Implementation(FVector& OutPivot) const; \
	virtual bool DisallowMouseDeltaTracking_Implementation() const; \
	virtual bool AllowTransformGizmoMove_Implementation(); \
	virtual ETransformGizmoAxisList::Type CustomizeTransformGizmoAxis_Implementation(ETransformGizmoMode::Type CurrentWidgetMode); \
	virtual bool CanUseViewportDragTool_Implementation() const; \
	virtual bool SelectionAllowed_Implementation(AActor* InActor, bool bSelection) const; \
	virtual bool SelectActor_Implementation(AActor* InActor, bool bIsSelected); \
	virtual bool ProcessEditPaste_Implementation(); \
	virtual bool ProcessEditCopy_Implementation(); \
	virtual bool ProcessEditCut_Implementation(); \
	virtual bool ProcessEditDelete_Implementation(); \
	virtual bool ProcessEditDuplicate_Implementation(); \
	virtual EEditModeAction OverrideActionEditPasteStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditCopyStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditCutStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditDeleteStatus_Implementation(); \
	virtual EEditModeAction OverrideActionEditDuplicateStatus_Implementation(); \
	virtual bool HandleClickHitProxy_Implementation(FHitProxyHandle& HitProxyHandle, FLevelEditingViewportClick const& ViewportClick); \
	virtual bool HandleMouseTrackingEnd_Implementation(); \
	virtual bool HandleMouseTrackingStart_Implementation(); \
	virtual bool HandleWidgetMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale); \
	virtual bool HandleInputAxis_Implementation(int32 ControllerId, FKey Key, float Delta, float DeltaTime); \
	virtual bool HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event); \
 \
	DECLARE_FUNCTION(execGetActiveViewportOverlayWidgetInstance); \
	DECLARE_FUNCTION(execGetActiveToolkitWidgetInstance); \
	DECLARE_FUNCTION(execClearActiveHitProxy); \
	DECLARE_FUNCTION(execCreateNewHitProxyByIndex); \
	DECLARE_FUNCTION(execOverrideTransformGizmoCoordinateSystem); \
	DECLARE_FUNCTION(execHandleSelectionFrustum); \
	DECLARE_FUNCTION(execHandleSelectionBox); \
	DECLARE_FUNCTION(execCanUseTransformGizmoByMode); \
	DECLARE_FUNCTION(execCanUseTransformGizmo); \
	DECLARE_FUNCTION(execOverrideTransformGizmoLocation); \
	DECLARE_FUNCTION(execCanDrawTransformGizmo); \
	DECLARE_FUNCTION(execOverrideMouseCursor); \
	DECLARE_FUNCTION(execAllowPropertyWidgetsEditings); \
	DECLARE_FUNCTION(execOverrideCameraPivotForOrbit); \
	DECLARE_FUNCTION(execDisallowMouseDeltaTracking); \
	DECLARE_FUNCTION(execAllowTransformGizmoMove); \
	DECLARE_FUNCTION(execCustomizeTransformGizmoAxis); \
	DECLARE_FUNCTION(execCanUseViewportDragTool); \
	DECLARE_FUNCTION(execSelectionAllowed); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execProcessEditPaste); \
	DECLARE_FUNCTION(execProcessEditCopy); \
	DECLARE_FUNCTION(execProcessEditCut); \
	DECLARE_FUNCTION(execProcessEditDelete); \
	DECLARE_FUNCTION(execProcessEditDuplicate); \
	DECLARE_FUNCTION(execOverrideActionEditPasteStatus); \
	DECLARE_FUNCTION(execOverrideActionEditCopyStatus); \
	DECLARE_FUNCTION(execOverrideActionEditCutStatus); \
	DECLARE_FUNCTION(execOverrideActionEditDeleteStatus); \
	DECLARE_FUNCTION(execOverrideActionEditDuplicateStatus); \
	DECLARE_FUNCTION(execHandleClickHitProxy); \
	DECLARE_FUNCTION(execHandleMouseTrackingEnd); \
	DECLARE_FUNCTION(execHandleMouseTrackingStart); \
	DECLARE_FUNCTION(execHandleWidgetMove); \
	DECLARE_FUNCTION(execHandleInputAxis); \
	DECLARE_FUNCTION(execHandleInputKey);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_EVENT_PARMS \
	struct EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventAllowPropertyWidgetsEditings_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventAllowTransformGizmoMove_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventAllowTransformGizmoMove_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventCanDrawTransformGizmo_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventCanDrawTransformGizmo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventCanUseTransformGizmo_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventCanUseTransformGizmo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms \
	{ \
		TEnumAsByte<ETransformGizmoMode::Type> CheckMode; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventCanUseTransformGizmoByMode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventCanUseViewportDragTool_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventCanUseViewportDragTool_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms \
	{ \
		TEnumAsByte<ETransformGizmoMode::Type> CurrentWidgetMode; \
		TEnumAsByte<ETransformGizmoAxisList::Type> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventCustomizeTransformGizmoAxis_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventDisallowMouseDeltaTracking_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleClickHitProxy_Parms \
	{ \
		FHitProxyHandle HitProxyHandle; \
		FLevelEditingViewportClick ViewportClick; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleClickHitProxy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleInputAxis_Parms \
	{ \
		int32 ControllerId; \
		FKey Key; \
		float Delta; \
		float DeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleInputAxis_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleInputKey_Parms \
	{ \
		FKey Key; \
		EInputKeyEventType Event; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleInputKey_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleMouseTrackingEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleMouseTrackingStart_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleMouseTrackingStart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleSelectionBox_Parms \
	{ \
		FBox InBox; \
		bool InSelect; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleSelectionBox_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleSelectionFrustum_Parms \
	{ \
		FSelectionFrustumVolume InFrustum; \
		bool InSelect; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleSelectionFrustum_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventHandleWidgetMove_Parms \
	{ \
		FVector Drag; \
		FRotator DeltaRotation; \
		FVector DeltaScale; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventHandleWidgetMove_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventNotifyActorsDuplicated_Parms \
	{ \
		TArray<AActor*> PreDuplicateSelection; \
		TArray<AActor*> PostDuplicateSelection; \
		bool bOffsetLocations; \
	}; \
	struct EditorModeToolInstance_eventOnExecuteUserDefinedAction_Parms \
	{ \
		UEditorUserDefinedActions* ActionsAsset; \
		uint8 ActionAsByte; \
		bool bIsRepeated; \
	}; \
	struct EditorModeToolInstance_eventOnMouseEnter_Parms \
	{ \
		int32 MouseX; \
		int32 MouseY; \
	}; \
	struct EditorModeToolInstance_eventOnMouseMove_Parms \
	{ \
		int32 MouseX; \
		int32 MouseY; \
	}; \
	struct EditorModeToolInstance_eventOnMouseMoveCaptured_Parms \
	{ \
		int32 MouseX; \
		int32 MouseY; \
	}; \
	struct EditorModeToolInstance_eventOnMouseMovesCaptured_Parms \
	{ \
		TArray<FIntPoint> MouseMoves; \
	}; \
	struct EditorModeToolInstance_eventOverrideActionEditCopyStatus_Parms \
	{ \
		EEditModeAction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideActionEditCopyStatus_Parms() \
			: ReturnValue((EEditModeAction)0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideActionEditCutStatus_Parms \
	{ \
		EEditModeAction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideActionEditCutStatus_Parms() \
			: ReturnValue((EEditModeAction)0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideActionEditDeleteStatus_Parms \
	{ \
		EEditModeAction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideActionEditDeleteStatus_Parms() \
			: ReturnValue((EEditModeAction)0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideActionEditDuplicateStatus_Parms \
	{ \
		EEditModeAction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideActionEditDuplicateStatus_Parms() \
			: ReturnValue((EEditModeAction)0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideActionEditPasteStatus_Parms \
	{ \
		EEditModeAction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideActionEditPasteStatus_Parms() \
			: ReturnValue((EEditModeAction)0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms \
	{ \
		FVector OutPivot; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideCameraPivotForOrbit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideMouseCursor_Parms \
	{ \
		bool bOverrideCursor; \
		TEnumAsByte<EMouseCursor::Type> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideMouseCursor_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms \
	{ \
		FTransform NewTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideTransformGizmoCoordinateSystem_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms \
	{ \
		FVector NewLocation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventOverrideTransformGizmoLocation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventProcessEditCopy_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventProcessEditCopy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventProcessEditCut_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventProcessEditCut_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventProcessEditDelete_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventProcessEditDelete_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventProcessEditDuplicate_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventProcessEditDuplicate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventProcessEditPaste_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventProcessEditPaste_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventReceiveTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct EditorModeToolInstance_eventSelectActor_Parms \
	{ \
		AActor* InActor; \
		bool bIsSelected; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventSelectActor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorModeToolInstance_eventSelectionAllowed_Parms \
	{ \
		AActor* InActor; \
		bool bSelection; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorModeToolInstance_eventSelectionAllowed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_CALLBACK_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorModeToolInstance(); \
	friend struct Z_Construct_UClass_UEditorModeToolInstance_Statics; \
public: \
	DECLARE_CLASS(UEditorModeToolInstance, ULevelEditorToolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorModeToolInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEditorModeToolInstance(); \
	friend struct Z_Construct_UClass_UEditorModeToolInstance_Statics; \
public: \
	DECLARE_CLASS(UEditorModeToolInstance, ULevelEditorToolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorModeToolInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorModeToolInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorModeToolInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorModeToolInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorModeToolInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorModeToolInstance(UEditorModeToolInstance&&); \
	NO_API UEditorModeToolInstance(const UEditorModeToolInstance&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorModeToolInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorModeToolInstance(UEditorModeToolInstance&&); \
	NO_API UEditorModeToolInstance(const UEditorModeToolInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorModeToolInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorModeToolInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorModeToolInstance)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_21_PROLOG \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_EVENT_PARMS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorModeToolInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UEditorModeToolInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorModeTool_EditorModeToolInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FDummyStruct;
enum class EHitProxyPriorityType : uint8;
class UEditorUserWidget;
class AActor;
struct FBox;
struct FSelectionFrustumVolume;
struct FKey;
enum class EInputKeyEventType : uint8;
struct FTransform;
struct FVector;
struct FRotator;
struct FIndexedComponentVisProxyInfo;
struct FLevelEditingViewportClick;
struct FActorComponentWrapper;
#ifdef EDITORSCRIPTINGTOOLS_ComponentVisualizerInstance_generated_h
#error "ComponentVisualizerInstance.generated.h already included, missing '#pragma once' in ComponentVisualizerInstance.h"
#endif
#define EDITORSCRIPTINGTOOLS_ComponentVisualizerInstance_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_RPC_WRAPPERS \
	virtual TSubclassOf<UEditorUserWidget>  GetContextMenuUserWidgetClass_Implementation(); \
	virtual bool HandleSnapTo_Implementation(bool bInAlign, bool bInUseLineTrace, bool bInUseBounds, bool bInUsePivot, AActor* InDestination); \
	virtual bool HasFocusOnSelectionBoundingBox_Implementation(FBox& OutBoundingBox); \
	virtual bool HandleSelectionFrustum_Implementation(FSelectionFrustumVolume const& InFrustum); \
	virtual bool HandleSelectionBox_Implementation(FBox const& InBox); \
	virtual bool HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event); \
	virtual bool OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform); \
	virtual bool HandleTransformGizmoMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale); \
	virtual bool OverrideTransformGizmoLocation_Implementation(FVector& NewLocation); \
	virtual bool HandleClickVisualizerHitProxy_Implementation(FIndexedComponentVisProxyInfo const& HitInfo, FLevelEditingViewportClick const& ViewportClick); \
 \
	DECLARE_FUNCTION(execNotifyPropertyModifiedByName); \
	DECLARE_FUNCTION(execClearActiveWorldHitProxy); \
	DECLARE_FUNCTION(execCreateWorldHitProxyByIndex); \
	DECLARE_FUNCTION(execGetContextMenuUserWidgetClass); \
	DECLARE_FUNCTION(execHandleSnapTo); \
	DECLARE_FUNCTION(execHasFocusOnSelectionBoundingBox); \
	DECLARE_FUNCTION(execHandleSelectionFrustum); \
	DECLARE_FUNCTION(execHandleSelectionBox); \
	DECLARE_FUNCTION(execHandleInputKey); \
	DECLARE_FUNCTION(execOverrideTransformGizmoCoordinateSystem); \
	DECLARE_FUNCTION(execHandleTransformGizmoMove); \
	DECLARE_FUNCTION(execOverrideTransformGizmoLocation); \
	DECLARE_FUNCTION(execHandleClickVisualizerHitProxy);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<UEditorUserWidget>  GetContextMenuUserWidgetClass_Implementation(); \
	virtual bool HandleSnapTo_Implementation(bool bInAlign, bool bInUseLineTrace, bool bInUseBounds, bool bInUsePivot, AActor* InDestination); \
	virtual bool HasFocusOnSelectionBoundingBox_Implementation(FBox& OutBoundingBox); \
	virtual bool HandleSelectionFrustum_Implementation(FSelectionFrustumVolume const& InFrustum); \
	virtual bool HandleSelectionBox_Implementation(FBox const& InBox); \
	virtual bool HandleInputKey_Implementation(FKey Key, EInputKeyEventType Event); \
	virtual bool OverrideTransformGizmoCoordinateSystem_Implementation(FTransform& NewTransform); \
	virtual bool HandleTransformGizmoMove_Implementation(FVector& Drag, FRotator& DeltaRotation, FVector& DeltaScale); \
	virtual bool OverrideTransformGizmoLocation_Implementation(FVector& NewLocation); \
	virtual bool HandleClickVisualizerHitProxy_Implementation(FIndexedComponentVisProxyInfo const& HitInfo, FLevelEditingViewportClick const& ViewportClick); \
 \
	DECLARE_FUNCTION(execNotifyPropertyModifiedByName); \
	DECLARE_FUNCTION(execClearActiveWorldHitProxy); \
	DECLARE_FUNCTION(execCreateWorldHitProxyByIndex); \
	DECLARE_FUNCTION(execGetContextMenuUserWidgetClass); \
	DECLARE_FUNCTION(execHandleSnapTo); \
	DECLARE_FUNCTION(execHasFocusOnSelectionBoundingBox); \
	DECLARE_FUNCTION(execHandleSelectionFrustum); \
	DECLARE_FUNCTION(execHandleSelectionBox); \
	DECLARE_FUNCTION(execHandleInputKey); \
	DECLARE_FUNCTION(execOverrideTransformGizmoCoordinateSystem); \
	DECLARE_FUNCTION(execHandleTransformGizmoMove); \
	DECLARE_FUNCTION(execOverrideTransformGizmoLocation); \
	DECLARE_FUNCTION(execHandleClickVisualizerHitProxy);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_EVENT_PARMS \
	struct ComponentVisualizerInstance_eventGetContextMenuUserWidgetClass_Parms \
	{ \
		TSubclassOf<UEditorUserWidget>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventGetContextMenuUserWidgetClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms \
	{ \
		FIndexedComponentVisProxyInfo HitInfo; \
		FLevelEditingViewportClick ViewportClick; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleClickVisualizerHitProxy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleInputKey_Parms \
	{ \
		FKey Key; \
		EInputKeyEventType Event; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleInputKey_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleSelectionBox_Parms \
	{ \
		FBox InBox; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleSelectionBox_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms \
	{ \
		FSelectionFrustumVolume InFrustum; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleSelectionFrustum_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleSnapTo_Parms \
	{ \
		bool bInAlign; \
		bool bInUseLineTrace; \
		bool bInUseBounds; \
		bool bInUsePivot; \
		AActor* InDestination; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleSnapTo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms \
	{ \
		FVector Drag; \
		FRotator DeltaRotation; \
		FVector DeltaScale; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHandleTransformGizmoMove_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms \
	{ \
		FBox OutBoundingBox; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventHasFocusOnSelectionBoundingBox_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventOnContextMenuConstruct_Parms \
	{ \
		UEditorUserWidget* Widget; \
	}; \
	struct ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms \
	{ \
		FTransform NewTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventOverrideTransformGizmoCoordinateSystem_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms \
	{ \
		FVector NewLocation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ComponentVisualizerInstance_eventOverrideTransformGizmoLocation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ComponentVisualizerInstance_eventReceiveDrawHUD_Parms \
	{ \
		FActorComponentWrapper ComponentInfo; \
	}; \
	struct ComponentVisualizerInstance_eventReceiveDrawPrimitives_Parms \
	{ \
		FActorComponentWrapper ComponentInfo; \
	};


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentVisualizerInstance(); \
	friend struct Z_Construct_UClass_UComponentVisualizerInstance_Statics; \
public: \
	DECLARE_CLASS(UComponentVisualizerInstance, ULevelEditorToolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UComponentVisualizerInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUComponentVisualizerInstance(); \
	friend struct Z_Construct_UClass_UComponentVisualizerInstance_Statics; \
public: \
	DECLARE_CLASS(UComponentVisualizerInstance, ULevelEditorToolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UComponentVisualizerInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentVisualizerInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentVisualizerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentVisualizerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentVisualizerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentVisualizerInstance(UComponentVisualizerInstance&&); \
	NO_API UComponentVisualizerInstance(const UComponentVisualizerInstance&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentVisualizerInstance(UComponentVisualizerInstance&&); \
	NO_API UComponentVisualizerInstance(const UComponentVisualizerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentVisualizerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentVisualizerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComponentVisualizerInstance)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_16_PROLOG \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_EVENT_PARMS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UComponentVisualizerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_ComponentVisualizer_ComponentVisualizerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

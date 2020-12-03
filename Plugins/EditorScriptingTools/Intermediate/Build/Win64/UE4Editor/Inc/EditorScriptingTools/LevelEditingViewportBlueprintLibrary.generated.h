// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FActorHitProxyInfo;
struct FVector4;
struct FVector;
struct FVector2D;
struct FRotator;
enum class ELevelEditingViewportType : uint8;
struct FKey;
#ifdef EDITORSCRIPTINGTOOLS_LevelEditingViewportBlueprintLibrary_generated_h
#error "LevelEditingViewportBlueprintLibrary.generated.h already included, missing '#pragma once' in LevelEditingViewportBlueprintLibrary.h"
#endif
#define EDITORSCRIPTINGTOOLS_LevelEditingViewportBlueprintLibrary_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRedrawAllViewports); \
	DECLARE_FUNCTION(execRedrawLevelEditingViewports); \
	DECLARE_FUNCTION(execIsPrimitiveComponentUnderCursor); \
	DECLARE_FUNCTION(execGetActorUnderCursor); \
	DECLARE_FUNCTION(execTransformPixelPointToWorld); \
	DECLARE_FUNCTION(execTransformWorldPointToPixel); \
	DECLARE_FUNCTION(execTransformPixelPointToScreen); \
	DECLARE_FUNCTION(execTransformScreenPointToPixel); \
	DECLARE_FUNCTION(execTransformScreenPointToWorld); \
	DECLARE_FUNCTION(execTransformWorldPointToScreen); \
	DECLARE_FUNCTION(execGetEditorViewportMouseRayStartAndEnd); \
	DECLARE_FUNCTION(execGetViewportCameraOrthoZoom); \
	DECLARE_FUNCTION(execGetViewportCameraLookAtLocation); \
	DECLARE_FUNCTION(execGetViewportCameraRotation); \
	DECLARE_FUNCTION(execGetViewportCameraLocation); \
	DECLARE_FUNCTION(execSetViewportCameraOrthoZoom); \
	DECLARE_FUNCTION(execSetViewportCameraLookAtLocation); \
	DECLARE_FUNCTION(execSetViewportCameraRotation); \
	DECLARE_FUNCTION(execSetViewportCameraLocation); \
	DECLARE_FUNCTION(execGetEditingViewportDPIScale); \
	DECLARE_FUNCTION(execIsEditingViewportPerspective); \
	DECLARE_FUNCTION(execGetEditingViewportType); \
	DECLARE_FUNCTION(execSetEditingViewportType); \
	DECLARE_FUNCTION(execIsCmdPressed); \
	DECLARE_FUNCTION(execIsShiftPressed); \
	DECLARE_FUNCTION(execIsCtrlPressed); \
	DECLARE_FUNCTION(execIsAltPressed); \
	DECLARE_FUNCTION(execIsKeyPressed);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRedrawAllViewports); \
	DECLARE_FUNCTION(execRedrawLevelEditingViewports); \
	DECLARE_FUNCTION(execIsPrimitiveComponentUnderCursor); \
	DECLARE_FUNCTION(execGetActorUnderCursor); \
	DECLARE_FUNCTION(execTransformPixelPointToWorld); \
	DECLARE_FUNCTION(execTransformWorldPointToPixel); \
	DECLARE_FUNCTION(execTransformPixelPointToScreen); \
	DECLARE_FUNCTION(execTransformScreenPointToPixel); \
	DECLARE_FUNCTION(execTransformScreenPointToWorld); \
	DECLARE_FUNCTION(execTransformWorldPointToScreen); \
	DECLARE_FUNCTION(execGetEditorViewportMouseRayStartAndEnd); \
	DECLARE_FUNCTION(execGetViewportCameraOrthoZoom); \
	DECLARE_FUNCTION(execGetViewportCameraLookAtLocation); \
	DECLARE_FUNCTION(execGetViewportCameraRotation); \
	DECLARE_FUNCTION(execGetViewportCameraLocation); \
	DECLARE_FUNCTION(execSetViewportCameraOrthoZoom); \
	DECLARE_FUNCTION(execSetViewportCameraLookAtLocation); \
	DECLARE_FUNCTION(execSetViewportCameraRotation); \
	DECLARE_FUNCTION(execSetViewportCameraLocation); \
	DECLARE_FUNCTION(execGetEditingViewportDPIScale); \
	DECLARE_FUNCTION(execIsEditingViewportPerspective); \
	DECLARE_FUNCTION(execGetEditingViewportType); \
	DECLARE_FUNCTION(execSetEditingViewportType); \
	DECLARE_FUNCTION(execIsCmdPressed); \
	DECLARE_FUNCTION(execIsShiftPressed); \
	DECLARE_FUNCTION(execIsCtrlPressed); \
	DECLARE_FUNCTION(execIsAltPressed); \
	DECLARE_FUNCTION(execIsKeyPressed);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditingViewportBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelEditingViewportBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditingViewportBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditingViewportBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelEditingViewportBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelEditingViewportBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditingViewportBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditingViewportBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditingViewportBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditingViewportBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditingViewportBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditingViewportBlueprintLibrary(ULevelEditingViewportBlueprintLibrary&&); \
	NO_API ULevelEditingViewportBlueprintLibrary(const ULevelEditingViewportBlueprintLibrary&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditingViewportBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditingViewportBlueprintLibrary(ULevelEditingViewportBlueprintLibrary&&); \
	NO_API ULevelEditingViewportBlueprintLibrary(const ULevelEditingViewportBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditingViewportBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditingViewportBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditingViewportBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_23_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class ULevelEditingViewportBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditingViewportBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

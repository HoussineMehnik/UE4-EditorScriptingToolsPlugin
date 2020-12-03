// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDummyStruct;
class AActor;
struct FLinearColor;
struct FVector2D;
class UFont;
class USplineComponent;
enum class EDepthPriorityGroup : uint8;
struct FVector;
class UMaterialInterface;
struct FTransform;
#ifdef EDITORSCRIPTINGTOOLS_LevelEditorToolBase_generated_h
#error "LevelEditorToolBase.generated.h already included, missing '#pragma once' in LevelEditorToolBase.h"
#endif
#define EDITORSCRIPTINGTOOLS_LevelEditorToolBase_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCanvasDPIScale); \
	DECLARE_FUNCTION(execDrawActorScreenSpaceBoundingBox); \
	DECLARE_FUNCTION(execDrawCanvasLine); \
	DECLARE_FUNCTION(execDrawSimpleText); \
	DECLARE_FUNCTION(execDrawSpline); \
	DECLARE_FUNCTION(execDrawFlatArrow); \
	DECLARE_FUNCTION(execDrawWireBox); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execDrawWireSphere); \
	DECLARE_FUNCTION(execDrawSphere); \
	DECLARE_FUNCTION(execDrawTriangle); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawPoint);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCanvasDPIScale); \
	DECLARE_FUNCTION(execDrawActorScreenSpaceBoundingBox); \
	DECLARE_FUNCTION(execDrawCanvasLine); \
	DECLARE_FUNCTION(execDrawSimpleText); \
	DECLARE_FUNCTION(execDrawSpline); \
	DECLARE_FUNCTION(execDrawFlatArrow); \
	DECLARE_FUNCTION(execDrawWireBox); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execDrawWireSphere); \
	DECLARE_FUNCTION(execDrawSphere); \
	DECLARE_FUNCTION(execDrawTriangle); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawPoint);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorToolBase(); \
	friend struct Z_Construct_UClass_ULevelEditorToolBase_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorToolBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorToolBase)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorToolBase(); \
	friend struct Z_Construct_UClass_ULevelEditorToolBase_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorToolBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorToolBase)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorToolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorToolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorToolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorToolBase(ULevelEditorToolBase&&); \
	NO_API ULevelEditorToolBase(const ULevelEditorToolBase&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorToolBase(ULevelEditorToolBase&&); \
	NO_API ULevelEditorToolBase(const ULevelEditorToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorToolBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorToolBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorToolBase)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_26_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorToolBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class ULevelEditorToolBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorScriptingToolsCommon_LevelEditorToolBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

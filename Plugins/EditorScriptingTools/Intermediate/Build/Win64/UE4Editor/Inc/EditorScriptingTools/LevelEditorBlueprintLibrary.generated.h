// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBuiltinEditorModes : uint8;
enum class EEditorState : uint8;
class USceneComponent;
class AActor;
class UActorComponent;
class UObject;
#ifdef EDITORSCRIPTINGTOOLS_LevelEditorBlueprintLibrary_generated_h
#error "LevelEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in LevelEditorBlueprintLibrary.h"
#endif
#define EDITORSCRIPTINGTOOLS_LevelEditorBlueprintLibrary_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEditorModeID); \
	DECLARE_FUNCTION(execGetEditorState); \
	DECLARE_FUNCTION(execNotifyComponentTransformChanged); \
	DECLARE_FUNCTION(execNotifyActorMoved); \
	DECLARE_FUNCTION(execRerunActorConstructionScripts); \
	DECLARE_FUNCTION(execMarkActorComponentsRenderStateDirty); \
	DECLARE_FUNCTION(execSelectNone); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execPostEditChangeObject);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEditorModeID); \
	DECLARE_FUNCTION(execGetEditorState); \
	DECLARE_FUNCTION(execNotifyComponentTransformChanged); \
	DECLARE_FUNCTION(execNotifyActorMoved); \
	DECLARE_FUNCTION(execRerunActorConstructionScripts); \
	DECLARE_FUNCTION(execMarkActorComponentsRenderStateDirty); \
	DECLARE_FUNCTION(execSelectNone); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execPostEditChangeObject);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorBlueprintLibrary(ULevelEditorBlueprintLibrary&&); \
	NO_API ULevelEditorBlueprintLibrary(const ULevelEditorBlueprintLibrary&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorBlueprintLibrary(ULevelEditorBlueprintLibrary&&); \
	NO_API ULevelEditorBlueprintLibrary(const ULevelEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_22_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class ULevelEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_LevelEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

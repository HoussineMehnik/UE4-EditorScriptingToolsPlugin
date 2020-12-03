// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitProxyHandle;
struct FActorComponentWrapper;
struct FActorHitProxyInfo;
enum class EHitProxyType : uint8;
#ifdef EDITORSCRIPTINGTOOLS_HitProxiesBlueprintLibrary_generated_h
#error "HitProxiesBlueprintLibrary.generated.h already included, missing '#pragma once' in HitProxiesBlueprintLibrary.h"
#endif
#define EDITORSCRIPTINGTOOLS_HitProxiesBlueprintLibrary_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetComponentVisualizerHitProxyInfo); \
	DECLARE_FUNCTION(execGetActorHitProxyInfo); \
	DECLARE_FUNCTION(execGetIndexedHitProxyInfo); \
	DECLARE_FUNCTION(execGetHitProxyType); \
	DECLARE_FUNCTION(execIsValid);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetComponentVisualizerHitProxyInfo); \
	DECLARE_FUNCTION(execGetActorHitProxyInfo); \
	DECLARE_FUNCTION(execGetIndexedHitProxyInfo); \
	DECLARE_FUNCTION(execGetHitProxyType); \
	DECLARE_FUNCTION(execIsValid);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitProxiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UHitProxiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UHitProxiesBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHitProxiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHitProxiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UHitProxiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UHitProxiesBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitProxiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitProxiesBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitProxiesBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitProxiesBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitProxiesBlueprintLibrary(UHitProxiesBlueprintLibrary&&); \
	NO_API UHitProxiesBlueprintLibrary(const UHitProxiesBlueprintLibrary&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitProxiesBlueprintLibrary(UHitProxiesBlueprintLibrary&&); \
	NO_API UHitProxiesBlueprintLibrary(const UHitProxiesBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitProxiesBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitProxiesBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitProxiesBlueprintLibrary)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_14_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UHitProxiesBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_BlueprintLibrary_HitProxiesBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

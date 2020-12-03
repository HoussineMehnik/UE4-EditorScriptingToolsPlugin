// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef EDITORSCRIPTINGTOOLS_AssetDropTargetWidget_generated_h
#error "AssetDropTargetWidget.generated.h already included, missing '#pragma once' in AssetDropTargetWidget.h"
#endif
#define EDITORSCRIPTINGTOOLS_AssetDropTargetWidget_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_14_DELEGATE \
struct _Script_EditorScriptingTools_eventOnAssetDroppedDelegate_Parms \
{ \
	TArray<UObject*> DroppedAssets; \
}; \
static inline void FOnAssetDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssetDroppedDelegate, TArray<UObject*> const& DroppedAssets) \
{ \
	_Script_EditorScriptingTools_eventOnAssetDroppedDelegate_Parms Parms; \
	Parms.DroppedAssets=DroppedAssets; \
	OnAssetDroppedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_RPC_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDropTargetWidget(); \
	friend struct Z_Construct_UClass_UAssetDropTargetWidget_Statics; \
public: \
	DECLARE_CLASS(UAssetDropTargetWidget, UEditorWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetDropTargetWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAssetDropTargetWidget(); \
	friend struct Z_Construct_UClass_UAssetDropTargetWidget_Statics; \
public: \
	DECLARE_CLASS(UAssetDropTargetWidget, UEditorWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetDropTargetWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDropTargetWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetDropTargetWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDropTargetWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDropTargetWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetDropTargetWidget(UAssetDropTargetWidget&&); \
	NO_API UAssetDropTargetWidget(const UAssetDropTargetWidget&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetDropTargetWidget(UAssetDropTargetWidget&&); \
	NO_API UAssetDropTargetWidget(const UAssetDropTargetWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDropTargetWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDropTargetWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDropTargetWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_18_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UAssetDropTargetWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetDropTargetWidget_AssetDropTargetWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

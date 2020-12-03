// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef EDITORSCRIPTINGTOOLS_AssetPickerWidget_generated_h
#error "AssetPickerWidget.generated.h already included, missing '#pragma once' in AssetPickerWidget.h"
#endif
#define EDITORSCRIPTINGTOOLS_AssetPickerWidget_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_12_DELEGATE \
struct _Script_EditorScriptingTools_eventOnAssetSelectedDelegate_Parms \
{ \
	UObject* SelectedAsset; \
}; \
static inline void FOnAssetSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssetSelectedDelegate, UObject* SelectedAsset) \
{ \
	_Script_EditorScriptingTools_eventOnAssetSelectedDelegate_Parms Parms; \
	Parms.SelectedAsset=SelectedAsset; \
	OnAssetSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentAsset); \
	DECLARE_FUNCTION(execSetCurrentAsset);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentAsset); \
	DECLARE_FUNCTION(execSetCurrentAsset);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetPickerWidget(); \
	friend struct Z_Construct_UClass_UAssetPickerWidget_Statics; \
public: \
	DECLARE_CLASS(UAssetPickerWidget, UEditorWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetPickerWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAssetPickerWidget(); \
	friend struct Z_Construct_UClass_UAssetPickerWidget_Statics; \
public: \
	DECLARE_CLASS(UAssetPickerWidget, UEditorWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetPickerWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetPickerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetPickerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetPickerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetPickerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetPickerWidget(UAssetPickerWidget&&); \
	NO_API UAssetPickerWidget(const UAssetPickerWidget&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetPickerWidget(UAssetPickerWidget&&); \
	NO_API UAssetPickerWidget(const UAssetPickerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetPickerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetPickerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetPickerWidget)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentAssetPtr() { return STRUCT_OFFSET(UAssetPickerWidget, CurrentAssetPtr); }


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_20_PROLOG
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UAssetPickerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_Widgets_AssetPickerWidget_AssetPickerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

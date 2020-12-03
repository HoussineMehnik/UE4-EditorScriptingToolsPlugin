// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUserDefinedSettingsUtilityBlueprint;
class UEditorUserDefinedSettings;
#ifdef EDITORSCRIPTINGTOOLS_EditorUserDefinedSettings_generated_h
#error "EditorUserDefinedSettings.generated.h already included, missing '#pragma once' in EditorUserDefinedSettings.h"
#endif
#define EDITORSCRIPTINGTOOLS_EditorUserDefinedSettings_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_RPC_WRAPPERS \
	virtual FText OnStatus_Implementation(); \
	virtual bool OnSaveDefaults_Implementation(); \
	virtual bool OnSave_Implementation(); \
	virtual bool OnResetDefaults_Implementation(); \
	virtual bool OnModified_Implementation(); \
	virtual bool OnImport_Implementation(const FString& Path); \
	virtual bool OnExport_Implementation(const FString& Path); \
	virtual bool OnCanEdit_Implementation(); \
 \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execGetEditorUserDefinedSettingsObject); \
	DECLARE_FUNCTION(execOnStatus); \
	DECLARE_FUNCTION(execOnSaveDefaults); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execOnResetDefaults); \
	DECLARE_FUNCTION(execOnModified); \
	DECLARE_FUNCTION(execOnImport); \
	DECLARE_FUNCTION(execOnExport); \
	DECLARE_FUNCTION(execOnCanEdit);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FText OnStatus_Implementation(); \
	virtual bool OnSaveDefaults_Implementation(); \
	virtual bool OnSave_Implementation(); \
	virtual bool OnResetDefaults_Implementation(); \
	virtual bool OnModified_Implementation(); \
	virtual bool OnImport_Implementation(const FString& Path); \
	virtual bool OnExport_Implementation(const FString& Path); \
	virtual bool OnCanEdit_Implementation(); \
 \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execGetEditorUserDefinedSettingsObject); \
	DECLARE_FUNCTION(execOnStatus); \
	DECLARE_FUNCTION(execOnSaveDefaults); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execOnResetDefaults); \
	DECLARE_FUNCTION(execOnModified); \
	DECLARE_FUNCTION(execOnImport); \
	DECLARE_FUNCTION(execOnExport); \
	DECLARE_FUNCTION(execOnCanEdit);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_EVENT_PARMS \
	struct EditorUserDefinedSettings_eventOnCanEdit_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnCanEdit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnExport_Parms \
	{ \
		FString Path; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnExport_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnImport_Parms \
	{ \
		FString Path; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnImport_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnModified_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnModified_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnResetDefaults_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnResetDefaults_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnSave_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnSave_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnSaveDefaults_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorUserDefinedSettings_eventOnSaveDefaults_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorUserDefinedSettings_eventOnStatus_Parms \
	{ \
		FText ReturnValue; \
	};


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUserDefinedSettings(); \
	friend struct Z_Construct_UClass_UEditorUserDefinedSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorUserDefinedSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorUserDefinedSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUserDefinedSettings(); \
	friend struct Z_Construct_UClass_UEditorUserDefinedSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorUserDefinedSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UEditorUserDefinedSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUserDefinedSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUserDefinedSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUserDefinedSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUserDefinedSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUserDefinedSettings(UEditorUserDefinedSettings&&); \
	NO_API UEditorUserDefinedSettings(const UEditorUserDefinedSettings&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUserDefinedSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUserDefinedSettings(UEditorUserDefinedSettings&&); \
	NO_API UEditorUserDefinedSettings(const UEditorUserDefinedSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUserDefinedSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUserDefinedSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUserDefinedSettings)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_13_PROLOG \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_EVENT_PARMS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UEditorUserDefinedSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_EditorUserDefinedSettings_EditorUserDefinedSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

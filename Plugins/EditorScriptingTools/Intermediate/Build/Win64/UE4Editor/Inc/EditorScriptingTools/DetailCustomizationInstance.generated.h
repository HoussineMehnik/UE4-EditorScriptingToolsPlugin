// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDetailCategoryBuilderHandle;
enum class EDetailCategoryPriority : uint8;
struct FEditablePropertyInfo;
class UObject;
class AActor;
#ifdef EDITORSCRIPTINGTOOLS_DetailCustomizationInstance_generated_h
#error "DetailCustomizationInstance.generated.h already included, missing '#pragma once' in DetailCustomizationInstance.h"
#endif
#define EDITORSCRIPTINGTOOLS_DetailCustomizationInstance_generated_h

#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_SPARSE_DATA
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditCategory); \
	DECLARE_FUNCTION(execGetAllEditablePropertyInfos); \
	DECLARE_FUNCTION(execGetEditablePropertyInfosByClass); \
	DECLARE_FUNCTION(execHideProperty); \
	DECLARE_FUNCTION(execGetCategoryNames); \
	DECLARE_FUNCTION(execHideCategory); \
	DECLARE_FUNCTION(execRefreshDetails); \
	DECLARE_FUNCTION(execGetCustomizedActors); \
	DECLARE_FUNCTION(execGetCustomizedObjects); \
	DECLARE_FUNCTION(execGetCustomizedClass); \
	DECLARE_FUNCTION(execSaveConfigProperties);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditCategory); \
	DECLARE_FUNCTION(execGetAllEditablePropertyInfos); \
	DECLARE_FUNCTION(execGetEditablePropertyInfosByClass); \
	DECLARE_FUNCTION(execHideProperty); \
	DECLARE_FUNCTION(execGetCategoryNames); \
	DECLARE_FUNCTION(execHideCategory); \
	DECLARE_FUNCTION(execRefreshDetails); \
	DECLARE_FUNCTION(execGetCustomizedActors); \
	DECLARE_FUNCTION(execGetCustomizedObjects); \
	DECLARE_FUNCTION(execGetCustomizedClass); \
	DECLARE_FUNCTION(execSaveConfigProperties);


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_EVENT_PARMS \
	struct DetailCustomizationInstance_eventOnChangingPropertyFinished_Parms \
	{ \
		FName PropertyName; \
		FName MemberPropertyName; \
		TEnumAsByte<EDetailsViewPropertyChangeType::Type> ChangeType; \
	}; \
	struct DetailCustomizationInstance_eventOnCustomizeDetails_Parms \
	{ \
		TArray<UObject*> CustomizedObjects; \
	};


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_CALLBACK_WRAPPERS
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailCustomizationInstance(); \
	friend struct Z_Construct_UClass_UDetailCustomizationInstance_Statics; \
public: \
	DECLARE_CLASS(UDetailCustomizationInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UDetailCustomizationInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDetailCustomizationInstance(); \
	friend struct Z_Construct_UClass_UDetailCustomizationInstance_Statics; \
public: \
	DECLARE_CLASS(UDetailCustomizationInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorScriptingTools"), NO_API) \
	DECLARE_SERIALIZER(UDetailCustomizationInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailCustomizationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailCustomizationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailCustomizationInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailCustomizationInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetailCustomizationInstance(UDetailCustomizationInstance&&); \
	NO_API UDetailCustomizationInstance(const UDetailCustomizationInstance&); \
public:


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailCustomizationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetailCustomizationInstance(UDetailCustomizationInstance&&); \
	NO_API UDetailCustomizationInstance(const UDetailCustomizationInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailCustomizationInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailCustomizationInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailCustomizationInstance)


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_26_PROLOG \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_EVENT_PARMS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_RPC_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_INCLASS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_SPARSE_DATA \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DetailCustomizationInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<class UDetailCustomizationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorScriptingTools_Source_EditorScriptingTools_Private_DetailCustomization_DetailCustomizationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

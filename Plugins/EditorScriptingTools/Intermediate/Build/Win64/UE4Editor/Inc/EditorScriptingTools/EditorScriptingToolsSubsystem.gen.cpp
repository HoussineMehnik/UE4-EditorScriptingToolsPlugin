// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorScriptingToolsSubsystem() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingToolsSubsystem_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingToolsSubsystem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UComponentVisualizerUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo();
// End Cross Module References
	void UEditorScriptingToolsSubsystem::StaticRegisterNativesUEditorScriptingToolsSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UEditorScriptingToolsSubsystem_NoRegister()
	{
		return UEditorScriptingToolsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoadedEdModeToolBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LastLoadedEdModeToolBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_MetaData[];
#endif
		static void NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableThumbnailOverlayOnRegisteredUtilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEditingWhileSimulating_MetaData[];
#endif
		static void NewProp_bEnableEditingWhileSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEditingWhileSimulating;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ComponentVisualizerUtilityBlueprints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentVisualizerUtilityBlueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentVisualizerUtilityBlueprints;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DetailCustomizationUtilityBlueprints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailCustomizationUtilityBlueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetailCustomizationUtilityBlueprints;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EditorUserDefinedSettingsUtilityBlueprints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorUserDefinedSettingsUtilityBlueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorUserDefinedSettingsUtilityBlueprints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlacementCategoriesInfo_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementCategoriesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PlacementCategoriesInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_LastLoadedEdModeToolBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_LastLoadedEdModeToolBlueprint = { "LastLoadedEdModeToolBlueprint", nullptr, (EPropertyFlags)0x0014000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorScriptingToolsSubsystem, LastLoadedEdModeToolBlueprint), Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_LastLoadedEdModeToolBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_LastLoadedEdModeToolBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_SetBit(void* Obj)
	{
		((UEditorScriptingToolsSubsystem*)Obj)->bEnableThumbnailOverlayOnRegisteredUtilities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities = { "bEnableThumbnailOverlayOnRegisteredUtilities", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorScriptingToolsSubsystem), &Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating_MetaData[] = {
		{ "Category", "EditorMode" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating_SetBit(void* Obj)
	{
		((UEditorScriptingToolsSubsystem*)Obj)->bEnableEditingWhileSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating = { "bEnableEditingWhileSimulating", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorScriptingToolsSubsystem), &Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints_Inner = { "ComponentVisualizerUtilityBlueprints", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UComponentVisualizerUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints_MetaData[] = {
		{ "Category", "ComponentVisualizers" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints = { "ComponentVisualizerUtilityBlueprints", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorScriptingToolsSubsystem, ComponentVisualizerUtilityBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints_Inner = { "DetailCustomizationUtilityBlueprints", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints_MetaData[] = {
		{ "Category", "DetailCustomizations" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints = { "DetailCustomizationUtilityBlueprints", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorScriptingToolsSubsystem, DetailCustomizationUtilityBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints_Inner = { "EditorUserDefinedSettingsUtilityBlueprints", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints_MetaData[] = {
		{ "Category", "UserDefinedSettings" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints = { "EditorUserDefinedSettingsUtilityBlueprints", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorScriptingToolsSubsystem, EditorUserDefinedSettingsUtilityBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo_ElementProp = { "PlacementCategoriesInfo", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserDefinedPlacementCategoryInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo_MetaData[] = {
		{ "Category", "UserDefinedPlacementCategories" },
		{ "ModuleRelativePath", "Private/EditorScriptingToolsSubsystem/EditorScriptingToolsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo = { "PlacementCategoriesInfo", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorScriptingToolsSubsystem, PlacementCategoriesInfo), METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_LastLoadedEdModeToolBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableThumbnailOverlayOnRegisteredUtilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_bEnableEditingWhileSimulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_ComponentVisualizerUtilityBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_DetailCustomizationUtilityBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_EditorUserDefinedSettingsUtilityBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::NewProp_PlacementCategoriesInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorScriptingToolsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::ClassParams = {
		&UEditorScriptingToolsSubsystem::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorScriptingToolsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorScriptingToolsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorScriptingToolsSubsystem, 2442930007);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorScriptingToolsSubsystem>()
	{
		return UEditorScriptingToolsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorScriptingToolsSubsystem(Z_Construct_UClass_UEditorScriptingToolsSubsystem, &UEditorScriptingToolsSubsystem::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorScriptingToolsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorScriptingToolsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

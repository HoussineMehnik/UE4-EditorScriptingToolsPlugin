// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailCustomizationUtilityBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailCustomizationUtilityBlueprint() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprint();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingUtilityBlueprint();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDetailCustomizationUtilityBlueprint::StaticRegisterNativesUDetailCustomizationUtilityBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_NoRegister()
	{
		return UDetailCustomizationUtilityBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomizedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDefaultObjectCustomization_MetaData[];
#endif
		static void NewProp_bAllowDefaultObjectCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDefaultObjectCustomization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorScriptingUtilityBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DetailCustomization/DetailCustomizationUtilityBlueprint.h" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationUtilityBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_CustomizedClass_MetaData[] = {
		{ "Category", "DetailCustomizationSettings" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationUtilityBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_CustomizedClass = { "CustomizedClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetailCustomizationUtilityBlueprint, CustomizedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_CustomizedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_CustomizedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization_MetaData[] = {
		{ "Category", "DetailCustomizationSettings" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationUtilityBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization_SetBit(void* Obj)
	{
		((UDetailCustomizationUtilityBlueprint*)Obj)->bAllowDefaultObjectCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization = { "bAllowDefaultObjectCustomization", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDetailCustomizationUtilityBlueprint), &Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_CustomizedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::NewProp_bAllowDefaultObjectCustomization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailCustomizationUtilityBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::ClassParams = {
		&UDetailCustomizationUtilityBlueprint::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetailCustomizationUtilityBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetailCustomizationUtilityBlueprint, 4255078010);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UDetailCustomizationUtilityBlueprint>()
	{
		return UDetailCustomizationUtilityBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetailCustomizationUtilityBlueprint(Z_Construct_UClass_UDetailCustomizationUtilityBlueprint, &UDetailCustomizationUtilityBlueprint::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UDetailCustomizationUtilityBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailCustomizationUtilityBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

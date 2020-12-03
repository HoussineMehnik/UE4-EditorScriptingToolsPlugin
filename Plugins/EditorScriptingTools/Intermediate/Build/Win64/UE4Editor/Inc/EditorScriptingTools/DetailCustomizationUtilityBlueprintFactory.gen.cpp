// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/DetailCustomization/DetailCustomizationUtilityBlueprintFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailCustomizationUtilityBlueprintFactory() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDetailCustomizationUtilityBlueprintFactory::StaticRegisterNativesUDetailCustomizationUtilityBlueprintFactory()
	{
	}
	UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_NoRegister()
	{
		return UDetailCustomizationUtilityBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DetailCustomization/DetailCustomizationUtilityBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationUtilityBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/DetailCustomization/DetailCustomizationUtilityBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetailCustomizationUtilityBlueprintFactory, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailCustomizationUtilityBlueprintFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::ClassParams = {
		&UDetailCustomizationUtilityBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetailCustomizationUtilityBlueprintFactory, 1745930698);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UDetailCustomizationUtilityBlueprintFactory>()
	{
		return UDetailCustomizationUtilityBlueprintFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetailCustomizationUtilityBlueprintFactory(Z_Construct_UClass_UDetailCustomizationUtilityBlueprintFactory, &UDetailCustomizationUtilityBlueprintFactory::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UDetailCustomizationUtilityBlueprintFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailCustomizationUtilityBlueprintFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

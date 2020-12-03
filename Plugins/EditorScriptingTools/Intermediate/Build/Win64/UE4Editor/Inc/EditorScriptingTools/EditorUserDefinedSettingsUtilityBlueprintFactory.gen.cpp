// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserDefinedSettings/EditorUserDefinedSettingsUtilityBlueprintFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserDefinedSettingsUtilityBlueprintFactory() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UEditorUserDefinedSettingsUtilityBlueprintFactory::StaticRegisterNativesUEditorUserDefinedSettingsUtilityBlueprintFactory()
	{
	}
	UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_NoRegister()
	{
		return UEditorUserDefinedSettingsUtilityBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorUserDefinedSettings/EditorUserDefinedSettingsUtilityBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettingsUtilityBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedSettings/EditorUserDefinedSettingsUtilityBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorUserDefinedSettingsUtilityBlueprintFactory, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserDefinedSettingsUtilityBlueprintFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::ClassParams = {
		&UEditorUserDefinedSettingsUtilityBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserDefinedSettingsUtilityBlueprintFactory, 2113803355);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserDefinedSettingsUtilityBlueprintFactory>()
	{
		return UEditorUserDefinedSettingsUtilityBlueprintFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory(Z_Construct_UClass_UEditorUserDefinedSettingsUtilityBlueprintFactory, &UEditorUserDefinedSettingsUtilityBlueprintFactory::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserDefinedSettingsUtilityBlueprintFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserDefinedSettingsUtilityBlueprintFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

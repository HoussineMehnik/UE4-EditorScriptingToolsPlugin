// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserDefinedActions/EditorUserDefinedActionsFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserDefinedActionsFactory() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActionsFactory_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActionsFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
// End Cross Module References
	void UEditorUserDefinedActionsFactory::StaticRegisterNativesUEditorUserDefinedActionsFactory()
	{
	}
	UClass* Z_Construct_UClass_UEditorUserDefinedActionsFactory_NoRegister()
	{
		return UEditorUserDefinedActionsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorUserDefinedActions/EditorUserDefinedActionsFactory.h" },
		{ "ModuleRelativePath", "Private/EditorUserDefinedActions/EditorUserDefinedActionsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserDefinedActionsFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::ClassParams = {
		&UEditorUserDefinedActionsFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserDefinedActionsFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserDefinedActionsFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserDefinedActionsFactory, 1797410978);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserDefinedActionsFactory>()
	{
		return UEditorUserDefinedActionsFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserDefinedActionsFactory(Z_Construct_UClass_UEditorUserDefinedActionsFactory, &UEditorUserDefinedActionsFactory::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserDefinedActionsFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserDefinedActionsFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

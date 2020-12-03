// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorScriptingToolsCommon/IEditorScriptingUtilityAssetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEditorScriptingUtilityAssetInterface() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingUtilityAssetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
// End Cross Module References
	void UEditorScriptingUtilityAssetInterface::StaticRegisterNativesUEditorScriptingUtilityAssetInterface()
	{
	}
	UClass* Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_NoRegister()
	{
		return UEditorScriptingUtilityAssetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorScriptingToolsCommon/IEditorScriptingUtilityAssetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditorScriptingUtilityAssetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::ClassParams = {
		&UEditorScriptingUtilityAssetInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorScriptingUtilityAssetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorScriptingUtilityAssetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorScriptingUtilityAssetInterface, 2329550349);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorScriptingUtilityAssetInterface>()
	{
		return UEditorScriptingUtilityAssetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorScriptingUtilityAssetInterface(Z_Construct_UClass_UEditorScriptingUtilityAssetInterface, &UEditorScriptingUtilityAssetInterface::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorScriptingUtilityAssetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorScriptingUtilityAssetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

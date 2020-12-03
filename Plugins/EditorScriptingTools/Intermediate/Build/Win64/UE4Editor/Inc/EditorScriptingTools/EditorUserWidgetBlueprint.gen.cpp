// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserWidget/EditorUserWidgetBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserWidgetBlueprint() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidgetBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidgetBlueprint();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
// End Cross Module References
	void UEditorUserWidgetBlueprint::StaticRegisterNativesUEditorUserWidgetBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UEditorUserWidgetBlueprint_NoRegister()
	{
		return UEditorUserWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUserWidget/EditorUserWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Private/EditorUserWidget/EditorUserWidgetBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserWidgetBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::ClassParams = {
		&UEditorUserWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserWidgetBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserWidgetBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserWidgetBlueprint, 865882717);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserWidgetBlueprint>()
	{
		return UEditorUserWidgetBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserWidgetBlueprint(Z_Construct_UClass_UEditorUserWidgetBlueprint, &UEditorUserWidgetBlueprint::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserWidgetBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserWidgetBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

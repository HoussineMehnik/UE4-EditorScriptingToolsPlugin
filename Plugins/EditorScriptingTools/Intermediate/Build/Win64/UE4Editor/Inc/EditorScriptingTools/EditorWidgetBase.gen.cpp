// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/Widgets/EditorWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorWidgetBase() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorWidgetBase_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
// End Cross Module References
	void UEditorWidgetBase::StaticRegisterNativesUEditorWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UEditorWidgetBase_NoRegister()
	{
		return UEditorWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/EditorWidgetBase.h" },
		{ "ModuleRelativePath", "Private/Widgets/EditorWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorWidgetBase_Statics::ClassParams = {
		&UEditorWidgetBase::StaticClass,
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
		0x00A000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorWidgetBase, 1600702563);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorWidgetBase>()
	{
		return UEditorWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorWidgetBase(Z_Construct_UClass_UEditorWidgetBase, &UEditorWidgetBase::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

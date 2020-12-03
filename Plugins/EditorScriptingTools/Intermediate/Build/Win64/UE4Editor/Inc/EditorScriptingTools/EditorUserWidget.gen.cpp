// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorUserWidget/EditorUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserWidget() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
// End Cross Module References
	void UEditorUserWidget::StaticRegisterNativesUEditorUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister()
	{
		return UEditorUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUserWidget/EditorUserWidget.h" },
		{ "ModuleRelativePath", "Private/EditorUserWidget/EditorUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserWidget_Statics::ClassParams = {
		&UEditorUserWidget::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserWidget, 3041365701);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserWidget>()
	{
		return UEditorUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserWidget(Z_Construct_UClass_UEditorUserWidget, &UEditorUserWidget::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

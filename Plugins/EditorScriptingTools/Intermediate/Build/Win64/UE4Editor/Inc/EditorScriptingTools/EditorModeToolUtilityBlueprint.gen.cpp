// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorModeTool/EditorModeToolUtilityBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModeToolUtilityBlueprint() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorScriptingUtilityBlueprint();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
// End Cross Module References
	void UEditorModeToolUtilityBlueprint::StaticRegisterNativesUEditorModeToolUtilityBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint_NoRegister()
	{
		return UEditorModeToolUtilityBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolkitWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToolkitWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportOverlayWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ViewportOverlayWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowToolDetailsPanel_MetaData[];
#endif
		static void NewProp_bShowToolDetailsPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowToolDetailsPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorScriptingUtilityBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorModeTool/EditorModeToolUtilityBlueprint.h" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolUtilityBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ToolkitWidgetClass_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolUtilityBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ToolkitWidgetClass = { "ToolkitWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorModeToolUtilityBlueprint, ToolkitWidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ToolkitWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ToolkitWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ViewportOverlayWidgetClass_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolUtilityBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ViewportOverlayWidgetClass = { "ViewportOverlayWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorModeToolUtilityBlueprint, ViewportOverlayWidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ViewportOverlayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ViewportOverlayWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Private/EditorModeTool/EditorModeToolUtilityBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel_SetBit(void* Obj)
	{
		((UEditorModeToolUtilityBlueprint*)Obj)->bShowToolDetailsPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel = { "bShowToolDetailsPanel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorModeToolUtilityBlueprint), &Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ToolkitWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_ViewportOverlayWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::NewProp_bShowToolDetailsPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModeToolUtilityBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::ClassParams = {
		&UEditorModeToolUtilityBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModeToolUtilityBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorModeToolUtilityBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorModeToolUtilityBlueprint, 31699016);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorModeToolUtilityBlueprint>()
	{
		return UEditorModeToolUtilityBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorModeToolUtilityBlueprint(Z_Construct_UClass_UEditorModeToolUtilityBlueprint, &UEditorModeToolUtilityBlueprint::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorModeToolUtilityBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModeToolUtilityBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

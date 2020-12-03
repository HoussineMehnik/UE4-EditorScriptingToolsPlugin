// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/Widgets/AssetDropTargetWidget/AssetDropTargetWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDropTargetWidget() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetDropTargetWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetDropTargetWidget();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorWidgetBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics
	{
		struct _Script_EditorScriptingTools_eventOnAssetDroppedDelegate_Parms
		{
			TArray<UObject*> DroppedAssets;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DroppedAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets_Inner = { "DroppedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets = { "DroppedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EditorScriptingTools_eventOnAssetDroppedDelegate_Parms, DroppedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::NewProp_DroppedAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Widgets/AssetDropTargetWidget/AssetDropTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools, nullptr, "OnAssetDroppedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_EditorScriptingTools_eventOnAssetDroppedDelegate_Parms), Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAssetDropTargetWidget::StaticRegisterNativesUAssetDropTargetWidget()
	{
	}
	UClass* Z_Construct_UClass_UAssetDropTargetWidget_NoRegister()
	{
		return UAssetDropTargetWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDropTargetWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetDropped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDropTargetWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDropTargetWidget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset(s) Drop Target" },
		{ "IncludePath", "Widgets/AssetDropTargetWidget/AssetDropTargetWidget.h" },
		{ "ModuleRelativePath", "Private/Widgets/AssetDropTargetWidget/AssetDropTargetWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDropTargetWidget_Statics::NewProp_OnAssetDropped_MetaData[] = {
		{ "ModuleRelativePath", "Private/Widgets/AssetDropTargetWidget/AssetDropTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAssetDropTargetWidget_Statics::NewProp_OnAssetDropped = { "OnAssetDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetDropTargetWidget, OnAssetDropped), Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetDroppedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAssetDropTargetWidget_Statics::NewProp_OnAssetDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDropTargetWidget_Statics::NewProp_OnAssetDropped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetDropTargetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetDropTargetWidget_Statics::NewProp_OnAssetDropped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDropTargetWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDropTargetWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetDropTargetWidget_Statics::ClassParams = {
		&UAssetDropTargetWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetDropTargetWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDropTargetWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDropTargetWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDropTargetWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDropTargetWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetDropTargetWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetDropTargetWidget, 2463632303);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UAssetDropTargetWidget>()
	{
		return UAssetDropTargetWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetDropTargetWidget(Z_Construct_UClass_UAssetDropTargetWidget, &UAssetDropTargetWidget::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UAssetDropTargetWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDropTargetWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetThumbnailWidget() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetThumbnailWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetThumbnailWidget();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorWidgetBase();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UAssetThumbnailWidget::execSetThumbnailSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnailSize(Z_Param_NewSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetThumbnailWidget::execRefreshThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshThumbnail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetThumbnailWidget::execSetThumbnail)
	{
		P_GET_OBJECT(UObject,Z_Param_NewAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnail(Z_Param_NewAsset);
		P_NATIVE_END;
	}
	void UAssetThumbnailWidget::StaticRegisterNativesUAssetThumbnailWidget()
	{
		UClass* Class = UAssetThumbnailWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshThumbnail", &UAssetThumbnailWidget::execRefreshThumbnail },
			{ "SetThumbnail", &UAssetThumbnailWidget::execSetThumbnail },
			{ "SetThumbnailSize", &UAssetThumbnailWidget::execSetThumbnailSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetThumbnail|Appearance" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetThumbnailWidget, nullptr, "RefreshThumbnail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics
	{
		struct AssetThumbnailWidget_eventSetThumbnail_Parms
		{
			UObject* NewAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetThumbnailWidget_eventSetThumbnail_Parms, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::NewProp_NewAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetThumbnail|Appearance" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetThumbnailWidget, nullptr, "SetThumbnail", nullptr, nullptr, sizeof(AssetThumbnailWidget_eventSetThumbnail_Parms), Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics
	{
		struct AssetThumbnailWidget_eventSetThumbnailSize_Parms
		{
			FVector2D NewSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetThumbnailWidget_eventSetThumbnailSize_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::NewProp_NewSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetThumbnail|Appearance" },
		{ "CPP_Default_NewSize", "(X=256.000,Y=256.000)" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetThumbnailWidget, nullptr, "SetThumbnailSize", nullptr, nullptr, sizeof(AssetThumbnailWidget_eventSetThumbnailSize_Parms), Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetThumbnailWidget_NoRegister()
	{
		return UAssetThumbnailWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAssetThumbnailWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetThumbnailWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetThumbnailWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetThumbnailWidget_RefreshThumbnail, "RefreshThumbnail" }, // 162663058
		{ &Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnail, "SetThumbnail" }, // 3070666975
		{ &Z_Construct_UFunction_UAssetThumbnailWidget_SetThumbnailSize, "SetThumbnailSize" }, // 2532361073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetThumbnailWidget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Thumbnail" },
		{ "IncludePath", "Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "AssetThumbnail" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetThumbnailWidget, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_ThumbnailSize_MetaData[] = {
		{ "Category", "AssetThumbnail" },
		{ "ModuleRelativePath", "Private/Widgets/AssetThumbnailWidget/AssetThumbnailWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_ThumbnailSize = { "ThumbnailSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetThumbnailWidget, ThumbnailSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_ThumbnailSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_ThumbnailSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetThumbnailWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetThumbnailWidget_Statics::NewProp_ThumbnailSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetThumbnailWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetThumbnailWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetThumbnailWidget_Statics::ClassParams = {
		&UAssetThumbnailWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetThumbnailWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetThumbnailWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetThumbnailWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetThumbnailWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetThumbnailWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetThumbnailWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetThumbnailWidget, 1674936049);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UAssetThumbnailWidget>()
	{
		return UAssetThumbnailWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetThumbnailWidget(Z_Construct_UClass_UAssetThumbnailWidget, &UAssetThumbnailWidget::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UAssetThumbnailWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetThumbnailWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

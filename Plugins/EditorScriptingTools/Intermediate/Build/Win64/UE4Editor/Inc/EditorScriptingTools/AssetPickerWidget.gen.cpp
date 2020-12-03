// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/Widgets/AssetPickerWidget/AssetPickerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetPickerWidget() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UFunction* Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetPickerWidget_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UAssetPickerWidget();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorWidgetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics
	{
		struct _Script_EditorScriptingTools_eventOnAssetSelectedDelegate_Parms
		{
			UObject* SelectedAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::NewProp_SelectedAsset = { "SelectedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EditorScriptingTools_eventOnAssetSelectedDelegate_Parms, SelectedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::NewProp_SelectedAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingTools, nullptr, "OnAssetSelectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_EditorScriptingTools_eventOnAssetSelectedDelegate_Parms), Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAssetPickerWidget::execGetCurrentAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCurrentAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetPickerWidget::execSetCurrentAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAsset(Z_Param_InAsset);
		P_NATIVE_END;
	}
	void UAssetPickerWidget::StaticRegisterNativesUAssetPickerWidget()
	{
		UClass* Class = UAssetPickerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentAsset", &UAssetPickerWidget::execGetCurrentAsset },
			{ "SetCurrentAsset", &UAssetPickerWidget::execSetCurrentAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics
	{
		struct AssetPickerWidget_eventGetCurrentAsset_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetPickerWidget_eventGetCurrentAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetPicker" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetPickerWidget, nullptr, "GetCurrentAsset", nullptr, nullptr, sizeof(AssetPickerWidget_eventGetCurrentAsset_Parms), Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics
	{
		struct AssetPickerWidget_eventSetCurrentAsset_Parms
		{
			UObject* InAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetPickerWidget_eventSetCurrentAsset_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetPicker" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetPickerWidget, nullptr, "SetCurrentAsset", nullptr, nullptr, sizeof(AssetPickerWidget_eventSetCurrentAsset_Parms), Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetPickerWidget_NoRegister()
	{
		return UAssetPickerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAssetPickerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowClear_MetaData[];
#endif
		static void NewProp_bAllowClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowClear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpenSubMenuOnClick_MetaData[];
#endif
		static void NewProp_bOpenSubMenuOnClick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpenSubMenuOnClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuLabelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuLabelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuToolTipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuToolTipText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentAssetPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetPickerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetPickerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetPickerWidget_GetCurrentAsset, "GetCurrentAsset" }, // 1259139890
		{ &Z_Construct_UFunction_UAssetPickerWidget_SetCurrentAsset, "SetCurrentAsset" }, // 1144355001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Picker Menu" },
		{ "IncludePath", "Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_OnAssetSelected_MetaData[] = {
		{ "Category", "AssetPicker|Event" },
		{ "Comment", "/** Called to when an asset is selected */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "Called to when an asset is selected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_OnAssetSelected = { "OnAssetSelected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPickerWidget, OnAssetSelected), Z_Construct_UDelegateFunction_EditorScriptingTools_OnAssetSelectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_OnAssetSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_OnAssetSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_AllowedClass_MetaData[] = {
		{ "Category", "AssetPicker" },
		{ "Comment", "/** Class that is allowed in the asset picker */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "Class that is allowed in the asset picker" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_AllowedClass = { "AllowedClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPickerWidget, AllowedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_AllowedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_AllowedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear_MetaData[] = {
		{ "Category", "AssetPicker" },
		{ "Comment", "/** Whether the asset can be 'None' */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "Whether the asset can be 'None'" },
	};
#endif
	void Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear_SetBit(void* Obj)
	{
		((UAssetPickerWidget*)Obj)->bAllowClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear = { "bAllowClear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetPickerWidget), &Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick_MetaData[] = {
		{ "Category", "AssetPicker" },
		{ "Comment", "/** Sub-menu will open only if the sub-menu entry is clicked. */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "Sub-menu will open only if the sub-menu entry is clicked." },
	};
#endif
	void Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick_SetBit(void* Obj)
	{
		((UAssetPickerWidget*)Obj)->bOpenSubMenuOnClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick = { "bOpenSubMenuOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetPickerWidget), &Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuLabelText_MetaData[] = {
		{ "Category", "AssetPicker" },
		{ "Comment", "/** The text that should be shown for the menu. */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "The text that should be shown for the menu." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuLabelText = { "MenuLabelText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPickerWidget, MenuLabelText), METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuLabelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuLabelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuToolTipText_MetaData[] = {
		{ "Category", "AssetPicker" },
		{ "Comment", "/** The tooltip that should be shown when the menu is hovered over. */" },
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
		{ "ToolTip", "The tooltip that should be shown when the menu is hovered over." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuToolTipText = { "MenuToolTipText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPickerWidget, MenuToolTipText), METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuToolTipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuToolTipText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_CurrentAssetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Widgets/AssetPickerWidget/AssetPickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_CurrentAssetPtr = { "CurrentAssetPtr", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetPickerWidget, CurrentAssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_CurrentAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_CurrentAssetPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetPickerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_OnAssetSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_AllowedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bAllowClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_bOpenSubMenuOnClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuLabelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_MenuToolTipText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetPickerWidget_Statics::NewProp_CurrentAssetPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetPickerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetPickerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetPickerWidget_Statics::ClassParams = {
		&UAssetPickerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetPickerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetPickerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPickerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetPickerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetPickerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetPickerWidget, 3828853807);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UAssetPickerWidget>()
	{
		return UAssetPickerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetPickerWidget(Z_Construct_UClass_UAssetPickerWidget, &UAssetPickerWidget::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UAssetPickerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetPickerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

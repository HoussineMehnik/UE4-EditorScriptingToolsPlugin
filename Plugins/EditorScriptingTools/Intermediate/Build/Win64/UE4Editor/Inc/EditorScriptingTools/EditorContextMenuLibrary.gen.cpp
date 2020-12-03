// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/EditorContextMenu/EditorContextMenuLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorContextMenuLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorContextMenuLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorContextMenuLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditorContextMenuLibrary::execDismissContextMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorContextMenuLibrary::DismissContextMenus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorContextMenuLibrary::execCreateContextMenu)
	{
		P_GET_OBJECT(UClass,Z_Param_MenuWidgetClass);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserWidget**)Z_Param__Result=UEditorContextMenuLibrary::CreateContextMenu(Z_Param_MenuWidgetClass,Z_Param_Out_bIsValid);
		P_NATIVE_END;
	}
	void UEditorContextMenuLibrary::StaticRegisterNativesUEditorContextMenuLibrary()
	{
		UClass* Class = UEditorContextMenuLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateContextMenu", &UEditorContextMenuLibrary::execCreateContextMenu },
			{ "DismissContextMenus", &UEditorContextMenuLibrary::execDismissContextMenus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics
	{
		struct EditorContextMenuLibrary_eventCreateContextMenu_Parms
		{
			TSubclassOf<UEditorUserWidget>  MenuWidgetClass;
			bool bIsValid;
			UEditorUserWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MenuWidgetClass;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_MenuWidgetClass = { "MenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorContextMenuLibrary_eventCreateContextMenu_Parms, MenuWidgetClass), Z_Construct_UClass_UEditorUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((EditorContextMenuLibrary_eventCreateContextMenu_Parms*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorContextMenuLibrary_eventCreateContextMenu_Parms), &Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorContextMenuLibrary_eventCreateContextMenu_Parms, ReturnValue), Z_Construct_UClass_UEditorUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_MenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Context Menu" },
		{ "Comment", "/** Creates a new Editor Context Menu at cursor location. */" },
		{ "DeterminesOutputType", "MenuWidgetClass" },
		{ "DisplayName", "Push Context Menu" },
		{ "Keywords", "push create add context menu" },
		{ "ModuleRelativePath", "Private/EditorContextMenu/EditorContextMenuLibrary.h" },
		{ "ToolTip", "Creates a new Editor Context Menu at cursor location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorContextMenuLibrary, nullptr, "CreateContextMenu", nullptr, nullptr, sizeof(EditorContextMenuLibrary_eventCreateContextMenu_Parms), Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Context Menu" },
		{ "Comment", "/** Dismisses all open menus */" },
		{ "DisplayName", "Dismiss Context Menus" },
		{ "Keywords", "dismiss remove destroy context menu" },
		{ "ModuleRelativePath", "Private/EditorContextMenu/EditorContextMenuLibrary.h" },
		{ "ToolTip", "Dismisses all open menus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorContextMenuLibrary, nullptr, "DismissContextMenus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorContextMenuLibrary_NoRegister()
	{
		return UEditorContextMenuLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorContextMenuLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorContextMenuLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorContextMenuLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorContextMenuLibrary_CreateContextMenu, "CreateContextMenu" }, // 3648474419
		{ &Z_Construct_UFunction_UEditorContextMenuLibrary_DismissContextMenus, "DismissContextMenus" }, // 724498895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorContextMenuLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorContextMenu/EditorContextMenuLibrary.h" },
		{ "ModuleRelativePath", "Private/EditorContextMenu/EditorContextMenuLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorContextMenuLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorContextMenuLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorContextMenuLibrary_Statics::ClassParams = {
		&UEditorContextMenuLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorContextMenuLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorContextMenuLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorContextMenuLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorContextMenuLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorContextMenuLibrary, 2772204271);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorContextMenuLibrary>()
	{
		return UEditorContextMenuLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorContextMenuLibrary(Z_Construct_UClass_UEditorContextMenuLibrary, &UEditorContextMenuLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorContextMenuLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorContextMenuLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

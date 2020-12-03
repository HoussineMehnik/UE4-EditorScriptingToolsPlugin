// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUserDefinedActionsBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorUserDefinedActions_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditorUserDefinedActionsBlueprintLibrary::execGetActiveEditorActionsAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUserDefinedActions**)Z_Param__Result=UEditorUserDefinedActionsBlueprintLibrary::GetActiveEditorActionsAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedActionsBlueprintLibrary::execUnregisterEditorActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorUserDefinedActionsBlueprintLibrary::UnregisterEditorActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUserDefinedActionsBlueprintLibrary::execRegisterEditorActions)
	{
		P_GET_OBJECT(UEditorUserDefinedActions,Z_Param_ActionsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorUserDefinedActionsBlueprintLibrary::RegisterEditorActions(Z_Param_ActionsAsset);
		P_NATIVE_END;
	}
	void UEditorUserDefinedActionsBlueprintLibrary::StaticRegisterNativesUEditorUserDefinedActionsBlueprintLibrary()
	{
		UClass* Class = UEditorUserDefinedActionsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveEditorActionsAsset", &UEditorUserDefinedActionsBlueprintLibrary::execGetActiveEditorActionsAsset },
			{ "RegisterEditorActions", &UEditorUserDefinedActionsBlueprintLibrary::execRegisterEditorActions },
			{ "UnregisterEditorActions", &UEditorUserDefinedActionsBlueprintLibrary::execUnregisterEditorActions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics
	{
		struct EditorUserDefinedActionsBlueprintLibrary_eventGetActiveEditorActionsAsset_Parms
		{
			UEditorUserDefinedActions* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedActionsBlueprintLibrary_eventGetActiveEditorActionsAsset_Parms, ReturnValue), Z_Construct_UClass_UEditorUserDefinedActions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Actions" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary, nullptr, "GetActiveEditorActionsAsset", nullptr, nullptr, sizeof(EditorUserDefinedActionsBlueprintLibrary_eventGetActiveEditorActionsAsset_Parms), Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics
	{
		struct EditorUserDefinedActionsBlueprintLibrary_eventRegisterEditorActions_Parms
		{
			UEditorUserDefinedActions* ActionsAsset;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionsAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ActionsAsset = { "ActionsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorUserDefinedActionsBlueprintLibrary_eventRegisterEditorActions_Parms, ActionsAsset), Z_Construct_UClass_UEditorUserDefinedActions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedActionsBlueprintLibrary_eventRegisterEditorActions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedActionsBlueprintLibrary_eventRegisterEditorActions_Parms), &Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ActionsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Actions" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary, nullptr, "RegisterEditorActions", nullptr, nullptr, sizeof(EditorUserDefinedActionsBlueprintLibrary_eventRegisterEditorActions_Parms), Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics
	{
		struct EditorUserDefinedActionsBlueprintLibrary_eventUnregisterEditorActions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUserDefinedActionsBlueprintLibrary_eventUnregisterEditorActions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorUserDefinedActionsBlueprintLibrary_eventUnregisterEditorActions_Parms), &Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor User Defined Actions" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary, nullptr, "UnregisterEditorActions", nullptr, nullptr, sizeof(EditorUserDefinedActionsBlueprintLibrary_eventUnregisterEditorActions_Parms), Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_NoRegister()
	{
		return UEditorUserDefinedActionsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_GetActiveEditorActionsAsset, "GetActiveEditorActionsAsset" }, // 1621648885
		{ &Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_RegisterEditorActions, "RegisterEditorActions" }, // 1703013033
		{ &Z_Construct_UFunction_UEditorUserDefinedActionsBlueprintLibrary_UnregisterEditorActions, "UnregisterEditorActions" }, // 547865911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorUserDefinedActionsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUserDefinedActionsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::ClassParams = {
		&UEditorUserDefinedActionsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorUserDefinedActionsBlueprintLibrary, 3403114439);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorUserDefinedActionsBlueprintLibrary>()
	{
		return UEditorUserDefinedActionsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorUserDefinedActionsBlueprintLibrary(Z_Construct_UClass_UEditorUserDefinedActionsBlueprintLibrary, &UEditorUserDefinedActionsBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorUserDefinedActionsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUserDefinedActionsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

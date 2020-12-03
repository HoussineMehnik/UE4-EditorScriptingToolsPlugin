// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorMiscBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorMiscBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorMiscBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UEditorMiscBlueprintLibrary::execBeginAssetDragDrop)
	{
		P_GET_OBJECT(UObject,Z_Param_DraggedAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=UEditorMiscBlueprintLibrary::BeginAssetDragDrop(Z_Param_DraggedAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorMiscBlueprintLibrary::execBeginAssetsDragDrop)
	{
		P_GET_TARRAY(UObject*,Z_Param_DraggedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=UEditorMiscBlueprintLibrary::BeginAssetsDragDrop(Z_Param_DraggedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorMiscBlueprintLibrary::execBeginClassDragDrop)
	{
		P_GET_OBJECT(UClass,Z_Param_DraggedClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=UEditorMiscBlueprintLibrary::BeginClassDragDrop(Z_Param_DraggedClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorMiscBlueprintLibrary::execFindIconBrushForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UEditorMiscBlueprintLibrary::FindIconBrushForClass(Z_Param_Class);
		P_NATIVE_END;
	}
	void UEditorMiscBlueprintLibrary::StaticRegisterNativesUEditorMiscBlueprintLibrary()
	{
		UClass* Class = UEditorMiscBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginAssetDragDrop", &UEditorMiscBlueprintLibrary::execBeginAssetDragDrop },
			{ "BeginAssetsDragDrop", &UEditorMiscBlueprintLibrary::execBeginAssetsDragDrop },
			{ "BeginClassDragDrop", &UEditorMiscBlueprintLibrary::execBeginClassDragDrop },
			{ "FindIconBrushForClass", &UEditorMiscBlueprintLibrary::execFindIconBrushForClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics
	{
		struct EditorMiscBlueprintLibrary_eventBeginAssetDragDrop_Parms
		{
			UObject* DraggedAsset;
			FEventReply ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DraggedAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::NewProp_DraggedAsset = { "DraggedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginAssetDragDrop_Parms, DraggedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginAssetDragDrop_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::NewProp_DraggedAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | UI" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMiscBlueprintLibrary, nullptr, "BeginAssetDragDrop", nullptr, nullptr, sizeof(EditorMiscBlueprintLibrary_eventBeginAssetDragDrop_Parms), Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics
	{
		struct EditorMiscBlueprintLibrary_eventBeginAssetsDragDrop_Parms
		{
			TArray<UObject*> DraggedAssets;
			FEventReply ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DraggedAssets_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DraggedAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_DraggedAssets_Inner = { "DraggedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_DraggedAssets = { "DraggedAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginAssetsDragDrop_Parms, DraggedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginAssetsDragDrop_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_DraggedAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_DraggedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | UI" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMiscBlueprintLibrary, nullptr, "BeginAssetsDragDrop", nullptr, nullptr, sizeof(EditorMiscBlueprintLibrary_eventBeginAssetsDragDrop_Parms), Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics
	{
		struct EditorMiscBlueprintLibrary_eventBeginClassDragDrop_Parms
		{
			TSubclassOf<UObject>  DraggedClass;
			FEventReply ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DraggedClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::NewProp_DraggedClass = { "DraggedClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginClassDragDrop_Parms, DraggedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventBeginClassDragDrop_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::NewProp_DraggedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | UI" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMiscBlueprintLibrary, nullptr, "BeginClassDragDrop", nullptr, nullptr, sizeof(EditorMiscBlueprintLibrary_eventBeginClassDragDrop_Parms), Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics
	{
		struct EditorMiscBlueprintLibrary_eventFindIconBrushForClass_Parms
		{
			TSubclassOf<UObject>  Class;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventFindIconBrushForClass_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMiscBlueprintLibrary_eventFindIconBrushForClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | UI" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMiscBlueprintLibrary, nullptr, "FindIconBrushForClass", nullptr, nullptr, sizeof(EditorMiscBlueprintLibrary_eventFindIconBrushForClass_Parms), Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorMiscBlueprintLibrary_NoRegister()
	{
		return UEditorMiscBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetDragDrop, "BeginAssetDragDrop" }, // 3360161511
		{ &Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginAssetsDragDrop, "BeginAssetsDragDrop" }, // 2066820383
		{ &Z_Construct_UFunction_UEditorMiscBlueprintLibrary_BeginClassDragDrop, "BeginClassDragDrop" }, // 1761459969
		{ &Z_Construct_UFunction_UEditorMiscBlueprintLibrary_FindIconBrushForClass, "FindIconBrushForClass" }, // 1021048160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMiscBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorMiscBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::ClassParams = {
		&UEditorMiscBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorMiscBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorMiscBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorMiscBlueprintLibrary, 368831583);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorMiscBlueprintLibrary>()
	{
		return UEditorMiscBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorMiscBlueprintLibrary(Z_Construct_UClass_UEditorMiscBlueprintLibrary, &UEditorMiscBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorMiscBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorMiscBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

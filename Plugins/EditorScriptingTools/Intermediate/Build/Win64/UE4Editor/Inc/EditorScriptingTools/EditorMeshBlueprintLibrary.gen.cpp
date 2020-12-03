// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/EditorMeshBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorMeshBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorMeshBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UEditorMeshBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UEditorMeshBlueprintLibrary::execResetWireframeColor)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorMeshBlueprintLibrary::ResetWireframeColor(Z_Param_StaticMeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorMeshBlueprintLibrary::execOverrideWireframeColor)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComp);
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorMeshBlueprintLibrary::OverrideWireframeColor(Z_Param_StaticMeshComp,Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorMeshBlueprintLibrary::execConvertProceduralMeshToStaticMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
		P_GET_OBJECT_REF(UStaticMesh,Z_Param_Out_OutStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorMeshBlueprintLibrary::ConvertProceduralMeshToStaticMesh(Z_Param_ProceduralMeshComponent,Z_Param_Out_OutStaticMesh);
		P_NATIVE_END;
	}
	void UEditorMeshBlueprintLibrary::StaticRegisterNativesUEditorMeshBlueprintLibrary()
	{
		UClass* Class = UEditorMeshBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertProceduralMeshToStaticMesh", &UEditorMeshBlueprintLibrary::execConvertProceduralMeshToStaticMesh },
			{ "OverrideWireframeColor", &UEditorMeshBlueprintLibrary::execOverrideWireframeColor },
			{ "ResetWireframeColor", &UEditorMeshBlueprintLibrary::execResetWireframeColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics
	{
		struct EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms
		{
			UProceduralMeshComponent* ProceduralMeshComponent;
			UStaticMesh* OutStaticMesh;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutStaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ProceduralMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ProceduralMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_OutStaticMesh = { "OutStaticMesh", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms, OutStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms), &Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ProceduralMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_OutStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Procedural Mesh" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMeshBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMeshBlueprintLibrary, nullptr, "ConvertProceduralMeshToStaticMesh", nullptr, nullptr, sizeof(EditorMeshBlueprintLibrary_eventConvertProceduralMeshToStaticMesh_Parms), Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics
	{
		struct EditorMeshBlueprintLibrary_eventOverrideWireframeColor_Parms
		{
			UStaticMeshComponent* StaticMeshComp;
			FColor NewColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMeshBlueprintLibrary_eventOverrideWireframeColor_Parms, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_StaticMeshComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMeshBlueprintLibrary_eventOverrideWireframeColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_StaticMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Procedural Mesh" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMeshBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMeshBlueprintLibrary, nullptr, "OverrideWireframeColor", nullptr, nullptr, sizeof(EditorMeshBlueprintLibrary_eventOverrideWireframeColor_Parms), Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics
	{
		struct EditorMeshBlueprintLibrary_eventResetWireframeColor_Parms
		{
			UStaticMeshComponent* StaticMeshComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorMeshBlueprintLibrary_eventResetWireframeColor_Parms, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::NewProp_StaticMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::NewProp_StaticMeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Procedural Mesh" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMeshBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorMeshBlueprintLibrary, nullptr, "ResetWireframeColor", nullptr, nullptr, sizeof(EditorMeshBlueprintLibrary_eventResetWireframeColor_Parms), Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorMeshBlueprintLibrary_NoRegister()
	{
		return UEditorMeshBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ConvertProceduralMeshToStaticMesh, "ConvertProceduralMeshToStaticMesh" }, // 2290202635
		{ &Z_Construct_UFunction_UEditorMeshBlueprintLibrary_OverrideWireframeColor, "OverrideWireframeColor" }, // 2679981616
		{ &Z_Construct_UFunction_UEditorMeshBlueprintLibrary_ResetWireframeColor, "ResetWireframeColor" }, // 4147441696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/EditorMeshBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/EditorMeshBlueprintLibrary.h" },
		{ "ScriptName", "EditorProceduralMeshLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorMeshBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::ClassParams = {
		&UEditorMeshBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorMeshBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorMeshBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorMeshBlueprintLibrary, 1677666484);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UEditorMeshBlueprintLibrary>()
	{
		return UEditorMeshBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorMeshBlueprintLibrary(Z_Construct_UClass_UEditorMeshBlueprintLibrary, &UEditorMeshBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UEditorMeshBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorMeshBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

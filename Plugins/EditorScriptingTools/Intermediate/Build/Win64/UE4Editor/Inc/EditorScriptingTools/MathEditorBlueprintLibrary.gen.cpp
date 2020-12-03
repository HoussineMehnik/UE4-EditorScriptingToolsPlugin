// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptingTools/Private/BlueprintLibrary/MathEditorBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathEditorBlueprintLibrary() {}
// Cross Module References
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UMathEditorBlueprintLibrary_NoRegister();
	EDITORSCRIPTINGTOOLS_API UClass* Z_Construct_UClass_UMathEditorBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingTools();
	EDITORSCRIPTINGTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionFrustumVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMathEditorBlueprintLibrary::execIntersectPoint)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_SelectionFrustum);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMathEditorBlueprintLibrary::IntersectPoint(Z_Param_Out_SelectionFrustum,Z_Param_Out_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathEditorBlueprintLibrary::execIntersectLineSegment)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_SelectionFrustum);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMathEditorBlueprintLibrary::IntersectLineSegment(Z_Param_Out_SelectionFrustum,Z_Param_Out_Start,Z_Param_Out_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathEditorBlueprintLibrary::execIntersectSphere)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_SelectionFrustum);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Radius);
		P_GET_UBOOL_REF(Z_Param_Out_bOutFullyContained);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMathEditorBlueprintLibrary::IntersectSphere(Z_Param_Out_SelectionFrustum,Z_Param_Out_Origin,Z_Param_Out_Radius,Z_Param_Out_bOutFullyContained);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathEditorBlueprintLibrary::execIntersectBox)
	{
		P_GET_STRUCT_REF(FSelectionFrustumVolume,Z_Param_Out_SelectionFrustum);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent);
		P_GET_UBOOL_REF(Z_Param_Out_bOutFullyContained);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMathEditorBlueprintLibrary::IntersectBox(Z_Param_Out_SelectionFrustum,Z_Param_Out_Origin,Z_Param_Out_Extent,Z_Param_Out_bOutFullyContained);
		P_NATIVE_END;
	}
	void UMathEditorBlueprintLibrary::StaticRegisterNativesUMathEditorBlueprintLibrary()
	{
		UClass* Class = UMathEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntersectBox", &UMathEditorBlueprintLibrary::execIntersectBox },
			{ "IntersectLineSegment", &UMathEditorBlueprintLibrary::execIntersectLineSegment },
			{ "IntersectPoint", &UMathEditorBlueprintLibrary::execIntersectPoint },
			{ "IntersectSphere", &UMathEditorBlueprintLibrary::execIntersectSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics
	{
		struct MathEditorBlueprintLibrary_eventIntersectBox_Parms
		{
			FSelectionFrustumVolume SelectionFrustum;
			FVector Origin;
			FVector Extent;
			bool bOutFullyContained;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bOutFullyContained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutFullyContained;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_SelectionFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_SelectionFrustum = { "SelectionFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectBox_Parms, SelectionFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_SelectionFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_SelectionFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectBox_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Extent_MetaData)) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_bOutFullyContained_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectBox_Parms*)Obj)->bOutFullyContained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_bOutFullyContained = { "bOutFullyContained", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectBox_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_bOutFullyContained_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectBox_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_SelectionFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_bOutFullyContained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Selection Frustum Volume" },
		{ "Comment", "/**\n\x09 * Intersection test with an axis-aligned box.\n\x09 * @param Volume -\n\x09 * @param Origin - Origin of the box.\n\x09 * @param Extent - Extent of the box along each axis.\n\x09 * @param bOutFullyContained - The box is definitely inside frustums and fully contained.\n\x09 * @returns true if this convex volume intersects the given translated box.\n\x09 */" },
		{ "DisplayName", "Intersect Box" },
		{ "Keywords", "intersect" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/MathEditorBlueprintLibrary.h" },
		{ "ToolTip", "Intersection test with an axis-aligned box.\n@param Volume -\n@param Origin - Origin of the box.\n@param Extent - Extent of the box along each axis.\n@param bOutFullyContained - The box is definitely inside frustums and fully contained.\n@returns true if this convex volume intersects the given translated box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathEditorBlueprintLibrary, nullptr, "IntersectBox", nullptr, nullptr, sizeof(MathEditorBlueprintLibrary_eventIntersectBox_Parms), Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics
	{
		struct MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms
		{
			FSelectionFrustumVolume SelectionFrustum;
			FVector Start;
			FVector End;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_SelectionFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_SelectionFrustum = { "SelectionFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms, SelectionFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_SelectionFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_SelectionFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_End_MetaData)) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_SelectionFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Selection Frustum Volume" },
		{ "DisplayName", "Intersect Line" },
		{ "Keywords", "intersect" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/MathEditorBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathEditorBlueprintLibrary, nullptr, "IntersectLineSegment", nullptr, nullptr, sizeof(MathEditorBlueprintLibrary_eventIntersectLineSegment_Parms), Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics
	{
		struct MathEditorBlueprintLibrary_eventIntersectPoint_Parms
		{
			FSelectionFrustumVolume SelectionFrustum;
			FVector Point;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_SelectionFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_SelectionFrustum = { "SelectionFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectPoint_Parms, SelectionFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_SelectionFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_SelectionFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_Point_MetaData)) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectPoint_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_SelectionFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Selection Frustum Volume" },
		{ "Comment", "/** Determines whether the given point lies inside the convex volume */" },
		{ "DisplayName", "Intersect Point" },
		{ "Keywords", "intersect" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/MathEditorBlueprintLibrary.h" },
		{ "ToolTip", "Determines whether the given point lies inside the convex volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathEditorBlueprintLibrary, nullptr, "IntersectPoint", nullptr, nullptr, sizeof(MathEditorBlueprintLibrary_eventIntersectPoint_Parms), Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics
	{
		struct MathEditorBlueprintLibrary_eventIntersectSphere_Parms
		{
			FSelectionFrustumVolume SelectionFrustum;
			FVector Origin;
			float Radius;
			bool bOutFullyContained;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bOutFullyContained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutFullyContained;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_SelectionFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_SelectionFrustum = { "SelectionFrustum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectSphere_Parms, SelectionFrustum), Z_Construct_UScriptStruct_FSelectionFrustumVolume, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_SelectionFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_SelectionFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectSphere_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathEditorBlueprintLibrary_eventIntersectSphere_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Radius_MetaData)) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_bOutFullyContained_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectSphere_Parms*)Obj)->bOutFullyContained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_bOutFullyContained = { "bOutFullyContained", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectSphere_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_bOutFullyContained_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MathEditorBlueprintLibrary_eventIntersectSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathEditorBlueprintLibrary_eventIntersectSphere_Parms), &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_SelectionFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_bOutFullyContained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Selection Frustum Volume" },
		{ "DisplayName", "Intersect Sphere" },
		{ "Keywords", "intersect" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/MathEditorBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathEditorBlueprintLibrary, nullptr, "IntersectSphere", nullptr, nullptr, sizeof(MathEditorBlueprintLibrary_eventIntersectSphere_Parms), Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMathEditorBlueprintLibrary_NoRegister()
	{
		return UMathEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectBox, "IntersectBox" }, // 2108311439
		{ &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectLineSegment, "IntersectLineSegment" }, // 830773194
		{ &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectPoint, "IntersectPoint" }, // 510101015
		{ &Z_Construct_UFunction_UMathEditorBlueprintLibrary_IntersectSphere, "IntersectSphere" }, // 2730430811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintLibrary/MathEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/BlueprintLibrary/MathEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathEditorBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::ClassParams = {
		&UMathEditorBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMathEditorBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMathEditorBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMathEditorBlueprintLibrary, 2018106182);
	template<> EDITORSCRIPTINGTOOLS_API UClass* StaticClass<UMathEditorBlueprintLibrary>()
	{
		return UMathEditorBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMathEditorBlueprintLibrary(Z_Construct_UClass_UMathEditorBlueprintLibrary, &UMathEditorBlueprintLibrary::StaticClass, TEXT("/Script/EditorScriptingTools"), TEXT("UMathEditorBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathEditorBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

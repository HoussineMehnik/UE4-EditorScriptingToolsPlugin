//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"

class UObject;
class FProperty;

namespace EditorBlueprintUtils
{

	/** Options for CopyPropertiesToCDO */
	enum EObjectPropertiesCopyOptions : int32
	{
		/** Default copy options */
		Default = 0,

		/** Set this option to preview the changes and not actually copy anything.  This will count the number of properties that would be copied. */
		PreviewOnly = 1 << 0,

		/** Call PostEditChangeProperty for each modified property */
		CallPostEditChangeProperty = 1 << 1,

		/** Copy only Edit and Interp properties.  Otherwise we copy all properties by default */
		OnlyCopyEditOrInterpProperties = 1 << 2,

		/** Filters out Blueprint Read-only properties */
		FilterBlueprintReadOnly = 1 << 3,
	};

	/** Copy options structure for CopyPropertiesToCDO */
	struct FObjectPropertiesCopyOptions
	{
		/** Implicit construction for an options enumeration */
		FObjectPropertiesCopyOptions(const EObjectPropertiesCopyOptions InFlags) : Flags(InFlags) {}

		/** Check whether we can copy the specified property */
		bool CanCopyProperty(FProperty& Property, UObject& Object) const
		{
			return !PropertyFilter || PropertyFilter(Property, Object);
		}

		/** User-specified flags for the copy */
		EObjectPropertiesCopyOptions Flags;

		/** User-specified custom property filter predicate */
		TFunction<bool(FProperty&, UObject&)> PropertyFilter;
	};

	/** Copy modified properties from the specified object instance back to its CDO */
	int32 CopyPropertiesToCDO(UObject* InInstance, const FObjectPropertiesCopyOptions& Options = FObjectPropertiesCopyOptions(EObjectPropertiesCopyOptions::Default), bool bAutoCompile = true);

	bool CompileBlueprint(UObject* InObject);

	bool IsBlueprintDirty(UObject* InObject);

}
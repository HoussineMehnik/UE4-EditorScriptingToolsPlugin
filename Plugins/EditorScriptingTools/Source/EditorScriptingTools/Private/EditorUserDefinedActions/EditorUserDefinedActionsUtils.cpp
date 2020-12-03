//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "EditorUserDefinedActionsUtils.h"
#include "EditorUserDefinedActions.h"
#include "Kismet2/EnumEditorUtils.h"
#include "UObject/UObjectHash.h"
#include "UObject/UObjectIterator.h"
#include "UObject/UnrealType.h"
#include "UObject/EnumProperty.h"
#include "EdGraph/EdGraphNode.h"
#include "Engine/Blueprint.h"
#include "EdGraph/EdGraph.h"
#include "EdGraphSchema_K2.h"
#include "K2Node.h"
#include "K2Node_Variable.h"
#include "NodeDependingOnEnumInterface.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Internationalization/TextNamespaceUtil.h"
#include "Internationalization/TextPackageNamespaceUtil.h"
#include "ScopedTransaction.h"
#include "UObject/PropertyIterator.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FArchiveEnumeratorResolver

class FArchiveEnumeratorResolver : public FArchiveUObject
{
public:
	const UEnum* Enum;
	const TArray<TPair<FName, int64>>& OldNames;

	FArchiveEnumeratorResolver(const UEditorUserDefinedActions* InEnum, const TArray<TPair<FName, int64>>& InOldNames)
		: FArchiveUObject(), Enum(InEnum), OldNames(InOldNames)
	{
	}

	virtual bool UseToResolveEnumerators() const override
	{
		return true;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FEditorUserDefinedActionsUtils

void FEditorUserDefinedActionsUtils::CopyEnumeratorsWithoutMax(const UEditorUserDefinedActions* Enum, TArray<TPair<FName, int64>>& OutEnumNames)
{
	if (Enum == nullptr)
	{
		return;
	}

	const int32 EnumeratorsToCopy = Enum->NumEnums() - 1;
	for (int32 Index = 0; Index < EnumeratorsToCopy; Index++)
	{
		OutEnumNames.Emplace(Enum->GetNameByIndex(Index), Enum->GetValueByIndex(Index));
	}
}

void FEditorUserDefinedActionsUtils::BroadcastChanges(const UEditorUserDefinedActions* Enum, const TArray<TPair<FName, int64>>& OldNames, bool bResolveData /*= true*/)
{
	check(NULL != Enum);
	if (bResolveData)
	{
		FArchiveEnumeratorResolver EnumeratorResolver(Enum, OldNames);

		TArray<UClass*> ClassesToCheck;
		for (TPropertyIterator<FByteProperty> It; It; ++It)
		{
			const FByteProperty* ByteProperty = *It;
			if (ByteProperty && (Enum == ByteProperty->GetIntPropertyEnum()))
			{
				UClass* OwnerClass = ByteProperty->GetOwnerClass();
				if (OwnerClass)
				{
					ClassesToCheck.Add(OwnerClass);
				}
			}
		}
		for (TPropertyIterator<FEnumProperty> It; It; ++It)
		{
			const FEnumProperty* EnumProperty = *It;
			if (EnumProperty && (Enum == EnumProperty->GetEnum()))
			{
				UClass* OwnerClass = EnumProperty->GetOwnerClass();
				if (OwnerClass)
				{
					ClassesToCheck.Add(OwnerClass);
				}
			}
		}

		for (FObjectIterator ObjIter; ObjIter; ++ObjIter)
		{
			for (UClass* Class : ClassesToCheck)
			{
				if (ObjIter->IsA(Class))
				{
					ObjIter->Serialize(EnumeratorResolver);
					break;
				}
			}
		}
	}

	struct FNodeValidatorHelper
	{
		static bool IsValid(UK2Node* Node)
		{
			return Node
				&& (NULL != Cast<UEdGraph>(Node->GetOuter()))
				&& !Node->HasAnyFlags(RF_Transient) && !Node->IsPendingKill();
		}
	};

	TSet<UBlueprint*> BlueprintsToRefresh;

	{
		//CUSTOM NODES DEPENTENT ON ENUM

		for (TObjectIterator<UK2Node> It(RF_Transient); It; ++It)
		{
			UK2Node* Node = *It;
			INodeDependingOnEnumInterface* NodeDependingOnEnum = Cast<INodeDependingOnEnumInterface>(Node);
			if (FNodeValidatorHelper::IsValid(Node) && NodeDependingOnEnum && (Enum == NodeDependingOnEnum->GetEnum()))
			{
				if (Node->HasValidBlueprint())
				{
					if (NodeDependingOnEnum->ShouldBeReconstructedAfterEnumChanged())
					{
						Node->ReconstructNode();
					}
					BlueprintsToRefresh.Add(Node->GetBlueprint());
				}
			}
		}
	}

	for (TObjectIterator<UEdGraphNode> It(RF_Transient); It; ++It)
	{
		for (UEdGraphPin* Pin : It->Pins)
		{
			if (Pin && (Pin->PinType.PinSubCategory != UEdGraphSchema_K2::PSC_Bitmask) && (Enum == Pin->PinType.PinSubCategoryObject.Get()) && (EEdGraphPinDirection::EGPD_Input == Pin->Direction))
			{
				UK2Node* Node = Cast<UK2Node>(Pin->GetOuter());
				if (FNodeValidatorHelper::IsValid(Node))
				{
					if (Node->HasValidBlueprint())
					{
						UBlueprint* Blueprint = Node->GetBlueprint();
						if (INDEX_NONE == Enum->GetIndexByNameString(Pin->DefaultValue))
						{
							Pin->Modify();
							if (Blueprint->BlueprintType == BPTYPE_Interface)
							{
								Pin->DefaultValue = Enum->GetNameStringByIndex(0);
							}
							else
							{
								Pin->DefaultValue = InvalidName();
							}
							Node->PinDefaultValueChanged(Pin);
							BlueprintsToRefresh.Add(Blueprint);
						}
					}
				}
			}
		}
	}

	// Modify any properties that are using the enum as a bitflags type for bitmask values inside a Blueprint class.
	for (TPropertyIterator<FIntProperty> PropertyIter; PropertyIter; ++PropertyIter)
	{
		const FIntProperty* IntProperty = *PropertyIter;
		if (IntProperty && IntProperty->HasMetaData(*FBlueprintMetadata::MD_Bitmask.ToString()))
		{
			UClass* OwnerClass = IntProperty->GetOwnerClass();
			if (OwnerClass)
			{
				// Note: We only need to consider the skeleton class here.
				UBlueprint* Blueprint = Cast<UBlueprint>(OwnerClass->ClassGeneratedBy);
				if (Blueprint && OwnerClass == Blueprint->SkeletonGeneratedClass)
				{
					const FString& BitmaskEnumName = IntProperty->GetMetaData(FBlueprintMetadata::MD_BitmaskEnum);
					if (BitmaskEnumName == Enum->GetName() && !Enum->HasMetaData(*FBlueprintMetadata::MD_Bitflags.ToString()))
					{
						FName VarName = IntProperty->GetFName();

						// This will remove the metadata key from both the skeleton & full class.
						FBlueprintEditorUtils::RemoveBlueprintVariableMetaData(Blueprint, VarName, nullptr, FBlueprintMetadata::MD_BitmaskEnum);

						// Need to reassign the property since the skeleton class will have been regenerated at this point.
						IntProperty = FindFieldChecked<FIntProperty>(Blueprint->SkeletonGeneratedClass, VarName);

						// Reconstruct any nodes that reference the variable that was just modified.
						for (TObjectIterator<UK2Node_Variable> VarNodeIt; VarNodeIt; ++VarNodeIt)
						{
							UK2Node_Variable* VarNode = *VarNodeIt;
							if (VarNode && VarNode->GetPropertyForVariable() == IntProperty)
							{
								VarNode->ReconstructNode();

								if (VarNode->HasValidBlueprint())
								{
									BlueprintsToRefresh.Add(VarNode->GetBlueprint());
								}
							}
						}

						BlueprintsToRefresh.Add(Blueprint);
					}
				}
			}
		}
	}

	for (auto It = BlueprintsToRefresh.CreateIterator(); It; ++It)
	{
		FBlueprintEditorUtils::MarkBlueprintAsModified(*It);
		(*It)->BroadcastChanged();
	}

	FEnumEditorUtils::FEnumEditorManager::Get().PostChange(Enum, FEnumEditorUtils::EEnumEditorChangeInfo::Changed);
}

void FEditorUserDefinedActionsUtils::PrepareForChange(UEditorUserDefinedActions* Enum)
{
	FEnumEditorUtils::FEnumEditorManager::Get().PreChange(Enum, FEnumEditorUtils::EEnumEditorChangeInfo::Changed);
	Enum->Modify();
}

FString FEditorUserDefinedActionsUtils::GenerateNewActionEnumeratorName(UEditorUserDefinedActions* Enum)
{
	FString EnumNameString;
	do
	{
		EnumNameString = FString::Printf(TEXT("NewCommand%u"), Enum->UniqueNameIndex);
		++Enum->UniqueNameIndex;
	} while (!FEnumEditorUtils::IsProperNameForUserDefinedEnumerator(Enum, EnumNameString));
	return EnumNameString;
}

void FEditorUserDefinedActionsUtils::AddNewActionEnumerator(UEditorUserDefinedActions* Enum)
{
	if (!Enum)
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("EnumEditor", "AddNewEnumerator", "Add Enumerator"));

	PrepareForChange(Enum);

	TArray<TPair<FName, int64>> OldNames, Names;
	CopyEnumeratorsWithoutMax(Enum, OldNames);
	Names = OldNames;

	FString EnumNameString = GenerateNewActionEnumeratorName(Enum);
	const FString FullNameStr = Enum->GenerateFullEnumName(*EnumNameString);
	Names.Emplace(*FullNameStr, Enum->GetMaxEnumValue());

	// Clean up enum values.
	for (int32 i = 0; i < Names.Num(); ++i)
	{
		Names[i].Value = i;
	}
	const UEnum::ECppForm EnumType = Enum->GetCppForm();
	Enum->SetEnums(Names, EnumType);
	FEnumEditorUtils::EnsureAllDisplayNamesExist(Enum);

	Enum->DefaultChordList.Add(UEditorUserDefinedActions::DefaultChord);
	Enum->AlternateChordList.Add(UEditorUserDefinedActions::DefaultChord);
	Enum->RepeatStatesList.Add(false);

	BroadcastChanges(Enum, OldNames);

	Enum->MarkPackageDirty();
}

void FEditorUserDefinedActionsUtils::RemoveActionEnumerator(UEditorUserDefinedActions* Enum, int32 EnumeratorIndex)
{
	if (!(Enum && (Enum->GetNameByIndex(EnumeratorIndex) != NAME_None)))
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("EnumEditor", "RemoveEnumerator", "Remove Enumerator"));

	PrepareForChange(Enum);

	TArray<TPair<FName, int64>> OldNames, Names;
	CopyEnumeratorsWithoutMax(Enum, OldNames);
	Names = OldNames;

	Names.RemoveAt(EnumeratorIndex);

	// Clean up enum values.
	for (int32 i = 0; i < Names.Num(); ++i)
	{
		Names[i].Value = i;
	}
	const UEnum::ECppForm EnumType = Enum->GetCppForm();
	Enum->SetEnums(Names, EnumType);
	FEnumEditorUtils::EnsureAllDisplayNamesExist(Enum);

	Enum->DefaultChordList.RemoveAt(EnumeratorIndex);
	Enum->AlternateChordList.RemoveAt(EnumeratorIndex);
	Enum->RepeatStatesList.RemoveAt(EnumeratorIndex);

	BroadcastChanges(Enum, OldNames);
	Enum->MarkPackageDirty();
}

void FEditorUserDefinedActionsUtils::ClearActionEnumerators(UEditorUserDefinedActions* Enum)
{
	if (!(Enum && (Enum->NumEnums() > 0)))
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("ActionsEditor", "RemoveAllActions", "Remove All Actions"));

	PrepareForChange(Enum);

	TArray<TPair<FName, int64>> OldNames, Names;
	CopyEnumeratorsWithoutMax(Enum, OldNames);
	Names.Empty();

	const UEnum::ECppForm EnumType = Enum->GetCppForm();
	Enum->SetEnums(Names, EnumType);
	FEnumEditorUtils::EnsureAllDisplayNamesExist(Enum);

	Enum->DefaultChordList.Empty();
	Enum->AlternateChordList.Empty();
	Enum->RepeatStatesList.Empty();

	BroadcastChanges(Enum, OldNames);
	Enum->MarkPackageDirty();
}

void FEditorUserDefinedActionsUtils::MoveActionEnumerator(UEditorUserDefinedActions* Enum, int32 EnumeratorIndex, bool bDirectionUp)
{
	if (!(Enum && (Enum->GetNameByIndex(EnumeratorIndex) != NAME_None)))
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("ActionsEditor", "MoveEnumeratorInUserDefinedActions", "Reorder Action"));

	PrepareForChange(Enum);

	TArray<TPair<FName, int64>> OldNames, Names;
	CopyEnumeratorsWithoutMax(Enum, OldNames);
	Names = OldNames;

	const bool bIsLast = ((Names.Num() - 1) == EnumeratorIndex);
	const bool bIsFirst = (0 == EnumeratorIndex);

	if (bDirectionUp && !bIsFirst)
	{
		Names.Swap(EnumeratorIndex, EnumeratorIndex - 1);
		Enum->DefaultChordList.Swap(EnumeratorIndex, EnumeratorIndex - 1);
		Enum->AlternateChordList.Swap(EnumeratorIndex, EnumeratorIndex - 1);
		Enum->RepeatStatesList.Swap(EnumeratorIndex, EnumeratorIndex - 1);
	}
	else if (!bDirectionUp && !bIsLast)
	{
		Names.Swap(EnumeratorIndex, EnumeratorIndex + 1);
		Enum->DefaultChordList.Swap(EnumeratorIndex, EnumeratorIndex + 1);
		Enum->AlternateChordList.Swap(EnumeratorIndex, EnumeratorIndex + 1);
		Enum->RepeatStatesList.Swap(EnumeratorIndex, EnumeratorIndex + 1);
	}

	// Clean up enum values.
	for (int32 i = 0; i < Names.Num(); ++i)
	{
		Names[i].Value = i;
	}
	const UEnum::ECppForm EnumType = Enum->GetCppForm();
	Enum->SetEnums(Names, EnumType);
	FEnumEditorUtils::EnsureAllDisplayNamesExist(Enum);
	BroadcastChanges(Enum, OldNames);

	Enum->MarkPackageDirty();
}

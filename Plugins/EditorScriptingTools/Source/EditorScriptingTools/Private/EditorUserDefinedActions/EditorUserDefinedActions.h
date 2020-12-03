//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#pragma once


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Class.h"
#include "Engine/UserDefinedEnum.h"
#include "Framework/Commands/InputChord.h"
#include "Framework/Commands/UICommandInfo.h"
#include "InputCoreTypes.h"
#include <IEditorScriptingUtilityAssetInterface.h>
#include "EditorUserDefinedActions.generated.h"


USTRUCT(BlueprintType)
struct FUserDefinedEditorActionInputChords
{
	GENERATED_USTRUCT_BODY()

		FUserDefinedEditorActionInputChords()
		: PrimaryInputChord(EKeys::Invalid)
		, SecondaryInputChord(EKeys::Invalid)
	{

	}

	FUserDefinedEditorActionInputChords(const FInputChord& InPrimaryInputChord, const FInputChord& InSecondaryInputChord)
		: PrimaryInputChord(InPrimaryInputChord)
		, SecondaryInputChord(InSecondaryInputChord)
	{

	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputChord)
		FInputChord PrimaryInputChord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputChord)
		FInputChord SecondaryInputChord;
};

UENUM(BlueprintType)
enum class EActionCommandHockType : uint8
{
	MainFrame,
	LevelEditor
};


UCLASS(BlueprintType, hideCategories = Description)
class  UEditorUserDefinedActions : public UUserDefinedEnum , public IEditorScriptingUtilityAssetInterface
{
	GENERATED_BODY()

public:
	UEditorUserDefinedActions();

	/** Begin IEditorToolAssetInterface interface */
	virtual EEditorScriptingUtilityType GetUtilityType() const override { return EEditorScriptingUtilityType::UserDefinedActions; }
	virtual void OnRegisterDone();
	virtual void OnUnregisterDone();
	virtual FName GetUtilitySettingsCategoryName() const override;
	virtual void GetUneditablePropertiesWhenRegistered(TArray<FName>& OutProperties) const override;
	virtual FEditorScriptingUtilityRegistered& OnEditorScriptingUtilityRegistered() const final { return OnEditorUserDefinedActionsRegisteredDelegate; }
	/** End IEditorToolAssetInterface interface */

	FInputChord* GetChordPtrFromInputChord(const FInputChord& InChord);
	int32 GetChordIndexFromInputChord(const FInputChord& InChord);
	int32 GetActionsNum() const;
	FInputChord& GetActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord);
	const FInputChord& GetActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord) const;
	const bool& IsActionRepeated(int32 InInputChord) const;
	FInputChord GetDefaultChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord) const;
	void RemoveActiveChord(const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord);
	void SetActiveChord(const FInputChord& NewChord, const EMultipleKeyBindingIndex InChordIndex, int32 InInputChord);

public:
	static const FInputChord DefaultChord;

	UPROPERTY()
		TArray<FInputChord> DefaultChordList;

	UPROPERTY()
		TArray <FInputChord> AlternateChordList;

	UPROPERTY()
		TArray<bool> RepeatStatesList;

public:

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Editor User Defined Actions")
		FUserDefinedEditorActionInputChords GetActionInputChords(uint8 ActionAsByte);

private:
	mutable FEditorScriptingUtilityRegistered OnEditorUserDefinedActionsRegisteredDelegate;
};

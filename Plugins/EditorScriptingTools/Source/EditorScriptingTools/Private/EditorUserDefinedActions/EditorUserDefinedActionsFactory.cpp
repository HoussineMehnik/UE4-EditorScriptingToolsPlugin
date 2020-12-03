//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "EditorUserDefinedActionsFactory.h"
#include "EditorUserDefinedActions.h"
#include "Kismet2/EnumEditorUtils.h"
#include "Misc/MessageDialog.h"
#include "Misc/FeedbackContext.h"

#define LOCTEXT_NAMESPACE "EditorUserDefinedActionsFactory"


UEditorUserDefinedActionsFactory::UEditorUserDefinedActionsFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UEditorUserDefinedActions::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UEditorUserDefinedActionsFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	ensure(UEditorUserDefinedActions::StaticClass() == Class);

	if (!FEnumEditorUtils::IsNameAvailebleForUserDefinedEnum(Name))
	{
		const FText Message = FText::Format(LOCTEXT("ActionsWithNameAlreadyExists", "Actions Asset '{0}' already exists. The name must be unique."), FText::FromName(Name));
		if (Warn)
		{
			Warn->Log(Message);
		}
		FMessageDialog::Open(EAppMsgType::Ok, Message);
		return nullptr;
	}

	UEnum* Enum = NewObject<UEditorUserDefinedActions>(InParent, Name, Flags);

	if (NULL != Enum)
	{
		TArray<TPair<FName, int64>> EmptyNames;
		Enum->SetEnums(EmptyNames, UEnum::ECppForm::Namespaced);
		Enum->SetMetaData(TEXT("BlueprintType"), TEXT("true"));
	}

	return Enum;
}

#undef LOCTEXT_NAMESPACE //"EditorUserDefinedActionsFactory"

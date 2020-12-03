//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Factories/Factory.h"
#include "Engine/Blueprint.h"
#include "EditorUserWidgetBlueprintFactory.generated.h"

UCLASS(HideCategories = Object, MinimalAPI)
class UEditorUserWidgetBlueprintFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

		// The type of blueprint that will be created
		UPROPERTY(EditAnywhere, Category = EditorUserWidgetBlueprintFactory)
		TEnumAsByte<enum EBlueprintType> BlueprintType;

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category = EditorUserWidgetBlueprintFactory, meta = (AllowAbstract = ""))
		TSubclassOf<class UUserWidget> ParentClass;

	//~ Begin UFactory Interface
	virtual bool ConfigureProperties() override;
	virtual bool ShouldShowInNewMenu() const override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	//~ Begin UFactory Interface	

	UClass* RootWidgetClass;
};

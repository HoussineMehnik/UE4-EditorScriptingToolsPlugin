//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "Factories/Factory.h"
#include "DetailCustomizationUtilityBlueprintFactory.generated.h"

UCLASS()
class UDetailCustomizationUtilityBlueprintFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category = BlueprintFactory, meta = (AllowAbstract = "", BlueprintBaseOnly = ""))
		TSubclassOf<UObject> ParentClass;

	// UFactory interface
	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool CanCreateNew() const override;
	// End of UFactory interface

};

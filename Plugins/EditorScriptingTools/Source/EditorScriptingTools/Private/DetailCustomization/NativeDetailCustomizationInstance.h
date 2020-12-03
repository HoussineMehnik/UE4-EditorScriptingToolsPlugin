//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "Templates/SubclassOf.h"
#include "DetailCustomizationTypes.h"

class SWidget;
class AActor;
class UBlueprint;
class UEditorUserWidget;
class IDetailCategoryBuilder;
class UDetailCustomizationInstance;
class UDetailCustomizationUtilityBlueprint;
class FNativeDetailCustomizationInstancesManager;

struct FPropertyChangedEvent;
struct FEditablePropertyInfo;
struct FCustomizedClassEntryInfo;
struct FDetailCategoryBuilderHandle;

enum class EDetailCategoryPriority : uint8;

class FNativeDetailCustomizationInstance : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeCustomizationInstance(UDetailCustomizationUtilityBlueprint* InDetailsBlueprint);

public:
	FNativeDetailCustomizationInstance(UDetailCustomizationUtilityBlueprint* InDetailsBlueprint);
	virtual ~FNativeDetailCustomizationInstance();

	//~ Begin IDetailCustomization interface
	virtual void CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder) override;
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	//~ End of IDetailCustomization interface

	void RequestRefresh();

private:
	void AddBinding();
	void RemoveBinding();
	void CreateDetailsInstance();
	void DestroyDetailsInstanceIfNeeded();
	void ClearCacheIfNeeded();


	bool AllowDefaultObjectCustomization() const;
	bool IsValidPropertyOwnerClass(const UClass* InClass) const;

	void OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent);
	void HandleAnyBlueprintReinstanced();


public:
	const UClass* GetCustomizedClass() const;
	IDetailLayoutBuilder* GetDetailBuilder();
	IDetailCategoryBuilder* GetActiveCategoryBuilder();
	UDetailCustomizationInstance* GetInstance();
	bool GetCustomizedObjects(TArray<UObject*>& OutObjects);
	bool GetCustomizedActors(TArray<AActor*>& OutActors);
	bool ForceRefreshDetails();
	bool HideCategory(const FName& HiddenCategoryName, bool bCheckIfCategoryExists);
	bool GetCategoryNames(TArray<FName>& OutNames);
	bool GetAllEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos);
	bool GetEditablePropertyInfos(TArray<FEditablePropertyInfo>& OutInfos, TSubclassOf<UObject> PropertyOwnerClass);
	bool HideProperty(const FName& HiddenPropertyName, TSubclassOf<UObject> PropertyOwnerClass);

	bool IsEditingCategory() const;
	void EditCategory(FDetailCategoryBuilderHandle& OutCategoryBuilderHandle, const FName& CategoryName, const FText& NewLocalizedDisplayName, EDetailCategoryPriority CategoryType);

	TSharedRef<SWidget> CreatePropertyNameWidget(const FName& PropertyName, TSubclassOf<UObject> PropertyOwnerClass, const FText& NameOverride, const FText& ToolTipOverride, bool bDisplayResetToDefault, bool bDisplayText, bool bDisplayThumbnail);
	TSharedRef<SWidget> CreatePropertyValueWidget(const FName& PropertyName, TSubclassOf<UObject> PropertyOwnerClass, bool bDisplayDefaultPropertyButtons);

private:
	TWeakPtr<IDetailLayoutBuilder> DetailBuilderWeakPtr;
	IDetailCategoryBuilder* ActiveCategoryBuilder;

	TWeakObjectPtr<UDetailCustomizationInstance> DetailsInstancePtr;
	TWeakObjectPtr<UDetailCustomizationUtilityBlueprint> DetailsBlueprintPtr;

	bool bAddedBinding;
};

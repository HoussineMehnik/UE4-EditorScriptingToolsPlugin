//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//


#include "UserDefinedPlacementCategoryInfoCustomization.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Engine/GameViewportClient.h"
#include "AssetData.h"
#include "PropertyHandle.h"
#include "PropertyCustomizationHelpers.h"
#include <IDetailChildrenBuilder.h>
#include <Widgets/Input/SButton.h>

void FUserDefinedPlacementCategoryInfoCustomization::CustomizeHeader( TSharedRef<IPropertyHandle> InStructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils )
{
	StructPropertyHandle = InStructPropertyHandle;
	
	HeaderRow
		.NameContent()
		[
			InStructPropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
	 	[
	 		SNew(SButton)
		];
}

void FUserDefinedPlacementCategoryInfoCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> InStructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	uint32 ChildCount;
	StructPropertyHandle->GetNumChildren(ChildCount);

	for (uint32 i = 0; i < ChildCount; ++i)
	{
		const TSharedPtr<IPropertyHandle> ChildPropertyHandle = StructPropertyHandle->GetChildHandle(i);
		if (!ChildPropertyHandle->IsCustomized())
		{
			StructBuilder.AddProperty(ChildPropertyHandle.ToSharedRef());
		}
	}
}


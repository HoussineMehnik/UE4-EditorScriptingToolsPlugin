//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#include "DetailCustomizationTypes.h"
#include "Widgets/Layout/SBorder.h"
#include "EditorStyleSet.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

#define LOCTEXT_NAMESPACE "DetailCustomizationTypes"

TSharedRef<SWidget> FPropertyWidgetHelpers::UnknownPropertyWidget =   SNew(SBorder)
																			.Padding(0.0f)
																			.HAlign(HAlign_Fill)
																			.VAlign(VAlign_Fill)
																			.BorderImage(FEditorStyle::GetBrush("NoBorder"))
																			[
																				SNew(STextBlock)
																				.Text(LOCTEXT("UnknownPropertyText", "Unknown Property"))
																			];


#undef LOCTEXT_NAMESPACE 


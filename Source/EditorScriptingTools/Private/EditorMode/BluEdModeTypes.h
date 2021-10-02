//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"

class FPrimitiveDrawInterface;
class FEditorViewportClient;
class FViewport;
class FSceneView;
class FCanvas;

enum class EBluEdModeChangeMode : uint8
{
	EnterMode = 0,
	RefreshWidget,
	ExitMode
};

struct FBluEdModeEditorDelegates
{
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnBluEdModeEnter, EBluEdModeChangeMode /*InChangeMode*/);
	static FOnBluEdModeEnter OnBluEdModeChangedDelegate;
};



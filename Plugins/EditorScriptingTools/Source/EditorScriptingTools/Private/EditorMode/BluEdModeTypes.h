//====================== Editor Scripting Tools ===========================//
// Copyright 2020 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//====================== http://ue4resources.com/ ========================//

#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
//#include "BluEdModeTypes.generated.h"

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



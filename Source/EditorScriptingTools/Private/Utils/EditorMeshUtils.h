//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"

class UProceduralMeshComponent;
class UStaticMesh;

namespace EditorMeshUtils
{
	bool CreateStaticMeshAssetFromProceduralMesh(UProceduralMeshComponent* InProcMeshComp, UStaticMesh*& OutStaticMesh);
};
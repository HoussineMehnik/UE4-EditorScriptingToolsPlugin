//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once


enum class ELevelEditingContextType : uint8;
struct FDrawPrimitivesContext;
struct FDrawHUDContext;


class ILevelEditingContext
{

public:
	virtual ELevelEditingContextType GetLevelEditingContext() = 0;
	virtual const FDrawPrimitivesContext& GetDrawPrimitivesContext() = 0;
	virtual const FDrawHUDContext& GetDrawHUDContext() = 0;
};
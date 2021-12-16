#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Lobby_Logic_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Lobby_Logic_BP.Lobby_Logic_BP_C
// 0x0000 (0x0308 - 0x0308)
class ULobby_Logic_BP_C : public UUAEUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Logic_BP.Lobby_Logic_BP_C");
		return pStaticClass;
	}

};


}


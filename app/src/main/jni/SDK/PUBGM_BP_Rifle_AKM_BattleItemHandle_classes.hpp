#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Rifle_AKM_BattleItemHandle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_AKM_BattleItemHandle.BP_Rifle_AKM_BattleItemHandle_C
// 0x0000 (0x05A9 - 0x05A9)
class UBP_Rifle_AKM_BattleItemHandle_C : public UBattleItemHandle_MainWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_AKM_BattleItemHandle.BP_Rifle_AKM_BattleItemHandle_C");
		return pStaticClass;
	}

};


}


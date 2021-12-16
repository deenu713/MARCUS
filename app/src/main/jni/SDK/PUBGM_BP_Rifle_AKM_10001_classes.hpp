#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Rifle_AKM_10001_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_AKM_10001.BP_Rifle_AKM_10000_C
// 0x0004 (0x07DC - 0x07D8)
class ABP_Rifle_AKM_10000_C : public ABP_LobbyWeapon_C
{
public:
	class ULobbyWeaponAnimList_Rifle_C*                LobbyWeaponAnimList_Rifle;                                // 0x07D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_AKM_10001.BP_Rifle_AKM_10000_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


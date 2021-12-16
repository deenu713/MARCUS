#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Rifle_AKM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_AKM.BP_Rifle_AKM_C
// 0x0008 (0x0D69 - 0x0D61)
class ABP_Rifle_AKM_C : public ABP_ShootWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D61(0x0003) MISSED OFFSET
	class UWeaponAnimList_Rifle_AKM_C*                 WeaponAnimList_Rifle_AKM;                                 // 0x0D64(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim_1;                                           // 0x0D68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_AKM.BP_Rifle_AKM_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


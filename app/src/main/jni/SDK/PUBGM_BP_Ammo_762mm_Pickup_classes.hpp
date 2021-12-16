#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Ammo_762mm_Pickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ammo_762mm_Pickup.BP_Ammo_762mm_Pickup_C
// 0x0004 (0x0634 - 0x0630)
class ABP_Ammo_762mm_Pickup_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        SM_Ammo_762mm;                                            // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_762mm_Pickup.BP_Ammo_762mm_Pickup_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Pickup_Jacket_633_int_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pickup_Jacket_633_int.Pickup_Jacket_633_int_C
// 0x0004 (0x0634 - 0x0630)
class APickup_Jacket_633_int_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Bag_03_icon;                                              // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Pickup_Jacket_633_int.Pickup_Jacket_633_int_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


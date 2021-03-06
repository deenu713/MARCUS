#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Rifle_AKM_Wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_AKM_Wrapper.BP_Rifle_AKM_Wrapper_C
// 0x0008 (0x0638 - 0x0630)
class ABP_Rifle_AKM_Wrapper_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Mag;                                                      // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_AKM;                                                   // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_AKM_Wrapper.BP_Rifle_AKM_Wrapper_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}


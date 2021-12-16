#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_BP_Mag_AKM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mag_AKM.BP_Mag_AKM_C
// 0x0000 (0x0330 - 0x0330)
class UBP_Mag_AKM_C : public UBattleItemHandle_WeapAttachment_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Mag_AKM.BP_Mag_AKM_C");
		return pStaticClass;
	}

};


}


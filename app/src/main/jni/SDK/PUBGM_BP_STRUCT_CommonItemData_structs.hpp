#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_CommonItemData.BP_STRUCT_CommonItemData
// 0x004C
struct FBP_STRUCT_CommonItemData
{
	int                                                count_1_AAF73B26409C664053B0D480875DF1FC;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                res_id_2_D7E4E79043F24F18D6FD60806FC0F5B7;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                quality_6_780EECF244A4EA42C9ABE6ADBC97986B;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isSelected_7_79B52F524E830F0B45BF21A0AD0C79FB;            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isNew_8_283C7F274004CE4583E6988CFED70773;                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isUsing_9_D820856A433734B499F22B92FC9C781D;               // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FString                                     ins_id_12_F145E80F49630B6C92026BAB085F7FA7;               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     limitTimeStr_13_DFF8155F4D98123B51BE2D8CC020ADC3;         // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     itemName_14_AD711E5446FDA105FD03EEB108CBFF48;             // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               needShowName_15_C8DBF0F2499E16778D860FB0D6AFD73D;         // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasLimitTime_16_22C0511C4CBE4C575212B9B08FA2107C;         // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasLock_17_B1F713EE43FE9CFB5E198C9D34A96E86;              // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isSourceBook_18_89E8BB2543AC5613EA5920A87189310A;         // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                index_19_E8B16AA944FC8253477886AC86876E71;                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                useCount_20_6D042F4050C524292F66FFB40FB3EB64;             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isRolewear_21_171761001E1B031836B1EA900FAD2532;           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isIsolated_22_53DEDE0061EB48F44575C38F03E37894;           // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                pattern_id_23_24C2C4404642963D7D562E77014ABB64;           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                color_id_24_7CFA8C802CE551E046742CFF041E0584;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}


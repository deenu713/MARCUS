#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_SK_WEP_AK47_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C
// 0x03E8 (0x0718 - 0x0330)
class USK_WEP_AK47_AnimBP_C : public UWeaponAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_E71C45114A7BB0CB884561AF63F1055E;      // 0x0338(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799;// 0x0370(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E;// 0x03A8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97;// 0x03E0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F;// 0x0418(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5;// 0x0450(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6CAB345765B156EE21A8D3786D497;// 0x04B0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3;// 0x04E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13D37EDC4CEF071DFAEB47939AA0B7AB;// 0x0548(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B540290F49A3CD4DE1B8A9A9592522EE;// 0x0580(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C4620AB48D8787D6D0B0CB215F88C1F;// 0x05E0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F8F635F4AB045B266D42D90187A4366;// 0x0618(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3223427144BFDA98906EFFA589128549;      // 0x06C0(0x0058)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C");
		return pStaticClass;
	}


	void HandleWeaponStateChanged(TEnumAsByte<enum EFreshWeaponStateType> Selection);
	void PlayFireAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799();
	void OnWeaponChangeState(TEnumAsByte<enum EFreshWeaponStateType> CurState);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_WEP_AK47_AnimBP(int EntryPoint);
};


}


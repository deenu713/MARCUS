#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_MiniTv_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MiniTv_Anim.MiniTv_Anim_C
// 0x0AA4 (0x0D94 - 0x02F0)
class UMiniTv_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_08B11A174EC514BEC5718882DF0694B4;      // 0x02F8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7B72BE24EB04364FE178FA026E65FE8;// 0x0330(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86AD09954B07A0747F38BFBC3D588F1E;// 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0521CBB44E0764B8E506168619B29A22;// 0x03A0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E1835734030C94B15E52FA24E1625A6;// 0x03D8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_811140BD498D35A8201AB8B06403744E;// 0x0410(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_349A9286459785A6CB82098B48FCF413;// 0x0448(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A93D5F8A437DED85C8B89B9E294029A3;// 0x0480(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E5571924803012EA1CFC59830FE0225;// 0x04B8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CB4C5BE4408EC09DBEE9E870E288122;// 0x04F0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73B627864555A64748F43EB9006FBB1D;// 0x0528(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11656A624D79C3DC29F0D295D7CA8E92;// 0x0560(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A3EF0CF4542968FE976F5A1C676B894;// 0x0598(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C82B2B94DC6B6124AB64C9B16986275;// 0x05D0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50B2D83C49FCFEBAA0C66690BB547CC1;// 0x0630(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_F687C8584002A801512D1DAF2DDCCDBA;// 0x0690(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ABC4182C40F5631C99CE1A9DD7D88D05;// 0x0728(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A35E717C4E421304EEECCAA6A9BA1F27;// 0x0760(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7A5B5834FB575D2B852229CAD37613F;// 0x07C0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2C537D54B83F847CABE87BDA974D147;// 0x07F8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_845B86564C1C5616585BA6A9D7E9CACE;// 0x0858(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91AFBE674F10210B2133E796A5005665;// 0x0890(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B2455BE048EC9C1EAA2A5DBB55881C39;// 0x08F0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C1F5FD84276BEC4F90F089C2B5B3C4E;// 0x0928(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60CA9EAF49B1B1A9FA49EF8DC6AE54D8;// 0x0988(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC84DB55440EEAAF56501DA63DB25227;// 0x09C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8EC7C874F3EDFDE51853B86BA6C4D91;// 0x0A20(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B980C78D41E73DDD6E275789333FEA60;// 0x0A80(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_56D75B364E148F814C2A84BA44A164EB;// 0x0AE0(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FBA9529D42F96C12A81DA68CBB3BC818;// 0x0B78(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1EAF320477428B9FE06A684837F6733;// 0x0BB0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F85F89DB49653DC5E62B58A377FF4EB9;// 0x0C10(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0354D8144427E351A277C68424D354D7;// 0x0C48(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_73DD72644053FB7030ED09B702D27900;// 0x0CA8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3E2B818E407DC77B185786B072C94F9F;// 0x0CE0(0x00A8)
	int                                                IdleState;                                                // 0x0D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BStartDrag;                                               // 0x0D8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BRotate;                                                  // 0x0D8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BWalk;                                                    // 0x0D8E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BWin;                                                     // 0x0D8F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DoubleState;                                              // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass MiniTv_Anim.MiniTv_Anim_C");
		return pStaticClass;
	}


	void SetDouble(int Double);
	void SetWin(bool Win);
	void SetWalk(bool Walk);
	void SetRotate(bool Rotate);
	void SetIdleState(int State);
	void SetDrag(bool Drag);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_811140BD498D35A8201AB8B06403744E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_349A9286459785A6CB82098B48FCF413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_0E5571924803012EA1CFC59830FE0225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_4CB4C5BE4408EC09DBEE9E870E288122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_1E1835734030C94B15E52FA24E1625A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_73B627864555A64748F43EB9006FBB1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_11656A624D79C3DC29F0D295D7CA8E92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_1A3EF0CF4542968FE976F5A1C676B894();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_F687C8584002A801512D1DAF2DDCCDBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_0521CBB44E0764B8E506168619B29A22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_86AD09954B07A0747F38BFBC3D588F1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_BlendListByInt_56D75B364E148F814C2A84BA44A164EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MiniTv_Anim_AnimGraphNode_TransitionResult_D7B72BE24EB04364FE178FA026E65FE8();
	void ExecuteUbergraph_MiniTv_Anim(int EntryPoint);
};


}


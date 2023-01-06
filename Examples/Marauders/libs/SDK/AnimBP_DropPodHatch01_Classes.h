﻿#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass AnimBP_DropPodHatch01.AnimBP_DropPodHatch01_C
	 * Size -> 0x0108 (FullSize[0x03C0] - InheritedSize[0x02B8])
	 */
	class UAnimBP_DropPodHatch01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_W2QR[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x02F8(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0378(0x0048)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AnimBP_DropPodHatch01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

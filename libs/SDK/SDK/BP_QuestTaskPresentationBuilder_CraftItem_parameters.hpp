#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x198 - 0x0)
// Function BP_QuestTaskPresentationBuilder_CraftItem.BP_QuestTaskPresentationBuilder_CraftItem_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_CraftItem_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8100[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	class UBP_ConditionBehaviour_Item_Crafted_Constraint_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Crafted_Constraint; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8101[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraintPresentationData       CallFunc_GetItemConstraintUIData_OutPresentationData; // 0x88(0x88)(None)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatTaskName_ReturnValue;               // 0x118(0x18)(None)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0x130(0x68)(None)
};

}
}



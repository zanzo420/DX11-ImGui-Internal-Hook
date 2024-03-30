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

// 0x150 (0x150 - 0x0)
// Function BP_QuestTaskPresentationBuilder_ExperienceState.BP_QuestTaskPresentationBuilder_ExperienceState_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_ExperienceState_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5896[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	class UExperienceStateCondition*             K2Node_DynamicCast_AsExperience_State_Condition;   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5897[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName; // 0x88(0x18)(None)
	class FText                                  CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription; // 0xA0(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon; // 0xB8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5898[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0xE8(0x68)(None)
};

}
}



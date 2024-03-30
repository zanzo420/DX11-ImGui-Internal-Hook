#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_ExperienceState.BP_QuestTaskPresentationBuilder_ExperienceState_C
class UBP_QuestTaskPresentationBuilder_ExperienceState_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_ExperienceState_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UExperienceStateCondition* K2Node_DynamicCast_AsExperience_State_Condition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName, class FText CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon, bool CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData);
};

}



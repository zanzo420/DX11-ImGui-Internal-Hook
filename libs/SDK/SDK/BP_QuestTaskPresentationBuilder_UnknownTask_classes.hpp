#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_UnknownTask.BP_QuestTaskPresentationBuilder_UnknownTask_C
class UBP_QuestTaskPresentationBuilder_UnknownTask_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_UnknownTask_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData);
};

}



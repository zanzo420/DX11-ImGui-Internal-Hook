#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x78 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_TalkToNPC_Specific.BP_QuestTaskPresentationBuilder_TalkToNPC_Specific_C
class UBP_QuestTaskPresentationBuilder_TalkToNPC_Specific_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:
	class FText                                  NPCName;                                           // 0x48(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Action;                                            // 0x60(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_TalkToNPC_Specific_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData);
};

}



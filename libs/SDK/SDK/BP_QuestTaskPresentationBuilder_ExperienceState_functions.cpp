#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_ExperienceState.BP_QuestTaskPresentationBuilder_ExperienceState_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_ExperienceState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_ExperienceState_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_ExperienceState_C BP_QuestTaskPresentationBuilder_ExperienceState.Default__BP_QuestTaskPresentationBuilder_ExperienceState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_ExperienceState_C* UBP_QuestTaskPresentationBuilder_ExperienceState_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_ExperienceState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_ExperienceState_C*>(UBP_QuestTaskPresentationBuilder_ExperienceState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_ExperienceState.BP_QuestTaskPresentationBuilder_ExperienceState_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// class UExperienceStateCondition*   K2Node_DynamicCast_AsExperience_State_Condition                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName(None)
// class FText                        CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription(None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon(UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)

void UBP_QuestTaskPresentationBuilder_ExperienceState_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UExperienceStateCondition* K2Node_DynamicCast_AsExperience_State_Condition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName, class FText CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription, TSoftObjectPtr<class UTexture2D> CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon, bool CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_ExperienceState_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_ExperienceState_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_DynamicCast_AsExperience_State_Condition = K2Node_DynamicCast_AsExperience_State_Condition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName = CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutName;
	Parms.CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription = CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutDescription;
	Parms.CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon = CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_OutIcon;
	Parms.CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue = CallFunc_GetQuestTaskPresentationDataFromExperienceStateCondition_ReturnValue;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_UpgradePick.BP_QuestTaskPresentationBuilder_UpgradePick_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_UpgradePick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_UpgradePick_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_UpgradePick_C BP_QuestTaskPresentationBuilder_UpgradePick.Default__BP_QuestTaskPresentationBuilder_UpgradePick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_UpgradePick_C* UBP_QuestTaskPresentationBuilder_UpgradePick_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_UpgradePick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_UpgradePick_C*>(UBP_QuestTaskPresentationBuilder_UpgradePick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_UpgradePick.BP_QuestTaskPresentationBuilder_UpgradePick_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)

void UBP_QuestTaskPresentationBuilder_UpgradePick_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_UpgradePick_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_UpgradePick_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}

}



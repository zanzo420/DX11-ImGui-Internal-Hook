#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_CraftItem.BP_QuestTaskPresentationBuilder_CraftItem_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_CraftItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_CraftItem_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_CraftItem_C BP_QuestTaskPresentationBuilder_CraftItem.Default__BP_QuestTaskPresentationBuilder_CraftItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_CraftItem_C* UBP_QuestTaskPresentationBuilder_CraftItem_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_CraftItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_CraftItem_C*>(UBP_QuestTaskPresentationBuilder_CraftItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_CraftItem.BP_QuestTaskPresentationBuilder_CraftItem_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// class UBP_ConditionBehaviour_Item_Crafted_Constraint_C*K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Crafted_Constraint(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatTaskName_ReturnValue                              (None)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)

void UBP_QuestTaskPresentationBuilder_CraftItem_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UBP_ConditionBehaviour_Item_Crafted_Constraint_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Crafted_Constraint, bool K2Node_DynamicCast_bSuccess, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_CraftItem_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_CraftItem_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Crafted_Constraint = K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Crafted_Constraint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_FormatTaskName_ReturnValue = CallFunc_FormatTaskName_ReturnValue;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}

}



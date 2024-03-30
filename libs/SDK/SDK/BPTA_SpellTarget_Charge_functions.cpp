#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C
// (Actor)

class UClass* ABPTA_SpellTarget_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_SpellTarget_Charge_C");

	return Clss;
}


// BPTA_SpellTarget_Charge_C BPTA_SpellTarget_Charge.Default__BPTA_SpellTarget_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_SpellTarget_Charge_C* ABPTA_SpellTarget_Charge_C::GetDefaultObj()
{
	static class ABPTA_SpellTarget_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_SpellTarget_Charge_C*>(ABPTA_SpellTarget_Charge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ChargeAVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChargeVal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousChargeVal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpellAVFXComponent*         SpellAVFXComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpellAVFXComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HandleSpellChargeUpdated_NewSpellCharge_ImplicitCast    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SpellTarget_Charge_C::ChargeAVFX(int32 ChargeVal, int32 PreviousChargeVal, class USpellAVFXComponent* SpellAVFXComp, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 Temp_int_Variable, class USpellAVFXComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_HandleSpellChargeUpdated_NewSpellCharge_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ChargeAVFX");

	Params::ABPTA_SpellTarget_Charge_C_ChargeAVFX_Params Parms{};

	Parms.ChargeVal = ChargeVal;
	Parms.PreviousChargeVal = PreviousChargeVal;
	Parms.SpellAVFXComp = SpellAVFXComp;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_HandleSpellChargeUpdated_NewSpellCharge_ImplicitCast = CallFunc_HandleSpellChargeUpdated_NewSpellCharge_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ConfirmAndSendTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromInt_ReturnValue                    (None)

void ABPTA_SpellTarget_Charge_C::ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ConfirmAndSendTargetData");

	Params::ABPTA_SpellTarget_Charge_C_ConfirmAndSendTargetData_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromInt_ReturnValue = CallFunc_AbilityTargetDataFromInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.InputCastSpell_Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SpellTarget_Charge_C::InputCastSpell_Started()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "InputCastSpell_Started");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SpellTarget_Charge_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ReceiveTick");

	Params::ABPTA_SpellTarget_Charge_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SpellTarget_Charge_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ReceiveEndPlay");

	Params::ABPTA_SpellTarget_Charge_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ReceiveStartTargeting
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_SpellTarget_Charge_C::ReceiveStartTargeting(class UGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ReceiveStartTargeting");

	Params::ABPTA_SpellTarget_Charge_C_ReceiveStartTargeting_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.InputCastSpell_Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_SpellTarget_Charge_C::InputCastSpell_Completed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "InputCastSpell_Completed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C.ExecuteUbergraph_BPTA_SpellTarget_Charge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueRange_MinValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueRange_MaxValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_SpellBase_C*             K2Node_DynamicCast_AsGA_Spell_Base                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DeltaSeconds_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_SpellTarget_Charge_C::ExecuteUbergraph_BPTA_SpellTarget_Charge(int32 EntryPoint, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, float CallFunc_GetValueRange_MinValue, float CallFunc_GetValueRange_MaxValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UGameplayAbility* K2Node_Event_Ability, class UGA_SpellBase_C* K2Node_DynamicCast_AsGA_Spell_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Round_A_ImplicitCast, double K2Node_VariableSet_DeltaSeconds_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_SpellTarget_Charge_C", "ExecuteUbergraph_BPTA_SpellTarget_Charge");

	Params::ABPTA_SpellTarget_Charge_C_ExecuteUbergraph_BPTA_SpellTarget_Charge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.CallFunc_GetValueRange_MinValue = CallFunc_GetValueRange_MinValue;
	Parms.CallFunc_GetValueRange_MaxValue = CallFunc_GetValueRange_MaxValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.K2Node_DynamicCast_AsGA_Spell_Base = K2Node_DynamicCast_AsGA_Spell_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager_1 = CallFunc_Get_HUD_Manager_HUD_Manager_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.K2Node_VariableSet_DeltaSeconds_ImplicitCast = K2Node_VariableSet_DeltaSeconds_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



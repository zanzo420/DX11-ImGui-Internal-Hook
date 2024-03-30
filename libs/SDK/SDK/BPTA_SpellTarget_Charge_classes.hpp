#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x458 - 0x411)
// BlueprintGeneratedClass BPTA_SpellTarget_Charge.BPTA_SpellTarget_Charge_C
class ABPTA_SpellTarget_Charge_C : public ABPTA_SpellTarget_C
{
public:
	uint8                                        Pad_A8A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DeltaSeconds;                                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ChargeCurve;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Charge;                                            // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCharge;                                         // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DurationWhenMaxWasReached;                         // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousCharge;                                    // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialCharge;                                     // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UGA_SpellBase_C*                       GA_Spell_Base;                                     // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTA_SpellTarget_Charge_C* GetDefaultObj();

	void ChargeAVFX(int32 ChargeVal, int32 PreviousChargeVal, class USpellAVFXComponent* SpellAVFXComp, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 Temp_int_Variable, class USpellAVFXComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_HandleSpellChargeUpdated_NewSpellCharge_ImplicitCast);
	void ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromInt_ReturnValue);
	void InputCastSpell_Started();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveStartTargeting(class UGameplayAbility* Ability);
	void InputCastSpell_Completed();
	void ExecuteUbergraph_BPTA_SpellTarget_Charge(int32 EntryPoint, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, float CallFunc_GetValueRange_MinValue, float CallFunc_GetValueRange_MaxValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UGameplayAbility* K2Node_Event_Ability, class UGA_SpellBase_C* K2Node_DynamicCast_AsGA_Spell_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Round_A_ImplicitCast, double K2Node_VariableSet_DeltaSeconds_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1);
};

}



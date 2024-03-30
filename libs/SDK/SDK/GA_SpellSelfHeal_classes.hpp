#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x750 - 0x738)
// BlueprintGeneratedClass GA_SpellSelfHeal.GA_SpellSelfHeal_C
class UGA_SpellSelfHeal_C : public UGA_SpellBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x738(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                           CFHealing;                                         // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           CFDuration;                                        // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpellSelfHeal_C* GetDefaultObj();

	void CastSpell(const struct FGameplayAbilityTargetDataHandle& TargetData, double BaseHealing, class UAbilitySystemComponent* AbilitySystem, int32 CallFunc_GetIntFromTargetData_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_ScaleSpellHealing_ScaledHealing, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
	void ValidateTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* IsValid, int32 CallFunc_GetIntFromTargetData_ReturnValue, bool CallFunc_TargetDataHasInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Cancelled_317E16884F06456787BDAD9324D34109(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_317E16884F06456787BDAD9324D34109(struct FGameplayAbilityTargetDataHandle& Data);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_SpellSelfHeal(int32 EntryPoint, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, bool CallFunc_IsValid_ReturnValue, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_ValidateTargetData_IsValid, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ValidateAndInitialize_Success, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}



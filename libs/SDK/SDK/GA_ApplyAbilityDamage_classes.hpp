#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x558 - 0x420)
// BlueprintGeneratedClass GA_ApplyAbilityDamage.GA_ApplyAbilityDamage_C
class UGA_ApplyAbilityDamage_C : public UApplyAbilityDamage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Instigator;                                        // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x438(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ABP_EquippableItemBase_C*              Item;                                              // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 EffectTags;                                        // 0x528(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTagValueContainer                    TagValueContainer;                                 // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_ApplyAbilityDamage_C* GetDefaultObj();

	void CheckAndApplySpells(double DamageIn, double* DamageOut, double EnhancedHarvestMultiplier, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_Interactable_C> CallFunc_IsHarvestable_self_CastInput, bool CallFunc_IsHarvestable_IsHarvestable);
	void Get_Item(class ABP_EquippableItemBase_C** EquippedItem, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess);
	void CheckAndApplyPerks(double DamageIn, double* DamageOut, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void CheckAndApplyPlayerSkillBonus(double DamageIn, double* DamageOut, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void ApplyDamage(double BaseDamage, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	bool StructureValidityCheck(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CheckAndApplyCombo(double DamageIn, double* DamageOut, int32 ComboCount, double ModifiedDamage, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag_1, float CallFunc_Find_Value, bool CallFunc_Find_Found, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_MeleeComponent_C* CallFunc_GetMeleeComponent_MeleeComponent, double CallFunc_GetComboDamageModifier_Modifier, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_ComboCountTag_ComboCountTag, float CallFunc_Find_Value_1, bool CallFunc_Find_Found_1, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast);
	void CheckAndApplyPowerAttack(double DamageIn, double* DamageOut, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag_1, float CallFunc_Find_Value, bool CallFunc_Find_Found, const struct FGameplayTag& CallFunc_PowerSwingChargedTag_PowerSwingTag, class UBP_MeleeComponent_C* CallFunc_GetMeleeComponent_MeleeComponent, double CallFunc_GetPowerSwingStrengthModifier_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_GetPowerSwingDamageModifier_Modifier, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast);
	void CheckWeakPoint(const struct FGameplayTag& CallFunc_HeadshotTag_HeadshotTag, bool CallFunc_IsHeadshot_IsHeadshot);
	void PopulateTagValueContainer(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, const struct FGameplayTag& CallFunc_ComboCountTag_ComboCountTag, float CallFunc_CalculateItemAttributeValue_ReturnValue, float CallFunc_Find_Value, bool CallFunc_Find_Found, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FGameplayTag& CallFunc_ComboCountTag_ComboCountTag_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, bool CallFunc_IsValid_ReturnValue, double CallFunc_FMax_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_Add_Value_ImplicitCast, float CallFunc_Add_Value_ImplicitCast_1);
	void PopulateEffectTags(const struct FGameplayTagContainer& Tags, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetInteractionTags_InteractionTags, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void ParseEventData(struct FGameplayEventData& GameplayEventData, class ABP_EquippableItemBase_C* CallFunc_Get_Item_EquippedItem, const struct FTagValueContainer& CallFunc_TagValueContainerFromAbilityPayload_Container, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue);
	void GetDamage(double* Damage, bool* Succeeded);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ApplyAbilityDamage(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, double CallFunc_GetDamage_Damage, bool CallFunc_GetDamage_Succeeded, double CallFunc_CheckAndApplyPowerAttack_DamageOut, double CallFunc_CheckAndApplyCombo_DamageOut, double CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut, double CallFunc_CheckAndApplyPerks_DamageOut, double CallFunc_CheckAndApplySpells_DamageOut, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_StructureValidityCheck_ReturnValue);
};

}



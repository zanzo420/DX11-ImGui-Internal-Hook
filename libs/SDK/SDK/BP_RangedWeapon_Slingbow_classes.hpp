#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1260 - 0x1240)
// BlueprintGeneratedClass BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C
class ABP_RangedWeapon_Slingbow_C : public ABP_RangedWeapon_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle           ActiveEffect;                                      // 0x1248(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       As_BP_Character;                                   // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAmmoEffectDataAsset_C*                AmmoEffectDA;                                      // 0x1258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RangedWeapon_Slingbow_C* GetDefaultObj();

	void SlingbowAmmoChanged();
	void Ammo_Remaining(bool* Has_Ammo, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveAmmoEffect(bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	void FireRangedWeapon(class AActor* WeaponOwner, int32 AmmoToConsume, bool CallFunc_Ammo_Remaining_Has_Ammo, bool CallFunc_Not_PreBool_ReturnValue);
	void SlingbowReloaded(bool CallFunc_Ammo_Remaining_Has_Ammo);
	void SlingbowUnequipped();
	void SlingbowEquipped(bool CallFunc_Ammo_Remaining_Has_Ammo);
	void ApplyAmmoEffect(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnAsyncLoadComplete();
	void ExecuteUbergraph_BP_RangedWeapon_Slingbow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Ammo_Remaining_Has_Ammo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}



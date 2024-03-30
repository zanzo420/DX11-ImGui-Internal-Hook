#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C
// (Actor)

class UClass* ABP_RangedWeapon_Slingbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeapon_Slingbow_C");

	return Clss;
}


// BP_RangedWeapon_Slingbow_C BP_RangedWeapon_Slingbow.Default__BP_RangedWeapon_Slingbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RangedWeapon_Slingbow_C* ABP_RangedWeapon_Slingbow_C::GetDefaultObj()
{
	static class ABP_RangedWeapon_Slingbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RangedWeapon_Slingbow_C*>(ABP_RangedWeapon_Slingbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.SlingbowAmmoChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Slingbow_C::SlingbowAmmoChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "SlingbowAmmoChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.Ammo Remaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Has_Ammo                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::Ammo_Remaining(bool* Has_Ammo, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "Ammo Remaining");

	Params::ABP_RangedWeapon_Slingbow_C_Ammo_Remaining_Params Parms{};

	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Ammo != nullptr)
		*Has_Ammo = Parms.Has_Ammo;

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.RemoveAmmoEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::RemoveAmmoEffect(bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "RemoveAmmoEffect");

	Params::ABP_RangedWeapon_Slingbow_C_RemoveAmmoEffect_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.FireRangedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WeaponOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoToConsume                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Ammo_Remaining_Has_Ammo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::FireRangedWeapon(class AActor* WeaponOwner, int32 AmmoToConsume, bool CallFunc_Ammo_Remaining_Has_Ammo, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "FireRangedWeapon");

	Params::ABP_RangedWeapon_Slingbow_C_FireRangedWeapon_Params Parms{};

	Parms.WeaponOwner = WeaponOwner;
	Parms.AmmoToConsume = AmmoToConsume;
	Parms.CallFunc_Ammo_Remaining_Has_Ammo = CallFunc_Ammo_Remaining_Has_Ammo;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.SlingbowReloaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Ammo_Remaining_Has_Ammo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::SlingbowReloaded(bool CallFunc_Ammo_Remaining_Has_Ammo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "SlingbowReloaded");

	Params::ABP_RangedWeapon_Slingbow_C_SlingbowReloaded_Params Parms{};

	Parms.CallFunc_Ammo_Remaining_Has_Ammo = CallFunc_Ammo_Remaining_Has_Ammo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.SlingbowUnequipped
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Slingbow_C::SlingbowUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "SlingbowUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.SlingbowEquipped
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Ammo_Remaining_Has_Ammo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::SlingbowEquipped(bool CallFunc_Ammo_Remaining_Has_Ammo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "SlingbowEquipped");

	Params::ABP_RangedWeapon_Slingbow_C_SlingbowEquipped_Params Parms{};

	Parms.CallFunc_Ammo_Remaining_Has_Ammo = CallFunc_Ammo_Remaining_Has_Ammo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.ApplyAmmoEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::ApplyAmmoEffect(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "ApplyAmmoEffect");

	Params::ABP_RangedWeapon_Slingbow_C_ApplyAmmoEffect_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.OnAsyncLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Slingbow_C::OnAsyncLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "OnAsyncLoadComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Slingbow.BP_RangedWeapon_Slingbow_C.ExecuteUbergraph_BP_RangedWeapon_Slingbow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Ammo_Remaining_Has_Ammo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Slingbow_C::ExecuteUbergraph_BP_RangedWeapon_Slingbow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Ammo_Remaining_Has_Ammo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Slingbow_C", "ExecuteUbergraph_BP_RangedWeapon_Slingbow");

	Params::ABP_RangedWeapon_Slingbow_C_ExecuteUbergraph_BP_RangedWeapon_Slingbow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Ammo_Remaining_Has_Ammo = CallFunc_Ammo_Remaining_Has_Ammo;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}



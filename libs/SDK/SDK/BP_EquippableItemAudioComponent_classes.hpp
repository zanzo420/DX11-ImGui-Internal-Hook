#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x120 - 0xC0)
// BlueprintGeneratedClass BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C
class UBP_EquippableItemAudioComponent_C : public UEquippableItemAudioComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_EquippableItemBase_C*              CachedOwner;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         HasTriggeredDurabilityNearBreakingAudio;           // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         HasTriggeredDurabilityDepletedAudio;               // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_A2E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FuelAmountCache;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAkComponent*                          FallbackDurabilityRTPCScopedAkComponent;           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UScopedAkComponent*                    StatusEffectScopedAkComponent;                     // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DynamicScopedAkComponentsSpawned;                  // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                EquippableItemMesh;                                // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LightweightItemMesh;                               // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  StatusEffectAudioSocket;                           // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RootAudioSocket;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    RootScopedAkComponent;                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_EquippableItemAudioComponent_C* GetDefaultObj();

	void GetFPTPRTPCValue(double* RTPCValue, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_IsThirdPerson_ThirdPerson, double K2Node_Select_Default);
	void InformEmoteComponetEquippedChanged(class UBP_Emote_Component_C* EmoteComponent, class AActor* ParentActor, bool CallFunc_IsValid_ReturnValue, class UBP_Emote_Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue);
	void ResolveStartStopEvent(const struct FS_AudioStartStopEventPair& StartStopPair, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftEvent, bool Temp_bool_Variable, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default);
	void ResolveSwingAudioType(const struct FS_ItemAudioSwingTypes& SwingAudio, bool IsHeavy, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftEvent, TSoftObjectPtr<class UAkAudioEvent> ResolvedSoftEvent, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveStartStopEvent_SoftEvent, bool CallFunc_BooleanAND_ReturnValue, const struct FS_AudioStartStopEventPair& K2Node_Select_Default, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveStartStopEvent_SoftEvent_1);
	void ResolveSwingAudioStruct(const struct FS_ItemAudioSwings& SwingAudioStruct, enum class ESwingDirection Direction, bool IsHeavy, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftAudioEvent, TSoftObjectPtr<class UAkAudioEvent> ResolvedSoftEvent, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioType_SoftEvent, const struct FS_ItemAudioSwingTypes& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioType_SoftEvent_1);
	void HandleFuelAudioLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleCharacterViewUpdated(bool IsThirdPerson, double FPTPRTPCValue, class UAkComponent* DurabilityScopedAk, double CallFunc_GetFPTPRTPCValue_RTPCValue, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryAttachToItemMeshSocket_Success, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_TryAttachToItemMeshSocket_Success_1, bool CallFunc_TryAttachToItemMeshSocket_Success_2, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2);
	void SubscribeToFirstThirdPersonSwitch(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent);
	void TryAttachToItemMeshSocket(class USceneComponent* ThingToAttach, class FName SocketToAttachTo, bool* Success, class USkeletalMeshComponent* MeshToAttachTo, bool CallFunc_IsValid_ReturnValue, class USkinnedAsset* CallFunc_GetSkinnedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void TryGetVisibleSkeletalMesh(class USkeletalMeshComponent** SkeletalMesh, bool* Success, bool CallFunc_IsThirdPerson_ThirdPerson, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsThirdPerson(bool* ThirdPerson, class ANWXCharacter* OwningCharAsNWXCharacter, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsFirstPersonCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PlaySwoosh(enum class ESwingDirection SwingDirection, bool IsHeavySwing, bool IsStopEvent, TSoftObjectPtr<class UAkAudioEvent> AudioToLoad, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FS_ItemAudioSwings& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioStruct_SoftAudioEvent);
	void HandleLightweightItemSpawned(class ABP_EquippableItemBase_C* EquippableItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem);
	void StopCrustLoopIfLoaded(bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void StartCrustLoopIfLoaded(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void HandleCrustLoopEventsLoaded(class UAkAudioEvent* StartLoopEvent, class UAkAudioEvent* StopLoopEvent);
	void SetupDynamicAkComponents(class UAkComponent* DurabilityScopedAk, double FPTPRTPCValue, bool IsThirdPerson, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* Temp_object_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, double CallFunc_GetFPTPRTPCValue_RTPCValue, bool CallFunc_Is_Locally_Controlled_LocallyControlled, bool CallFunc_Is_Locally_Controlled_LocallyControlled_1, class UAkSwitchValue* K2Node_Select_Default, class UAkSwitchValue* K2Node_Select_Default_1, bool CallFunc_TryAttachToItemMeshSocket_Success, bool CallFunc_TryAttachToItemMeshSocket_Success_1, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh_1, bool CallFunc_TryGetVisibleSkeletalMesh_Success_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_TryAttachToItemMeshSocket_Success_2, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2);
	void HandleCrustLoopEndLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue);
	void HandleCrustLoopStartLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue);
	void HandleStatusEffectOneShotLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HandleOnUnequipped(bool CallFunc_IsValid_ReturnValue);
	void HandleOnEquipped(bool CallFunc_IsValid_ReturnValue);
	void RemoveCurrentStatusEffectVFX(TSoftObjectPtr<class UAkAudioEvent> SoftAkEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioStatusEffect& CallFunc_GetTableCellData_OutData);
	void ApplyStatusEffectVFX(struct FGameplayTag& StatusEffectTag, TSoftObjectPtr<class UAkAudioEvent> SoftAkLoopEnd, TSoftObjectPtr<class UAkAudioEvent> SoftAkLoopStart, TSoftObjectPtr<class UAkAudioEvent> SoftAkOneShot, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioStatusEffect& CallFunc_GetTableCellData_OutData);
	void Is_Locally_Controlled(bool* LocallyControlled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsLocallyControlled_ReturnValue);
	void GetScopedAkComponentForDurabilityRTPC(class UAkComponent** ScopedAkComponent, class ABP_FishingRod_C* K2Node_DynamicCast_AsBP_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_Locally_Controlled_LocallyControlled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem);
	void TryTriggerDurabilityAudio(bool IsNearBreaking, class AActor* ItemOwner, const struct FInventoryEntry& OwnerInventoryEntry, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, class UBP_LoadAndPlay_Audio_C* CallFunc_AddComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, bool CallFunc_Is_Locally_Controlled_LocallyControlled, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioDurability& CallFunc_GetTableCellData_OutData, bool CallFunc_Is_Locally_Controlled_LocallyControlled_1, bool Temp_bool_Variable_1, const struct FTaggableSound& K2Node_Select_Default, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioDurability& CallFunc_GetTableCellData_OutData_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FTaggableSound& K2Node_Select_Default_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void UpdateDurabilityRTPC(double NormalizedDurability, class UAkComponent* ScopedAkComponent, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void HandleRealDurabilityChange(double NewDurability, double MaxDurability, double NormalizedDurability, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void HandlePredictedDurabilityChange(double PredictedDurability, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, bool IsLocal, double NewNormalizedDurability, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GetDurability_HasDurability, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_DurabilityData, bool CallFunc_IsValid_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void HandleAddFuelAudio(double FuelAmount, double MaxFuel, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FItemData_FuelAudio& CallFunc_TryGetItemDataFuelAudio_OutData, enum class EGetResult CallFunc_TryGetItemDataFuelAudio_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void SetupCallbacks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleDurabilityNearBreaking();
	void HandleDurabilityDepleted();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EquippableItemAudioComponent(int32 EntryPoint, class AEquippableItem* CallFunc_GetOwnerAsEquippableItem_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class UAkComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_GetFuel_HasFuelData, const struct FItemInstanceFuelData& CallFunc_GetFuel_Fuel, float CallFunc_CalculateItemAttributeValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_VariableSet_FuelAmountCache_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}



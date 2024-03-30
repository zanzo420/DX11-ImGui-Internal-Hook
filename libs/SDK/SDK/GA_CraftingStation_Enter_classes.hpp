#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x508 - 0x420)
// BlueprintGeneratedClass GA_CraftingStation_Enter.GA_CraftingStation_Enter_C
class UGA_CraftingStation_Enter_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXCharacter*                         CrafterPawn;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CrafterAbilitySystem;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftingStationActor;                              // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bCrafterIsPlayer;                                  // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_806E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrafterUniqueID;                                   // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          NewEffectContext;                                  // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DEBUG_GrantEffectOnly;                             // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_806F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TAG_STATION_EFFECTAPPLIED;                         // 0x47C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8070[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              PreSelectedRecipe;                                 // 0x490(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_CraftingComponent_C*               CraftingComponent;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CraftingStation_Enter_C* GetDefaultObj();

	void HandleEndAbility(bool bWasCancelled, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	struct FGameplayEventData CreateStepAdvancePayload(const struct FDataTableRowHandle& StepHandle, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void HandleStepEnding(const struct FS_Crafting_CraftInProgress& CraftInProgress, bool* Success, const TArray<struct FDataTableRowHandle>& CurrentRecipeSteps, const struct FCraftingRecipe& CurrentRecipeDefinition, int32 CurrentStepIndex, const struct FCraftingRecipeReference& CurrentRecipeHandle, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FGameplayEventData& CallFunc_CreateStepAdvancePayload_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	bool DoesCrafterHaveStationEffect(const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	struct FGameplayEventData CreateApplyStepEffectPayload(const struct FDataTableRowHandle& StepHandle, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	struct FGameplayEventData CreateEndCraftItemPayload(const struct FS_Crafting_CraftInProgress& CraftInProgress, bool bGrantUnclaimedOnly, const struct FGameplayAbilityPayloadHandle& AbilityPayload, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void HandleStepInProgress(const struct FS_Crafting_CraftInProgress& CraftInProgress, bool* Success, int32 CurrentCraftedQuantity, int32 CurrentClaimedQuantity, const struct FDynamicTypedStructs& CurrentStepData, const TArray<struct FDataTableRowHandle>& CurrentRecipeSteps, const struct FCraftingRecipe& CurrentRecipeDefinition, int32 CurrentStepIndex, const struct FCraftingRecipeReference& CurrentRecipeHandle, bool K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayEventData& CallFunc_CreateEndCraftItemPayload_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FGameplayEventData& CallFunc_CreateApplyStepEffectPayload_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleEndCraft(const struct FS_Crafting_CraftInProgress& CraftInProgress, const struct FGameplayEventData& CallFunc_CreateEndCraftItemPayload_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void LeaveCraftingStation(bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue);
	void HandleCraftInProgress(bool* Success, const struct FS_Crafting_CraftInProgress& CurrentCraftInProgress, bool CallFunc_HandleStepEnding_Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleStepInProgress_Success, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData);
	void InitializeFromEvent(const struct FGameplayEventData& EventData, bool* Success, class UBP_CraftingStationComponent_C* OptionalCraftingStationComponent, bool CallFunc_AbilityPayloadHasSoftObjectPath_ReturnValue, const struct FSoftObjectPath& CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue, const struct FCraftingRecipeReference& CallFunc_MakeCraftingRecipeReferenceFromSoftObjectPath_ReturnValue, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasBool_ReturnValue, class UBP_CraftingStationComponent_C* K2Node_DynamicCast_AsBP_Crafting_Station_Component, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& Temp_string_Variable, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_GetOwnershipObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable, class UObject* Temp_object_Variable, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_5, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_ActorHasTag_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void Cancelled_A0DFD6A14610A2F72F4E67BEBCD6CA1F(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_A0DFD6A14610A2F72F4E67BEBCD6CA1F(struct FGameplayAbilityTargetDataHandle& Data);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void EffectApplied();
	void ExecuteUbergraph_GA_CraftingStation_Enter(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeFromEvent_Success, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_HandleCraftInProgress_Success, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_DoesCrafterHaveStationEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_CraftingCreation_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_1, const struct FGameplayTagQuery& Temp_struct_Variable_1, const struct FGuid& CallFunc_GetActiveCraftingSessionId_SessionId);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FC (0x61C - 0x420)
// BlueprintGeneratedClass GA_StartCraftItem.GA_StartCraftItem_C
class UGA_StartCraftItem_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                InstigatingController;                             // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftStationActor;                                 // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              BaseRecipeID;                                      // 0x440(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        RecipeQuantity;                                    // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingStationComponent_C*        CraftStationComponent;                             // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemCrafted;                                       // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeToCraft;                                     // 0x4D0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                InstigatorUniqueID;                                // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_ItemInstanceQuantity>       RemovedItems;                                      // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UInventoryComponentBase*               Inventory;                                         // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingComponent_C*               InstigatingCraftingComponent;                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           RecipeToCraftSteps;                                // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_Crafting_Step_Definition           InitiatingStep;                                    // 0x590(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InitiatingStepHandle;                              // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               ConsumedMaterials;                                 // 0x5F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APawn*                                 CraftingPawn;                                      // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDebugComplete;                                    // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSlotsSelected;                                    // 0x609(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSlotsChanged;                                     // 0x60A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CraftInProgressId;                                 // 0x60C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_StartCraftItem_C* GetDefaultObj();

	void SendEssenceTelemetry(TArray<struct FInventoryEntry>& ExpendedEntries, class ANWXPlayerState* PlayerState, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess);
	bool ShouldDebugComplete(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue);
	void ValidateQuantityRequested(const struct FCraftingRecipeReference& Recipe, int32 QuantityRequested, int32* ValidatedQuantity, const struct FGameplayTagContainer& MetaTags, bool CallFunc_IsRecipeMultiCraftable_Success, int32 CallFunc_SelectInt_ReturnValue);
	void GetConsumedMaterials();
	void FireStationActivationEvent(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void FireCrafterActivationEvent(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void FireStepActivationEvents();
	TArray<struct FDataTableRowHandle> GetRecipeSteps(const struct FCraftingRecipeReference& RecipeReference, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void GetRequiredItemQuantitiesForRecipe(TArray<struct FInventoryEntry>* UsedMaterials, TArray<int32>* UsedQuantities, int32 OccuranceCount, TMap<struct FGuid, int32> OccurancesMap, TMap<struct FGuid, int32> CalculatedQuantityMap, const TArray<int32>& Quantities, const TArray<struct FInventoryEntry>& NewInputCounts, const struct FInventoryEntry& CurrentItemEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 K2Node_MathExpression_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 K2Node_MathExpression_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TMap<struct FGuid, int32> CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired, TArray<struct FInventoryEntry>& CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems, enum class EGetResult CallFunc_GetRequiredInputQuantitiesForRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void InitializeEventFromData(struct FGameplayEventData& EventData, bool* Success, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetCraftingRecipeInstancedFromTargetData_CrafterUniqueID, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeInstancedFromTargetData_RecipeReference, int32 CallFunc_GetCraftingRecipeInstancedFromTargetData_Quantity, TArray<struct FInventoryEntry>& CallFunc_GetCraftingRecipeInstancedFromTargetData_InputParts, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsSelected, bool CallFunc_GetCraftingRecipeInstancedFromTargetData_bSlotsChanged, class UBP_CraftingStationComponent_C* K2Node_DynamicCast_AsBP_Crafting_Station_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldDebugComplete_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_ValidateQuantityRequested_ValidatedQuantity, enum class EGetResult CallFunc_ValidateCraftingInputEntries_Branches, TArray<struct FInventoryEntry>& CallFunc_ValidateCraftingInputEntries_ReturnValue, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
	TArray<struct FS_ItemWithQuantity> MakeInputMaterialsArray(TArray<struct FItemDataReference>& InputMaterialItemIDs, TArray<int32>& InputMaterialItemQuantities, const TArray<struct FS_ItemWithQuantity>& ConstructedArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FItemDataReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_1, const struct FS_ItemWithQuantity& K2Node_MakeStruct_S_ItemWithQuantity, int32 CallFunc_Array_Add_ReturnValue);
	bool CanActivateAbilityFromEvent(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_CanCraftRecipe_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_StartCraftItem(int32 EntryPoint, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeEventFromData_Success, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_BreakSoftObjectPath_PathString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_CanActivateAbilityFromEvent_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TArray<struct FDataTableRowHandle>& CallFunc_GetRecipeSteps_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, enum class EGetResult CallFunc_TryFindRecipeVariant_Branches, const struct FCraftingRecipeReference& CallFunc_TryFindRecipeVariant_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_MathExpression_ReturnValue, const struct FGuid& CallFunc_NewGuid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_RemovePartsFromInventory_Success, const struct FGuid& CallFunc_GetActiveCraftingSessionId_SessionId, int32 CallFunc_SendGameplayEventToActor_ReturnValue_1, TMap<struct FGuid, int32> CallFunc_GetRequiredInputQuantitiesForRecipe_OutQuantitiesRequired, TArray<struct FInventoryEntry>& CallFunc_GetRequiredInputQuantitiesForRecipe_OutSlotItems, enum class EGetResult CallFunc_GetRequiredInputQuantitiesForRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}



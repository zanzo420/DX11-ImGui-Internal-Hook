#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F0 (0x590 - 0xA0)
// BlueprintGeneratedClass BP_CraftingStationComponent.BP_CraftingStationComponent_C
class UBP_CraftingStationComponent_C : public UCraftingStationComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_Crafting_CraftInProgress>   CraftsInProgress;                                  // 0xA8(0x10)(Edit, BlueprintVisible, Net, SaveGame, RepNotify, AdvancedDisplay)
	FMulticastInlineDelegateProperty_            DataUpdated;                                       // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftingStationDestroyed;                          // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftFailed;                                       // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CrafterEntered;                                    // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CrafterExited;                                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftQuantityIterated;                             // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DataTableLoaded;                                   // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_Station_Active;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           EffectHandleStationActive;                         // 0x128(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftingStationStepStarted;                        // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryEntry                       CurrentInputMaterial;                              // 0x140(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_Crafting_CraftInProgress           CurrentCraftInProgress;                            // 0x430(0xD8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	uint8                                        Pad_89CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CraftingStationComplete;                           // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TEST_CraftingStationStepCompleted;                 // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         RefinementModifierActive;                          // 0x530(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URealmTimerComponent*                  RealmTimerComponent;                               // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftInProgressPaused;                             // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftInProgressUnpaused;                           // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftCancelled;                                    // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FCraftingRecipeReference>      CurrentCraftingRecipes;                            // 0x570(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Server_CraftingRecipesUpdated;                     // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_CraftingStationComponent_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void ApplyGameplayEffectToActor(class UClass* GameplayEffectClass, double Level, const struct FGameplayEffectContextHandle& EffectContext, class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, float CallFunc_BP_ApplyGameplayEffectToSelf_Level_ImplicitCast);
	struct FGuid GetCraftInProgressID(int32& CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	bool FindCraftForID(const class FString& CrafterID, int32* CraftInProgressIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex);
	void ServerIncrementCraftClaimedQuantity(const class FString& CrafterID, int32& ClaimedQuantity, bool CallFunc_IncrementCraftClaimedQuantityByID_Success, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void GetCraftingRecipes(TArray<struct FCraftingRecipeReference>* CurrentCraftingRecipes);
	void RemoveRecipesFromBench(class UEnvironmentalInfluenceDataDisciplines* DisciplineInfluence, const TArray<struct FCraftingRecipeReference>& RecipeReferences, const struct FCraftingRecipeReference& LCraftingRecipeRef, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipeReferences_OutRecipeReferences, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnRep_CurrentCraftInProgress();
	void AddNewRecipesToBench(class UEnvironmentalInfluenceDataDisciplines*& DisciplineInfluence, const TArray<struct FCraftingRecipeReference>& RecipeReferences, bool AddedRecipe, const struct FCraftingRecipeReference& LCraftingRecipeRef, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipeReferences_OutRecipeReferences, int32 CallFunc_Array_AddUnique_ReturnValue);
	struct FGuid GetCraftInProgressIDForCrafter(const class FString& CrafterID, bool* bSuccess, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData);
	void RefundUnusedItems(class ANWXPlayerController* CancellingController, const struct FS_Crafting_CraftInProgress& CraftInProgress, const struct FInventoryEntry& CurrentItemToRefund, const TArray<struct FInventoryEntry>& ItemsToRefund, const TArray<struct FInventoryEntry>& InputMaterials, double RefundRatio, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& Temp_struct_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, int32 Temp_int_Loop_Counter_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_MathExpression_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double K2Node_MathExpression_ReturnValue_1);
	void ValidateCancelCraft(const class FString& CancellingID, bool* bCancelValid, const struct FS_Crafting_CraftInProgress& CraftToCancel, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void CancelCraft(class ANWXPlayerController* CancellingController, const struct FS_Crafting_CraftInProgress& CachedCraftData, const class FString& CancellingID, class APawn* CancellingPawn, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, bool CallFunc_RemoveCraftInProgressData_bSuccess, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_ValidateCancelCraft_bCancelValid, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void UnpauseAllCraftsInProgress(bool* Success, double RealTimeInSecs, const struct FDynamicTypedStructs& NewStepData, double NewRecipeStartTime, double NewRefinementStartTime, float CurrentRecipeTime, const class FString& UnpauseCrafterID, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URealmTimerComponent* CallFunc_GetRealmTimer_RealmTimerComponent, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FS_Crafting_Step_RefinementTimer& K2Node_SetFieldsInStruct_StructOut, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct_1, bool CallFunc_GetStructByType_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, float K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void PauseAllCraftsInProgress(double RealTimeInSec, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URealmTimerComponent* CallFunc_GetRealmTimer_RealmTimerComponent, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void GetRealmTimer(class URealmTimerComponent** RealmTimerComponent, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetIsRefinementModifierActive(bool IsActive, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void GetCurrentRefinementMod(struct FCraftingRecipeReference& RecipeReference, double* Time, const struct FRefinementTimeModifiers& CurrentModifier, const struct FCraftingRecipeReference& Recipe, double TimerMod, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, enum class ERefinementTimeModifer Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FRefinementTimeModifiers& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ERefinementTimeModifer CallFunc_GetRefinementModifierType_ReturnValue, float CallFunc_GetRefinementModifier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_DoesRecipeSatisfyConstraint_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_INCREASE_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void RestoreCraftsFromPersistence(int32 CurrentIndex, int32 Temp_int_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetRecipeSteps_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	TArray<struct FDataTableRowHandle> GetRecipeSteps(const struct FCraftingRecipeReference& RecipeReference, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void LoadDataFromTable(const struct FDataTableRowHandle& RowHandle, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCraftingData_IsValid, class UStructureCraftingData* CallFunc_GetCraftingData_OutCraftingData, TSet<struct FCraftingRecipeReference> CallFunc_GetRecipesFromCraftingData_OutRecipes, bool CallFunc_GetRecipesFromCraftingData_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_Set_ToArray_Result);
	void ApplyStationActiveEffectToStation(const struct FGameplayTagContainer& CombinedDisciplineTags, class UAbilitySystemComponent* Abs, class AActor* CraftingStationActor, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes, const struct FGameplayTagContainer& CallFunc_GetDisciplineTagsForCraftingRecipes_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AddGrantedTags_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void IncrementCraftClaimedQuantity(class AController* Controller, int32 ClaimedQuantity, bool* Success, class APawn* Pawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_IncrementCraftClaimedQuantityByID_Success);
	void IncrementCraftClaimedQuantityByID(const class FString& CrafterID, int32 ClaimedQuantity, bool* Success, int32 CraftIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, int32 K2Node_MathExpression_ReturnValue);
	void SetCraftClaimedQuantityByID(const class FString& CrafterID, int32 ClaimedQuantity, bool* Success, int32 CraftIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex);
	void RemoveAvailableCraftingDiscipline(class UEnvironmentalInfluenceDataDisciplines* DisciplineInfluence, const struct FGameplayTag& LNewDiscipline, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void AddAvailableCraftingDiscipline(class UEnvironmentalInfluenceDataDisciplines* DisciplineInfluence, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void SetCraftClaimedQuantity(class AController* Controller, int32 ClaimedQuantity, bool* Success, class APawn* Pawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_SetCraftClaimedQuantityByID_Success);
	void SetCurrentQuantityByID(const class FString& CrafterID, int32 NewQuantity, bool* Success, int32 CurrentCraftIndex, const struct FS_Crafting_CraftInProgress& CurrentCraft, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	void SetCraftStatusByID(const class FString& CrafterID, enum class E_Crafting_Fabrication_Status NewStatus, bool* Success, const struct FS_Crafting_CraftInProgress& CraftData, int32 CraftIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	void SetCurrentStepIndexForCraft(const class FString& CrafterID, int32 NewStepIndex, bool* Success, const struct FCraftingRecipe& CurrentRecipe, const struct FS_Crafting_CraftInProgress& CurrentCraftData, int32 CurrentCraftIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_MathExpression_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCraftForID(const class FString& CrafterID, bool* Success, struct FS_Crafting_CraftInProgress* CraftInProgressData, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	void SetStepData(const class FString& CrafterID, const struct FDynamicTypedStructs& StepData, bool* Success, int32 CurrentCraftInProgressIndex, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const class FString& CallFunc_GetStackTraceString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetCraftStatus(class AController* Controller, enum class E_Crafting_Fabrication_Status Status, bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex);
	void RemoveCraftInProgressData(class AController* Controller, bool* bSuccess, const class FString& UniqueID, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnRep_CraftsInProgress(bool CallFunc_IsDedicatedServer_ReturnValue);
	int32 GetClaimedQuantity(class AController* Controller, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue);
	struct FCraftingRecipeReference GetCurrentRecipeID(class AController* Controller, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue);
	void GetCurrentStatus(class AController* Controller, bool* Success, enum class E_Crafting_Fabrication_Status* Status, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex);
	int32 GetCurrentStep(class AController* Controller, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue);
	struct FS_Crafting_CraftInProgress GetCurrentCraftData(class AController* Controller, bool* Success, const class FString& CrafterID, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	void ExitCraftingStation(class AController* Controller, class UBP_CraftingComponent_C* CraftingComponent, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FinishCraftFailure(class AController* Controller, const struct FS_Crafting_CraftInProgress& FailedCraftInProgress, int32 CurrentCraftInProgressIndex, const class FString& CrafterID, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, int32 CallFunc_SendGameplayEventToActor_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void FindCraftForID_BP(const class FString& CrafterID, bool* Success, int32* CraftInProgressIndex, bool FoundCraft, int32 FoundCraftInProgressIndex, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void FinishCraftSuccess(class AController* Controller, bool* Success, bool TemporaryEndItemGranted, class APawn* CrafterPawn, class UAbilitySystemComponent* CrafterAbilitySystemComponent, const struct FGameplayAbilitySpecHandle& TemporaryEndCraftItemHandle, const TArray<struct FInventoryEntry>& InputMaterials, int32 CurrentCraftQuantity, const struct FCraftingRecipeReference& CurrentRecipeReference, int32 CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CraftInProgress, const class FString& CrafterID, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void FinishCraft(class AController* Controller, bool Success, bool CallFunc_FinishCraftSuccess_Success);
	void StartNewCraft(const class FString& Crafter, const struct FCraftingRecipeReference& RecipeReference, int32 RequestedQuantity, TArray<struct FInventoryEntry>& InputParts, const struct FGuid& CraftId, const struct FS_Crafting_CraftInProgress& NewCraft, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, const struct FS_Crafting_CraftInProgress& K2Node_MakeStruct_S_Crafting_CraftInProgress, int32 CallFunc_Array_Add_ReturnValue);
	void OnLinkedReferencesRestored();
	void OnPersistentDataRestored();
	void SERVER_DeleteInProgressCrafts(class ABP_PlayerController_C* PlayerController);
	void Server_PauseAllCraftsInProgress();
	void Server_UnpauseAllCraftsInProgress();
	void Request_CancelCraft(class ANWXPlayerController* CraftingController);
	void ExecuteUbergraph_BP_CraftingStationComponent(int32 EntryPoint, class ANWXPlayerController* K2Node_CustomEvent_CraftingController, class ABP_PlayerController_C* K2Node_CustomEvent_PlayerController, bool CallFunc_RemoveCraftInProgressData_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_UnpauseAllCraftsInProgress_Success);
	void Server_CraftingRecipesUpdated__DelegateSignature();
	void CraftCancelled__DelegateSignature(const struct FGuid& CancelledCraft);
	void CraftInProgressUnpaused__DelegateSignature();
	void CraftInProgressPaused__DelegateSignature();
	void TEST_CraftingStationStepCompleted__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle);
	void CraftingStationComplete__DelegateSignature(bool bSuccess);
	void CraftingStationStepStarted__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle);
	void CraftQuantityIterated__DelegateSignature(const class FString& CrafterID, const struct FGuid& CraftInProgressId, const struct FCraftingRecipeReference& RecipeInProgress, int32 CurrentQuantity, int32 QuantityRequested);
	void CrafterExited__DelegateSignature(class APawn* Pawn, const class FString& UniqueID);
	void CrafterEntered__DelegateSignature(class APawn* Character, const class FString& CrafterID);
	void CraftFailed__DelegateSignature();
	void CraftingStationDestroyed__DelegateSignature(class UBP_CraftingStationComponent_C* CraftingStation);
	void DataUpdated__DelegateSignature();
};

}


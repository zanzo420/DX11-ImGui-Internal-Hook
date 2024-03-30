#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E8 - 0x3E0)
// BlueprintGeneratedClass BP_InventoryComponent.BP_InventoryComponent_C
class UBP_InventoryComponent_C : public UInventoryComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_InventoryComponent_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> StorageBox, TScriptInterface<class IItemContainer> Backpack, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_2, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_3, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3);
	TScriptInterface<class IItemContainer> GetDefaultContainer(TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	bool HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> StorageBox, TScriptInterface<class IItemContainer> Backpack, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_1, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	void SendEssenceTelemetry(class AActor* SourceActor, const struct FInventoryEntry& Item, bool bIsSink, class ANWXPlayerState* PlayerState, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue);
	void ConsumeItem(const struct FInventoryEntry& ItemEntry, class ANWXPlayerCharacter* Character, enum class EGetResult CallFunc_GetCurrentContainerForItem_OutBranch, TScriptInterface<class IItemContainer> CallFunc_GetCurrentContainerForItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveItem_ReturnValue);
	void DoesOwnerHaveRestriction(const struct FGameplayTag& Tag, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsStateActive_ReturnValue);
	void CanCheat(bool* CanCheat, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_PlayerHasEntitlement_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void TransferItem(const struct FItemContainerHandle& OldContainerHandle, const struct FItemContainerHandle& NewContainerHandle, const struct FGuid& ItemToTransfer, int32 QuantityToTransfer, class AActor* SourceActor, bool* Success, TScriptInterface<class IItemContainer> CallFunc_GetContainerFromHandle_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, TScriptInterface<class IItemContainer> CallFunc_GetContainerFromHandle_ReturnValue_1, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue);
	void DEBUG_AddInventoryEntryToBackpack(const struct FInventoryEntry& InventoryEntry);
	void UI_RemoveItemByID(const struct FGuid& InstanceID, int32 Quantity, enum class EPlayerInventoryContainerType ParentContainerType);
	void UI_DropItem(const struct FTransform& CameraTransform, const struct FGuid& InstanceID, enum class EPlayerInventoryContainerType ContainerType, int32 DropQuantity);
	void UI_TransferItem(TScriptInterface<class IItemContainer> OldContainerHandle, TScriptInterface<class IItemContainer> NewContainerHandle, const struct FInventoryEntry& ItemToTransfer, class AActor* SourceActor, class AActor* TargetActor, bool IsStoringItem);
	void UI_ConsumeItem(const struct FInventoryEntry& Item_Entry, class ANWXPlayerCharacter* Character);
	void UI_RepairItem(const struct FInventoryEntry& ItemEntry);
	void UI_ExtractItem(const struct FGuid& InstanceID, enum class EPlayerInventoryContainerType ContainerType, int32 Quantity);
	void UI_RepairAllItems();
	void ExecuteUbergraph_BP_InventoryComponent(int32 EntryPoint, bool CallFunc_DoesOwnerHaveRestriction_Result, bool CallFunc_DoesOwnerHaveRestriction_Result_1, const struct FGuid& K2Node_CustomEvent_InstanceId, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ContainerType, int32 K2Node_CustomEvent_Quantity, enum class EGetResult CallFunc_GetContainerForContainerType_OutBranch, TScriptInterface<class IItemContainer> CallFunc_GetContainerForContainerType_ReturnValue, bool CallFunc_DoesOwnerHaveRestriction_Result_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, const struct FInventoryEntry& K2Node_CustomEvent_Item_Entry, class ANWXPlayerCharacter* K2Node_CustomEvent_Character, TScriptInterface<class IItemContainer> K2Node_CustomEvent_OldContainerHandle, TScriptInterface<class IItemContainer> K2Node_CustomEvent_NewContainerHandle, const struct FInventoryEntry& K2Node_CustomEvent_ItemToTransfer, class AActor* K2Node_CustomEvent_SourceActor, class AActor* K2Node_CustomEvent_TargetActor, bool K2Node_CustomEvent_IsStoringItem, const struct FTransform& K2Node_CustomEvent_CameraTransform, const struct FGuid& K2Node_CustomEvent_InstanceId_1, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ContainerType_1, int32 K2Node_CustomEvent_DropQuantity, bool CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGuid& K2Node_CustomEvent_InstanceId_2, int32 K2Node_CustomEvent_Quantity_1, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ParentContainerType, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, enum class EGetResult CallFunc_GetContainerForContainerType_OutBranch_1, TScriptInterface<class IItemContainer> CallFunc_GetContainerForContainerType_ReturnValue_1, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanCheat_CanCheat, const struct FInventoryEntry& K2Node_CustomEvent_InventoryEntry, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool CallFunc_DoesOwnerHaveRestriction_Result_3, bool CallFunc_DoesOwnerHaveRestriction_Result_4, bool CallFunc_DoesOwnerHaveRestriction_Result_5);
};

}


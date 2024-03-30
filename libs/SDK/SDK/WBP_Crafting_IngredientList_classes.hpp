#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x430 (0x850 - 0x420)
// WidgetBlueprintGeneratedClass WBP_Crafting_IngredientList.WBP_Crafting_IngredientList_C
class UWBP_Crafting_IngredientList_C : public UNWXCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Search;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Close;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ico_slotType;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         SearchText;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Description;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_header;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_List;                                           // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnIngredientEntrySelected;                         // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCraftingConstraintSlot               SlotConstraints;                                   // 0x478(0x88)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	struct FTimerHandle                          TimerHandle;                                       // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnIngredientEntryFocusReceived;                    // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SlotIndex;                                         // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               SlottedItems;                                      // 0x520(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UNWXMenuDataEntry*                     CurrentlyDisplayedEntry;                           // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnIngredientEntryHovered;                          // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_1E1E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       FilterCraftingItemEntry;                           // 0x550(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClose;                                           // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Crafting_IngredientList_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Crafting_IngredientListEntry_C* K2Node_DynamicCast_AsWBP_Crafting_Ingredient_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void AddNoneEntry(class UWBP_Crafting_IngredientListEntry_C* LNoneEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Crafting_IngredientListEntry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnListEntryHovered(const struct FInventoryEntry& InventoryEntry, bool IsHovered);
	void TryGetPreviouslySlottedEntry(int32 CurrentSlotIndex, struct FInventoryEntry* InventoryEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, int32 CallFunc_Subtract_IntInt_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, const struct FInstanceData_AttributeModifiers& CallFunc_TryGetItemAttributeModifiers_Modifiers, enum class EGetResult CallFunc_TryGetItemAttributeModifiers_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInventoryEntry& CallFunc_GetItemEntryFromModifier_ReturnValue);
	void ValidateUpgradeItems(TArray<struct FInventoryEntry>& ConstraintItems, TArray<struct FInventoryEntry>& RelevantItems, const TArray<struct FInventoryEntry>& ItemsToTransfer, const struct FInventoryEntry& PreviouslySlottedIngredient, int32 CurrentSlotIndex, const struct FInventoryEntry& CurrentSlottedIngredient, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_CompareItemCharacteristics_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, const struct FInventoryEntry& CallFunc_Array_Get_Item_2, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CompareItemQualities_ReturnValue, bool CallFunc_CompareItemCharacteristics_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FInventoryEntry& CallFunc_TryGetPreviouslySlottedEntry_InventoryEntry, int32 Temp_int_Array_Index_Variable_3, const struct FInventoryEntry& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_CompareItemCharacteristics_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void DisplayEmptyListText(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void UpdateSearch(bool IsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void UnbindFromIngredientEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Crafting_IngredientListEntry_C* K2Node_DynamicCast_AsWBP_Crafting_Ingredient_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void ShouldFilterItemIn(struct FInventoryEntry& Item, bool* ShouldDisplayItem, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void LoadSlotArt(const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void AddIngredientEntry(struct FInventoryEntry& Item, bool MeetsConstaintReqs, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ShouldFilterItemIn_ShouldDisplayItem, class UWBP_Crafting_IngredientListEntry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SearchTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue);
	void OnIngredientClicked(const struct FInventoryEntry& ItemId, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FInventoryEntry& K2Node_SetFieldsInStruct_StructOut);
	void OnIngredientFocusReceived(const struct FInventoryEntry& ItemEntry);
	void Initialize(const TArray<struct FInventoryEntry>& OtherEntries, const TArray<struct FInventoryEntry>& ConstraintEntries, bool HasEntryMatchingSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void BndEvt__SearchHere_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_Crafting_IngredientList_bu_close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Crafting_IngredientList(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnClose__DelegateSignature();
	void OnIngredientEntryHovered__DelegateSignature(const struct FInventoryEntry& InventoryEntry, bool IsHovered);
	void OnIngredientEntryFocusReceived__DelegateSignature(const struct FInventoryEntry& InventoryEntry);
	void OnIngredientEntrySelected__DelegateSignature(const struct FInventoryEntry& InventoryEntry);
};

}



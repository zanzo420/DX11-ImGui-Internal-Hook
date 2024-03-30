#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB88 (0xED0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CraftingItem_Preview_Stats.WBP_CraftingItem_Preview_Stats_C
class UWBP_CraftingItem_Preview_Stats_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AttributeBox;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          AttributeMultiplierBox;                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RealmAttributeBox;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SC_PreviewStats;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_EmptySlotHint;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ItemLevel;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Itemname;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_AttributesAndLabel;                             // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_AttributesMultipliersAndLabel;                  // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Details;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_RealmCardInfo;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Stats;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             WBP_Common_Button_Base;                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_AttributeBox;                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryEntry                       InventoryItemEntry;                                // 0x3C0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DesiredQuantity;                                   // 0x6B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9732[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeId;                                          // 0x6C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     ComparisonEntry;                                   // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9733[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       PreviousInventoryItemEntry;                        // 0x740(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayAttribute, float>       PreviousAttribute_Values;                          // 0xA30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          SelectedColor;                                     // 0xA80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NormalColor;                                       // 0xA90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    LCurrentAttribute;                                 // 0xAA0(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<struct FGameplayAttribute, float>       AttributeModifierMultipliers;                      // 0xAD8(0x50)(Edit, BlueprintVisible)
	TMap<struct FGameplayAttribute, double>      LOutAttributes;                                    // 0xB28(0x50)(Edit, BlueprintVisible)
	uint8                                        Pad_9735[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       FilterInventoryItemEntry;                          // 0xB80(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<struct FGameplayAttribute, double>      LFilterAttributes;                                 // 0xE70(0x50)(Edit, BlueprintVisible)
	class AActor*                                Interaction_Actor;                                 // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStructureTraitComponent*              TraitComponent;                                    // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingItem_Preview_Stats_C* GetDefaultObj();

	void RefreshRealmCardAttributes(const struct FItemData_RealmCard& LRealmPower, class FText Temp_text_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetRealmCardAssetPowerLevel_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Initialize(class APlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IControllerInteractionInterface> K2Node_DynamicCast_AsController_Interaction_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void FilterAttributes(TMap<struct FGameplayAttribute, double> AttributeMap, TMap<struct FGameplayAttribute, double>* FilteredMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayAttribute>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeValues_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TMap<struct FGameplayAttribute, double> K2Node_VariableSet_LFilterAttributes_ImplicitCast);
	void RefreshAttributeMultipliers(class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TMap<struct FGameplayAttribute, double> CallFunc_FilterAttributes_FilteredMap, bool Temp_bool_Variable, TArray<struct FGameplayAttribute>& CallFunc_Map_Keys_Keys, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FGameplayAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_TryGetUIDataForAttribute_bSuccess, const struct FGameplayAttributeUIData& CallFunc_TryGetUIDataForAttribute_OutData, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeModifierMultipliers_ReturnValue, TMap<struct FGameplayAttribute, double> CallFunc_FilterAttributes_AttributeMap_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast);
	void UpdateTitle(class FText ItemName, class FText CallFunc_GetItemName_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void RefreshItemLevel(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetItemLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void CheckAttributeDeltas(struct FGameplayAttribute& Stat, double& CurrentAttributeValue, class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* AttributeWidget, const struct FSlateColor& DefaultTintColor, double Delta, TMap<struct FGameplayAttribute, double> LastSelectedItemStats, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeValues_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, TMap<struct FGameplayAttribute, double> K2Node_VariableSet_LastSelectedItemStats_ImplicitCast);
	void Refresh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UCraftingResultObject* CallFunc_Array_Get_Item, class UCraftingResult_CraftItem* K2Node_DynamicCast_AsCrafting_Result_Craft_Item, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_IsItemResource_Return_Value, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEntryResource_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue);
	void UpdatePreviousAttributeList(TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeValues_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateRecipeTitle(struct FCraftingRecipeReference& RecipeReference);
	void ClearItemEntry();
	void UpdateQuantity(int32 NewQuantity, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1);
	void Update_Preview(const struct FInventoryEntry& InInventoryItemEntry, int32 Quantity, const struct FCraftingRecipeReference& Recipe, class UNWXMenuDataEntry* InComparisonEntry, bool CompareWithPrevious, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshItemAttributes(const struct FGameplayAttributeUIData& LAttributeUIData, TMap<struct FGameplayAttribute, double> LPreviousAttributeLevels, const struct FGameplayAttribute& LCurrentAttribute, TMap<struct FGameplayAttribute, double> LAttributeLevels, class UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EAttributeValueType CallFunc_GetValueTypeForItem_ValueType, TArray<struct FGameplayAttribute>& CallFunc_Map_Keys_Keys, const struct FGameplayAttribute& CallFunc_Array_Get_Item, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TryGetUIDataForAttribute_bSuccess, const struct FGameplayAttributeUIData& CallFunc_TryGetUIDataForAttribute_OutData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeValues_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TMap<struct FGameplayAttribute, double> K2Node_VariableSet_LAttributeLevels_ImplicitCast);
	void Construct();
	void Destruct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_CraftingItem_Preview_Stats(int32 EntryPoint, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3BC (0x3E4 - 0x28)
// BlueprintGeneratedClass BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C
class UBP_CollectedVisualMeshData_C : public UObjectWithWorld
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_EquipSlotType                   EquipmentSlotType;                                 // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x40(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FItemData_RegionHiding                SkinHidingOverrides;                               // 0xC0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EquipmentSlotTag;                                  // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FInstanceData_RegionCustomization     InstancedData;                                     // 0xF0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterCustomization_UnprocessedMeshData UnprocessedMeshData;                               // 0x128(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterCustomization_UnloadedMeshData UnloadedMeshData;                                  // 0x200(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterCustomization_LoadedMeshData LoadedMeshData;                                    // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bIsLoaded;                                         // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CharacterCustomization_Component_C* OwningCustomizationComp;                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AsyncAssetLoader_C*                AsyncLoader;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DataChanged;                                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHasVisualMeshData;                                // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasEquippableData;                                // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasValidData;                                     // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMetalRegions, double>       MetalOverrides;                                    // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ECostumeRegions, struct FResourceCustomizationData> MaterialOverridesUnloaded;                         // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ECostumeRegions, struct FResourceCustomizationData_Loaded> MaterialOverridesLoaded;                           // 0x330(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EHatType                          HatType;                                           // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasHatType;                                       // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EGemRegions, double>         GemOverrides;                                      // 0x388(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        RandomSeed;                                        // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasRegionHiding;                                  // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TierValue;                                         // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CollectedVisualMeshData_C* GetDefaultObj();

	void GetTierValue(int32* TierValue);
	void HasRegionHiding(bool* bHasRegionHiding);
	void GetRandomSeed(int32* OutRandomSeed);
	void GetGemOverrides(TMap<enum class EGemRegions, double>* OutGemOverrides);
	void TryGetHatType(bool* bHasHatType, enum class EHatType* OutHatType);
	void InitializeRegionHiding(const struct FItemData& ItemData, const struct FItemData_RegionHiding& CallFunc_TryGetItemDataRegionHiding_OutData, enum class EGetResult CallFunc_TryGetItemDataRegionHiding_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void GetMaterialOverrides(TMap<enum class ECostumeRegions, struct FResourceCustomizationData_Loaded>* MaterialOverridesLoaded);
	void GetMetalOverrides(TMap<enum class EMetalRegions, double>* MetalOverrides);
	void InitializeEquippableData(const struct FItemData& ItemData, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, enum class E_EquipSlotType CallFunc_GetEquipmentSlotTypeForTag_SlotType, bool K2Node_SwitchEnum_CmpSuccess);
	void GetItemDisplayName(class FString* ItemName, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const class FString& CallFunc_GetDefaultItemName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void AddVisualMesh(const struct FItemData_VisualMesh& VisualMesh, const struct FCharacterCustomization_UnprocessedMeshData& CurrentUnprocessedData);
	void HasFirstPersonAppearanceMesh(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void HasThirdPersonAppearanceMesh(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void GetLoadedMeshData(struct FCharacterCustomization_LoadedMeshData* LoadedMeshData);
	void AssignRegionMaterialParameters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class ECostumeRegions>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ECostumeRegions CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FResourceCustomizationData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FResourceCustomizationData_Loaded& K2Node_MakeStruct_ResourceCustomizationData_Loaded);
	void AssignMeshAndAnimData(struct FCharacterCustomization_LoadedMeshData& LoadedData, const struct FCharacterCustomization_UnloadedMeshData& UnloadedData, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess);
	void GetUnloadedMeshAnimationBlueprint(TSoftClassPtr<class UAnimInstance>* MeshAnimationBlueprint);
	void GetUnloadedAppearanceMesh(TSoftObjectPtr<class USkeletalMesh>* AppearanceMesh);
	void ClassesToLoad(TArray<TSoftClassPtr<class UObject>>* Classes, TArray<TSoftClassPtr<class UObject>>& K2Node_MakeArray_Array);
	void AssetsToLoad(TArray<TSoftObjectPtr<class UObject>>* Assets, const TArray<TSoftObjectPtr<class UObject>>& AllAssets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FResourceCustomizationData>& CallFunc_Map_Values_Values, const struct FResourceCustomizationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AssignLoadedData(int32 CurrentIndex, const struct FCharacterCustomization_LoadedMeshData& CurrentLoadedEntry, const struct FCharacterCustomization_UnloadedMeshData& CurrentUnloadedEntry);
	void GetOwnerName(class FString* Name, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerOrNPCName_Name);
	void GetDebugInfo(class FString* DebugInfo, class UMaterialInterface* LoadedMaterial, const TArray<class FString>& InstancedSlotStrings, const TArray<class FString>& FPMaterialNames, const class FString& FPMeshName, const class FString& TPMeshName, class FText BaseData, class FText ItemName, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class USkeletalMesh* CallFunc_GetAppearanceMesh_AppearanceMesh, const class FString& CallFunc_GetJoinedStringsOrNone_Joined, const class FString& CallFunc_FormatSoftRefName_Name, const class FString& CallFunc_IndentString_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetItemDisplayName_ItemName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const class FString& CallFunc_GetJoinedStringsOrNone_Joined_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_IndentString_OutString_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_4, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void ApplyInstancedData(const struct FEquippedInstanceData& InstancedData, int32 CurrentIndex, enum class EMetalRegions Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EMetalRegions Temp_byte_Variable_1, const struct FMaterialRegionInstanceData& CallFunc_Array_Get_Item, enum class EGemRegions Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, enum class ECostumeRegions Temp_byte_Variable_3, enum class ECostumeRegions Temp_byte_Variable_4, enum class ECostumeRegions Temp_byte_Variable_5, enum class ECostumeRegions Temp_byte_Variable_6, enum class ECostumeRegions Temp_byte_Variable_7, enum class ECostumeRegions Temp_byte_Variable_8, int32 Temp_int_Variable_1, enum class ECostumeRegions K2Node_Select_Default, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCharacterAppearance_GemSwatch& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FCharacterAppearance_MetalSwatch& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class EMetalRegions K2Node_Select_Default_1, double CallFunc_Map_Add_Value_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast_1);
	void GetRegionHiding(struct FItemData_RegionHiding* RegionHiding);
	void InitializeVisualMeshData(const struct FItemData& ItemData, const struct FItemData_VisualMesh& CallFunc_TryGetItemDataVisualMesh_OutData, enum class EGetResult CallFunc_TryGetItemDataVisualMesh_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCustomization_UnprocessedMeshData& K2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData);
	void SetInstancedData(const struct FEquippedInstanceData& InstancedData);
	void SelectAppearanceMeshes(TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> FirstPersonMeshMap, TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> ThirdPersonMeshMap, bool HasFirstPersonMaterialOverrides, TSoftObjectPtr<class USkeletalMesh>* FirstPersonMesh, TSoftObjectPtr<class USkeletalMesh>* ThirdPersonMesh, TSoftObjectPtr<class USkeletalMesh> ThirdPerson, TSoftObjectPtr<class USkeletalMesh> FirstPerson, enum class EBodyType OwnerBodyType, const class FString& CallFunc_GetItemDisplayName_ItemName, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetOwnerName_Name, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, enum class EBodyType CallFunc_GetBodyType_BodyType);
	void ProcessMeshData(TSoftObjectPtr<class USkeletalMesh> SelectedMesh, int32 CurrentIndex, const struct FCharacterCustomization_UnprocessedMeshData& CurrentUnprocessedData, enum class EBodyType CallFunc_GetBodyType_BodyType, const struct FCharacterCustomization_UnloadedMeshData& K2Node_MakeStruct_CharacterCustomization_UnloadedMeshData, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void CheckForMissingData(bool* bValidData, const class FString& CallFunc_GetItemDisplayName_ItemName, const class FString& CallFunc_GetItemDisplayName_ItemName_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void LoadAppearance(TArray<TSoftClassPtr<class UObject>>& CallFunc_ClassesToLoad_Classes, TArray<TSoftObjectPtr<class UObject>>& CallFunc_AssetsToLoad_Assets, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckForMissingData_bValidData);
	void IsLoaded(bool* bIsLoaded);
	void GetAppearanceMesh(class USkeletalMesh** AppearanceMesh);
	void GetEquipmentSlotTag(struct FGameplayTag* Tag);
	void GetEquipSlot(enum class E_EquipSlotType* EquipSlot);
	void InitializeFromTable(const struct FItemDataReference& ItemReference, class UBP_CharacterCustomization_Component_C* Owner, class UBP_AsyncAssetLoader_C* AsyncLoader, const struct FItemData& ItemData, bool CallFunc_IsValid_ReturnValue, const struct FItemData_HatType& CallFunc_TryGetItemDataHatType_OutData, enum class EGetResult CallFunc_TryGetItemDataHatType_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
	void OnLoaded();
	void ExecuteUbergraph_BP_CollectedVisualMeshData(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void DataChanged__DelegateSignature(class UBP_CollectedVisualMeshData_C* CollectedData);
};

}



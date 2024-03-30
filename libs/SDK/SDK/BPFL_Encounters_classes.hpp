#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Encounters.BPFL_Encounters_C
class UBPFL_Encounters_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Encounters_C* GetDefaultObj();

	void GetRandomRewardType(TArray<enum class EEncounterRewardType>& Rewards, class UObject* __WorldContext, enum class EEncounterRewardType* Reward, bool CallFunc_Array_IsNotEmpty_ReturnValue, enum class EEncounterRewardType CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TArray<enum class EEncounterRewardType>& K2Node_MakeArray_Array, enum class EEncounterRewardType CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1);
	void GetRewardTypesFrom_RealmTags(const struct FGameplayTagContainer& RealmTags, class UObject* __WorldContext, TArray<enum class EEncounterRewardType>* EncounterRewardType, const TArray<enum class EEncounterRewardType>& LOCAL_EncounterRewardTypes, enum class EEncounterRewardType Temp_byte_Variable, enum class EEncounterRewardType Temp_byte_Variable_1, enum class EEncounterRewardType Temp_byte_Variable_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, enum class EEncounterRewardType Temp_byte_Variable_3, enum class EEncounterRewardType Temp_byte_Variable_4, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_4);
	void CreateEncounterSFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void CreateEncounterVFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterVFXInternal_NiagaraSystem, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void Get_Encounter_Palette_AVFXTag(class AEncounterBase* Encounter, class UObject* __WorldContext, struct FGameplayTag* AVFXTag, enum class EFaction Faction, enum class EPlugPalette Palette, const struct FGameplayTag& CallFunc_GetEncounterPaletteAVFXTag_ReturnValue, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue);
	void CreateEncounterSFXInternal(const struct FS_EncounterAudio& Audio, const struct FS_EncounterAVFXParams& EncounterParams, class UObject* __WorldContext, class UScopedAkComponent* ScopedAkComp, class UAkAudioEvent* StopEvent, class UAkAudioEvent* AudioEvent, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void CreateEncounterVFXInternal(const struct FS_EncounterVFXPresentation& VFX, struct FS_EncounterAVFXParams& EncounterParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned);
	void CreateEncounterAVFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData_1, bool CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterVFXInternal_NiagaraSystem);
	void CreateAffinityTableMap(TArray<struct FGameplayTag>& RowTags, const struct FGameplayTag& ColumnTag, class UObject* __WorldContext, TMap<struct FGameplayTag, struct FS_EncounterPresentation>* AffinityMap, const struct FGameplayTag& RowTag, TMap<struct FGameplayTag, struct FS_EncounterPresentation> LocalAffinityMap, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData_1, const struct FS_EncounterPresentation& K2Node_MakeStruct_S_EncounterPresentation);
	void IsPOITagValidMatch(const struct FGameplayTagQuery& TagRequirements, const struct FGameplayTagContainer& POITags, class UObject* __WorldContext, bool* ValidMatch, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
};

}


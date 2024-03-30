#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x170 - 0xA0)
// BlueprintGeneratedClass BP_VFX_Ambience_Manager.BP_VFX_Ambience_Manager_C
class UBP_VFX_Ambience_Manager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       LeafUpdateFrequencyInSecs;                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 LeafSetClassifier;                                 // 0xB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UNiagaraComponent*>             LeafSystemPool;                                    // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LeafSystemPoolSize;                                // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         LeafSystemTemplate;                                // 0xE8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               LeafExtentsScale;                                  // 0x110(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLeafPoolIndex;                              // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinimumLeafCenterHeight;                           // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrecipitationUpdateFrequencyInSecs;                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PrecipitationSystem;                               // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       OccluderUpdateFrequencyInSecs;                     // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PFX_LightningPosition;                             // 0x150(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambience_Manager_C*                CachedBPAmbienceManager;                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VFX_Ambience_Manager_C* GetDefaultObj();

	void GetBPAmbienceManager(class UBP_Ambience_Manager_C** BPAmbienceManager, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, class UBP_Ambience_Manager_C* K2Node_DynamicCast_AsBP_Ambience_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void InitializePrecipitation(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UStructureOcclusionSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
	void AllocateLeafSystems(int32 Temp_int_cached_index__Necessary_in_case_of_async_executions_down_the_chain_Variable, int32 Temp_int_Looper_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void InitializeLeafEmitters(int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void BindGPUOcclusionMatrix(class UTexture* FakeTexture, const struct FMatrix& OcclusionMatrix, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UStructureOcclusionSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FMatrix& CallFunc_GetOcclusionMatrix_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_2, float K2Node_MakeStruct_R_ImplicitCast_2, float K2Node_MakeStruct_G_ImplicitCast_2, float K2Node_MakeStruct_B_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_3, float K2Node_MakeStruct_R_ImplicitCast_3, float K2Node_MakeStruct_G_ImplicitCast_3, float K2Node_MakeStruct_B_ImplicitCast_3);
	void BindGPUOcclusionTexture(const struct FMatrix& OcclusionMatrix, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStructureOcclusionSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UTexture* CallFunc_GetOcclusionTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ActivatePrecipitation(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCameraManager_C* K2Node_DynamicCast_AsBP_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DeactivatePrecipitation(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue);
	void RecycleLeaf(int32 Index, struct FVector& Location, struct FVector& BoxSize, class FName& ResourceId, struct FAmbienceDataReference& AmbienceDataReference, class UNiagaraComponent* NewLeaf, const struct FAmbienceData& CallFunc_CopyAmbienceData_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UNiagaraComponent* CallFunc_Array_Get_Item, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void UpdateGPUOccluders(class APlayerController* CallFunc_GetPlayerController_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UStructureOcclusionSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void UpdatePrecipitation(class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void UpdateLeafEmitters(class FName ThisResourceID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Looper_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_2, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UBP_Ambience_Manager_C* CallFunc_GetBPAmbienceManager_BPAmbienceManager, TArray<struct FS_AudioTreeSet>& CallFunc_GetActiveTreeLayers_TreeLayers, TMap<class FName, struct FIIMExtents> CallFunc_GetActiveTreeLayers_TreeExtents, TMap<class FName, struct FAmbienceDataReference> CallFunc_GetActiveTreeLayers_TreeAmbienceData, bool CallFunc_IsValid_ReturnValue, const struct FAmbienceDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FIIMExtents& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 Temp_int_Variable_3, int32 Temp_int_cached_index__Necessary_in_case_of_async_executions_down_the_chain_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void ReceiveBeginPlay();
	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void StopFallingLeaves();
	void StartFallingLeaves();
	void ExecuteUbergraph_BP_VFX_Ambience_Manager(int32 EntryPoint, class UBP_Ambience_Manager_C* CallFunc_GetBPAmbienceManager_BPAmbienceManager, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_cached_index__Necessary_in_case_of_async_executions_down_the_chain_Variable, int32 Temp_int_Looper_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, int32 Temp_int_Loop_Counter_Variable, const struct FBasicParticleData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}



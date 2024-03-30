#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_VFX.BPFL_VFX_C
class UBPFL_VFX_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_VFX_C* GetDefaultObj();

	void SetPedestalParameterCollectionVariable(const class FString& InVariableName, float InVariableValue, class UObject* __WorldContext, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetGlobalEmitterVariable(const class FString& InVariableName, float InVariableValue, class UObject* __WorldContext, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Set_Surface_Impact_VFX_Parameters(struct FS_NiagaraImpactResponse& NiagaraImpactResponse, class UNiagaraComponent*& NiagaraParticleSystemComponent, double Velocity, double VelocityReductionMultiplier, double VelocityMaxClamp, double ScaleOverride, double WaterDepth, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10, float CallFunc_SetVariableFloat_InValue_ImplicitCast_11, float CallFunc_SetVariableFloat_InValue_ImplicitCast_12, float CallFunc_SetVariableFloat_InValue_ImplicitCast_13, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_14, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_15);
	void SpawnLocatedSwimmingEffect(class USkeletalMeshComponent* CharacterSkeletalMesh, class FName Socket, const struct FGameplayTag& EffectTag, const struct FGameplayTag& LiquidTag, const struct FVector& WaterFlowDirection, double WaterFlowSpeed, class UObject* __WorldContext, const struct FVector& ImpactNormal, const struct FVector& ImpactLocation, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LineTraceForWaterHit_OutWaterDepth, const struct FHitResult& CallFunc_LineTraceForWaterHit_OutHitResult, bool CallFunc_LineTraceForWaterHit_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_NiagaraFootstepResponse& CallFunc_GetTableCellData_OutData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10, float CallFunc_SetVariableFloat_InValue_ImplicitCast_11, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3);
	void SpawnSwimmingEffects(class USkeletalMeshComponent* CharacterSkeletalMesh, class UObject* __WorldContext, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_FindClosestWaterBodyRiverSplinePointFlow_OutFlowDirection, float CallFunc_FindClosestWaterBodyRiverSplinePointFlow_OutFlowSpeed, double CallFunc_SpawnLocatedSwimmingEffect_WaterFlowSpeed_ImplicitCast, double CallFunc_SpawnLocatedSwimmingEffect_WaterFlowSpeed_ImplicitCast_1, double CallFunc_SpawnLocatedSwimmingEffect_WaterFlowSpeed_ImplicitCast_2);
	void TransferRenderingData(struct FPostProcessSettings& Origin, struct FPostProcessSettings& Destination, class UObject* __WorldContext, struct FPostProcessSettings* UpdatedPostProcessSettings);
	void Spawn_Surface_Foot_Steps_VFX(struct FHitResult& HitResult, double WaterDepth, double Velocity, double VelocityReductionMultiplier, double VelocityMaxClamp, double ScaleOverride, const struct FGameplayTag& ImpactTag, class AActor* ActorReference, class UObject* __WorldContext, double FinalScale, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FS_NiagaraFootstepResponse& CallFunc_GetTableCellData_OutData, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_11, float CallFunc_SetVariableFloat_InValue_ImplicitCast_12);
	void Spawn_Surface_Impact_VFX(struct FHitResult& HitResult, double WaterDepth, double Velocity, double VelocityReductionMultiplier, double VelocityMaxClamp, double ScaleOverride, const struct FGameplayTag& ImpactTag, class AActor* ActorReference, class UObject* __WorldContext, class UNiagaraComponent** SpawnedSystem, struct FGameplayTag* SurfaceTag, double FinalScale, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FRotator& CallFunc_Calculate_Impact_Orientation_Rotator, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Spawn_Land_AVFX(class ANWXCharacter* PlayerCharacter, struct FHitResult& HitResult, class UObject* __WorldContext, double FinalWaterDepth, const struct FHitResult& FinalHitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, float CallFunc_LineTraceForWaterHit_OutWaterDepth, const struct FHitResult& CallFunc_LineTraceForWaterHit_OutHitResult, bool CallFunc_LineTraceForWaterHit_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FVector& CallFunc_BreakBoxSphereBounds_Origin, const struct FVector& CallFunc_BreakBoxSphereBounds_BoxExtent, float CallFunc_BreakBoxSphereBounds_SphereRadius, float CallFunc_CalculateScaleOverride_ReturnValue, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag, double K2Node_VariableSet_FinalWaterDepth_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast);
	void TraceAndSpawnImpactFX(const struct FGameplayTag& AttackTag, const struct FVector& StartTrace, const struct FVector& EndTrace, enum class ETraceTypeQuery TraceChannel, TArray<class AActor*>& ActorsToIgnore, class UObject* WorldContextObject, bool ShouldPlayVFX, double VFXScaleMultiplier, class UObject* __WorldContext, bool* Hit_Result_Valid, struct FHitResult* Hit_Result, struct FVector* Impact_Point, struct FRotator* ImpactRotation, struct FLinearColor* ImpactSurfaceColor, const struct FVector& Location, class UPhysicalMaterial* Physical_Material, const struct FS_NiagaraImpactResponse& NiagaraImpactResponse, const struct FHitResult& OutHit, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FLinearColor& Temp_struct_Variable_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, const struct FRotator& CallFunc_NVFX_SpawnHitImpactSystem_NiagaraImpactRotation, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData);
	void Trace_And_Spawn_Ground_Impact(const struct FGameplayTag& AttackTag, const struct FVector& ImpactPoint, double TraceBuffer, class AActor* SelfActor, double MinimumVelocityToTrigger, double VelocityReductionMultiplier, double VelocityReductionMaxClamp, double Velocity, class UObject* __WorldContext, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_TraceAndSpawnImpactFX_Hit_Result_Valid, const struct FHitResult& CallFunc_TraceAndSpawnImpactFX_Hit_Result, const struct FVector& CallFunc_TraceAndSpawnImpactFX_Impact_Point, const struct FRotator& CallFunc_TraceAndSpawnImpactFX_ImpactRotation, const struct FLinearColor& CallFunc_TraceAndSpawnImpactFX_ImpactSurfaceColor);
	void Calculate_Impact_Orientation(bool ShouldOverrideImpactDirection, const struct FVector& OverrideImpactDirection, enum class E_AngleOfIncidence AngleOfIncidence, struct FHitResult& HitResult, class UObject* __WorldContext, struct FRotator* Rotator, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, enum class E_AngleOfIncidence Temp_byte_Variable, const struct FVector& CallFunc_CalculateImpactSourceDirection_ReturnValue, const struct FRotator& CallFunc_GetParticleOrientation_OutAligningReflectionRotator, const struct FRotator& CallFunc_GetParticleOrientation_OutAligningNormalRotator, const struct FRotator& CallFunc_GetParticleOrientation_OutAligningNormalDoubleXRotator, const struct FRotator& CallFunc_GetParticleOrientation_OutAligningTotalReflectionRotator, const struct FRotator& CallFunc_GetParticleOrientation_OutAligningNoDeviationRotator, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2, float CallFunc_MakeRotator_Pitch_ImplicitCast_2);
};

}



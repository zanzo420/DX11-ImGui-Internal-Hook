#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x78 - 0x41)
// BlueprintGeneratedClass GC_Impact_Shared.GC_Impact_Shared_C
class UGC_Impact_Shared_C : public UGC_Impact_Base_C
{
public:
	uint8                                        Pad_A26D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PlayerFriendlyTags;                                // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UWeaponBlockSwitchDataAsset*           WeaponBlockData;                                   // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldOverrideImpactDirection;                     // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A26F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VFXFocusRankThreshold;                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Impact_Shared_C* GetDefaultObj();

	void ShouldPlayRangedHitFeedback(class AActor* HitActor, const struct FGameplayTag& ImpactTag, bool IsInstigatorLocal, bool* Result, class ANWXAICharacter* AIHitActor, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TargetIsNPC_IsNPC, bool CallFunc_Not_PreBool_ReturnValue_1);
	void RTPCValueMapToStructArray(TMap<class UAkRtpc*, double>& RTPCValueMap, TArray<struct FRTPCValuePair>* RTPCValuePairs, const TArray<class UAkRtpc*>& RTPCMapKeys, const TArray<struct FRTPCValuePair>& RTPCValuePairArray, bool CallFunc_Map_IsNotEmpty_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UAkRtpc* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class UAkRtpc> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRTPCValuePair& K2Node_MakeStruct_RTPCValuePair, int32 CallFunc_Array_Add_ReturnValue, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, float K2Node_MakeStruct_RTPCValue_ImplicitCast);
	void LoadAndPlayImpactSweeteners(TArray<TSoftObjectPtr<class UAkAudioEvent>>& ImpactSweetenerEvents, class AActor* HitActor, TArray<TSoftObjectPtr<class UAkSwitchValue>>& AudioSwitches, const struct FVector& ImpactLocation, TSoftObjectPtr<class UAkAudioEvent> SweetenerEvent, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FRTPCValuePair>& Temp_struct_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue);
	void GetImpactSweetenerEvents(class AActor* HitActor, const struct FGameplayTag& ImpactTag, TArray<TSoftObjectPtr<class UAkAudioEvent>>* ImpactSweeteners, const TArray<struct FGameplayTag>& SweetenerEffectTags, const TArray<TSoftObjectPtr<class UAkAudioEvent>>& ValidSweeteners, class UAbilitySystemComponent* HitActorASC, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetImpactSweetenerEffectTags_OutGameplayTags, const struct FS_AudioOneShot& CallFunc_GetTableCellData_OutData, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void HandleVFX(class AActor* StrikingActor, struct FHitResult& HitResult, struct FS_NiagaraImpactResponse& NiagaraResponse, struct FGameplayTag& ImpactTag, struct FGameplayTag& ElementalTag, bool bWasAttackBlocked, struct FGameplayTagContainer& BlockingWeaponTags, const struct FGameplayTag& BlockedImpactTag, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_VFXFocusRankTest_ShouldSpawnVFX, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<struct FHitResult>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& K2Node_MakeArray_Array_2, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData, const struct FGameplayTag& CallFunc_GetBlockedImpactTagFromContainer_ReturnValue);
	void LoadAndPlayHitFeedbackAudio(TSoftObjectPtr<class UAkAudioEvent> HitFeedbackEvent, class AActor* HitActor, TArray<TSoftObjectPtr<class UAkSwitchValue>>& AudioSwitchSoftPtrs, struct FVector& ImpactLocation, TMap<class UAkRtpc*, double>& RTPCMapValues, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<struct FRTPCValuePair>& CallFunc_RTPCValueMapToStructArray_RTPCValuePairs, TArray<struct FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue);
	void GetAudioHitFeedbackEvent(struct FGameplayTag& InputDamageModTag, struct FGameplayTag& SourceTag, TSoftObjectPtr<class UAkAudioEvent>* HitFeedbackEvent, const struct FGameplayTag& FinalDamageModTag, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsGameplayTagValid_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_Audio_Hit_Feedback& CallFunc_GetTableCellData_OutData);
	void LoadAndPlayAttackSoundResponse(TSoftObjectPtr<class UAkAudioEvent> AttackSoundEvent, class AActor* StrikingActor, struct FVector& ImpactLocation, TArray<TSoftObjectPtr<class UAkSwitchValue>>& AudioSwitchSoftPtrs, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<struct FRTPCValuePair>& Temp_struct_Variable, TArray<struct FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue);
	void LoadAndPlaySurfaceImpactAudio(TSoftObjectPtr<class UAkAudioEvent> HitImpactEvent, class AActor* HitActor, class AActor* StrikingActor, TArray<TSoftObjectPtr<class UAkSwitchValue>>& AudioSwitchSoftPtrs, struct FVector& ImpactLocation, TMap<class UAkRtpc*, double>& RTPCMapValues, class UObject* WorldContext, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FRTPCValuePair>& CallFunc_RTPCValueMapToStructArray_RTPCValuePairs, TArray<struct FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1);
	void GetModifiedSurfaceImpactAudioResponse(struct FGameplayTag& InputImpactTag, struct FGameplayTag& DamageModTag, struct FGameplayTag& SourceTag, bool* bFoundModifiedResponse, struct FS_HitAudio* FoundAudioResponse, struct FGameplayTag* FoundImpactTag, const struct FGameplayTag& ImpactTag, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FS_HitAudio& CallFunc_GetSurfaceImpactAudioResponse_AudioResponse, bool CallFunc_GetSurfaceImpactAudioResponse_FoundEntry, const struct FGameplayTag& CallFunc_AppendDamageModToImpactTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_2);
	void GetBlockingWeaponTags(struct FGameplayTagContainer& TargetTags, class AActor* HitActor, bool* bIsAttackBlocked, struct FGameplayTagContainer* BlockingWeaponTags, class AEquippableItem* EquippedItem, class AEquippableItem* Temp_object_Variable, bool CallFunc_ContainsBlockingTag_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue);
	void GetDamageModTag(class AActor* StrikingActor, struct FGameplayTag& DamageSourceTag, struct FGameplayTagContainer& ImpactTags, struct FHitResult& HitResult, struct FGameplayTag* OutDamageModTag, class AActor* HitActor, bool bIsImmune, double ResistanceDamageMultiplier, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_4, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_2, const struct FGameplayTag& CallFunc_GetSourceTagFromActor_SourceTag, bool CallFunc_ActorHasTag_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsWeakOrHeartHit_IsWeakOrHeart, bool CallFunc_IsWeakOrHeartHit_Weak, bool CallFunc_IsWeakOrHeartHit_Heart, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_GetResistance_DamageMultiplier, bool CallFunc_GetResistance_IsResisted, bool CallFunc_IsWeakOrHeartHit_IsWeakOrHeart_1, bool CallFunc_IsWeakOrHeartHit_Weak_1, bool CallFunc_IsWeakOrHeartHit_Heart_1, bool CallFunc_ActorHasTag_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
	void VFXFocusRankTest(class AActor* Attacker, class AActor* Defender, bool* ShouldSpawnVFX, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue, bool CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue_1);
	void PredictImpactDamage(class AActor* StrikingActor, const struct FGameplayTag& DamageTag, bool IsDamagingStructure, double* PredictedDamage, const struct FItemData& EquippedItemData, class AEquippableItem* EquippedItem, bool Temp_bool_Variable, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, double Temp_real_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, double Temp_real_Variable_1, const struct FGameplayAttribute& Temp_struct_Variable, const struct FGameplayAttribute& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* Temp_object_Variable, double Temp_real_Variable_2, double Temp_real_Variable_3, bool Temp_bool_Variable_1, const struct FGameplayTag& CallFunc_SledgehammerTag_SledgehammerTag, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, bool CallFunc_MatchesTag_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double K2Node_Select_Default, bool CallFunc_MatchesTag_ReturnValue_1, double K2Node_Select_Default_1, float CallFunc_CalculateItemAttributeValue_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_2, float CallFunc_CalculateItemAttributeValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_FunctionResult_PredictedDamage_ImplicitCast, double K2Node_FunctionResult_PredictedDamage_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetHitActorHealthNormalized(class AActor* StrikingActor, class AActor* HitActor, const struct FHitResult& HitResult, const struct FGameplayTag& DamageTag, double* PredictedHealthNormalized, double* CurrentHealthNormalized, bool IsHittingStructure, class UObject* HitObject, double MaxHealth, double CurrentHealth, bool CallFunc_IsValid_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_PredictImpactDamage_PredictedDamage, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxHealth_ReturnValue, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentHealth_ReturnValue, class UObject* CallFunc_GetHitObject_OutObject, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, double K2Node_VariableSet_MaxHealth_ImplicitCast, double K2Node_VariableSet_CurrentHealth_ImplicitCast, double K2Node_VariableSet_MaxHealth_ImplicitCast_1, double K2Node_VariableSet_CurrentHealth_ImplicitCast_1);
	void GetSurfaceSwitch(class UPhysicalMaterial*& PhysMat, class UAkSwitchValue** SWITCH, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess);
	void SpawnImpactVFX(struct FS_NiagaraImpactResponse& NiagaraResponse, TArray<struct FHitResult>& HitResults, struct FGameplayTag& ImpactTag, struct FGameplayTag& ElementalTag, class AActor*& StrikingActor, const struct FVector& OverrideImpactDirection, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetAttackVisualResponse_NiagaraResponse, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FVector& CallFunc_Get_Override_Impact_Direction_ImpactDirection, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FRotator& CallFunc_NVFX_SpawnHitImpactSystem_NiagaraImpactRotation, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_1, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FRotator& CallFunc_NVFX_SpawnHitImpactSystem_NiagaraImpactRotation_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void PlayLocationShake(struct FS_CameraResponse& CameraResponse, struct FVector& ImpactLocation, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, enum class ECollisionChannel HitObjectType, bool IsLocallyControlled, class UClass* LocationShakeClass, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsLegacy_Camera_Shake, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_IsOwnerLocallyControlled_ReturnValue);
	void GetAttackVisualResponse(struct FGameplayTag& ImpactTag, struct FGameplayTag& ElementalTag, struct FS_NiagaraImpactResponse* NiagaraResponse, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData);
	void GetAttackImpactAudioResponse(struct FGameplayTag& SourceTag, struct FGameplayTag& ElementTag, bool* Success, struct FS_HitAudio* AudioResponse, bool CallFunc_IsGameplayTagValid_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_AudioHitResponses& CallFunc_GetTableCellData_OutData, bool CallFunc_GetAudioResponseFromAttackType_Success, const struct FS_HitAudio& CallFunc_GetAudioResponseFromAttackType_AudioResponse);
	void GetAudioResponseFromAttackType(struct FGameplayTag& ImpactTag, TMap<struct FGameplayTag, struct FS_HitAudio>& AudioResponses, bool* Success, struct FS_HitAudio* AudioResponse, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FS_HitAudio& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ShouldPlayImpactSound(class AActor*& StrikingActor, class AActor*& HitActor, struct FS_HitAudio& AudioResponse, bool* PlayAudio, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsCreature_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsHuman_ReturnValue, bool CallFunc_IsCreature_ReturnValue_1);
	void GetSurfaceImpactAudioResponse(const struct FGameplayTag& SourceTag, struct FGameplayTag& ImpactTag, struct FS_HitAudio* AudioResponse, bool* FoundEntry, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsGameplayTagValid_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_GetTagName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class FName CallFunc_GetTagName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GetTagName_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_AudioHitResponses& CallFunc_GetTableCellData_OutData, bool CallFunc_GetAudioResponseFromAttackType_Success, const struct FS_HitAudio& CallFunc_GetAudioResponseFromAttackType_AudioResponse);
	void HandleAudioEffects(class AActor* StrikingActor, struct FHitResult& HitResult, struct FGameplayTag& DamageModTag, struct FGameplayTag& DamageSourceTag, struct FGameplayTag& InputImpactTag, struct FGameplayTag& ElementalTag, bool bWasAttackBlocked, struct FGameplayTagContainer& BlockingWeaponTags, TSoftObjectPtr<class UAkSwitchValue> BlockingWeaponSoftSwitchPtr, const struct FGameplayTag& StrikingSourceTag, class UPhysicalMaterial* CurrentPhysMat, class AActor* HitActor, const struct FVector& ImpactLocation, class ANWXAICharacter* AIHitActor, class UAkRtpc* SurfaceWetnessRTPC, double CurrentHealth, double PredictedHealth, class UAkRtpc* HitObjectHealthRTPC, TMap<class UAkRtpc*, double> RTPC_Map, const TArray<TSoftObjectPtr<class UAkSwitchValue>>& AudioSwitchSoftPtrs, class UAkSwitchValue* Surface_Switch, bool ReceiverLocallyControlled, bool InstigatorLocallyControlled, const struct FS_HitAudio& SurfaceAudioResponse, const struct FGameplayTag& FinalImpactTag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UAkSwitchValue> Temp_softobject_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_ShouldPlayRangedHitFeedback_Result, TArray<TSoftObjectPtr<class UAkAudioEvent>>& CallFunc_GetImpactSweetenerEvents_ImpactSweeteners, TSoftObjectPtr<class UAkSwitchValue> Temp_softobject_Variable_1, TSoftObjectPtr<class UAkSwitchValue> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, TSoftObjectPtr<class UAkSwitchValue> CallFunc_GetSwitchSoftPtrForTagContainer_ReturnValue, const struct FGameplayTag& CallFunc_GetSourceTagFromActor_SourceTag, class UAkSwitchValue* CallFunc_GetSurfaceSwitch_Switch, bool CallFunc_IsTargetLocallyControlled_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_GetAudioHitFeedbackEvent_HitFeedbackEvent, bool CallFunc_GetAttackImpactAudioResponse_Success, const struct FS_HitAudio& CallFunc_GetAttackImpactAudioResponse_AudioResponse, TSoftObjectPtr<class UAkAudioEvent> CallFunc_Select_Hit_Impact_SFX_HitImpactSFX, TSoftObjectPtr<class UAkAudioEvent> CallFunc_Select_Hit_Impact_SFX_HitImpactSFX_1, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetHitActorHealthNormalized_PredictedHealthNormalized, double CallFunc_GetHitActorHealthNormalized_CurrentHealthNormalized, double CallFunc_Get_Puddle_Value_Puddle_Value, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_IsOwnerLocallyControlled_ReturnValue, bool CallFunc_ShouldPlayImpactSound_PlayAudio, const struct FS_HitAudio& CallFunc_GetSurfaceImpactAudioResponse_AudioResponse, bool CallFunc_GetSurfaceImpactAudioResponse_FoundEntry, bool CallFunc_GetModifiedSurfaceImpactAudioResponse_bFoundModifiedResponse, const struct FS_HitAudio& CallFunc_GetModifiedSurfaceImpactAudioResponse_FoundAudioResponse, const struct FGameplayTag& CallFunc_GetModifiedSurfaceImpactAudioResponse_FoundImpactTag);
	void Get_Override_Impact_Direction(struct FHitResult& HitResult, struct FVector* ImpactDirection);
	void FindAndPlayEffects(struct FGameplayCueParameters& Params, class AActor*& StrikingActor, const struct FGameplayTag& CachedDamageSourceTag, const struct FGameplayTag& ImpactTag, const struct FGameplayTag& ElementalTag, const struct FGameplayTagContainer& BlockingWeaponTags, bool bWasAttackBlocked, const struct FS_CameraResponse& CameraResponse, const struct FS_NiagaraImpactResponse& NiagaraResponse, bool PhysicalResponseFound, const struct FGameplayTag& CachedDamageModTag, const struct FGameplayTagContainer& CachedTargetTags, const struct FGameplayTagContainer& CachedImpactTags, const struct FHitResult& CachedHitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, const struct FGameplayTag& CallFunc_GetElementTagFromActor_ElementalTag, bool CallFunc_GetBlockingWeaponTags_bIsAttackBlocked, const struct FGameplayTagContainer& CallFunc_GetBlockingWeaponTags_BlockingWeaponTags, const struct FGameplayTag& CallFunc_GetDamageModTag_OutDamageModTag, const struct FGameplayTag& CallFunc_GetDamageTagFromStrikingActor_SourceTag, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetPhysicalResponse_NiagaraResponse, const struct FS_CameraResponse& CallFunc_GetPhysicalResponse_CameraResponse, bool CallFunc_GetPhysicalResponse_Found, const struct FGameplayTag& CallFunc_Get_Impact_Tag_From_Correct_Source_ImpactTag);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const TArray<struct FGameplayTag>& Temp_ImpactTags, bool Temp_DamageResisted, double Temp_DamageModifier, bool CallFunc_OnExecute_ReturnValue);
};

}



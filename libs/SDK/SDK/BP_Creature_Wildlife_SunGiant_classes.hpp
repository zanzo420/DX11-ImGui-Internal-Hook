#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x17D0 - 0x1658)
// BlueprintGeneratedClass BP_Creature_Wildlife_SunGiant.BP_Creature_Wildlife_SunGiant_C
class ABP_Creature_Wildlife_SunGiant_C : public ABP_Creature_Wildlife_Apex_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1658(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ApexMusicComponent_C*              BP_ApexMusicComponent;                             // 0x1660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator2;                                     // 0x1668(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    AK_Focus;                                          // 0x1670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FocusEffect;                                       // 0x1678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AILoadoutComponentBase_C*          BP_AILoadoutComponentBase;                         // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator1;                                     // 0x1688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     TreeCapsule;                                       // 0x1690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Rock;                                              // 0x1698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_Right;                                     // 0x16A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_Left;                                      // 0x16A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x16B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x16B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x16C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x16C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInWorldItemContainerComponent*        InWorldItemContainer;                              // 0x16D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                BP_LoadoutComponent;                               // 0x16D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          Audio_general;                                     // 0x16E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        CrushableClasses;                                  // 0x16E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bRightFootAttackEnabled;                           // 0x16F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeftFootAttackEnabled;                            // 0x16F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRightFistAttackEnabled;                           // 0x16FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeftFistAttackEnabled;                            // 0x16FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistanceLeftStomp;                              // 0x1700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistanceRightStomp;                             // 0x1708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseShockwaveDamage;                               // 0x1710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               GrabbedOre;                                        // 0x1718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DownedTimer;                                       // 0x1720(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DownedDuration;                                    // 0x1728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ChestWeakpoint;                                    // 0x1730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TreeSwingsMax;                                     // 0x1738(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TreeSwingsCurrent;                                 // 0x173C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HoldingStone;                                      // 0x1740(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9BDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Other_Container;                                   // 0x1748(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         OfferingEnabled;                                   // 0x1768(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          OfferingPlayer;                                    // 0x1770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                        PillarArray;                                       // 0x1778(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UObject*                               OfferingStucture;                                  // 0x1788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BeamOn;                                            // 0x1790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemainingSpells;                                   // 0x1794(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxSpells;                                         // 0x1798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraComponent*>             BeamVFXArray;                                      // 0x17A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        EnemyList;                                         // 0x17B0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	bool                                         FocusOn;                                           // 0x17C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConditionalItemRewards*               Reward;                                            // 0x17C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_SunGiant_C* GetDefaultObj();

	void TriggerDeath(const struct FHitResult& SpawnLocation, int32 LItemAmount, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue);
	void OnRep_FocusOn();
	void OnRep_Enemylist();
	void OnRep_BeamOn(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void DestroyOfferingStructure(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_Functional_SunGiantOffering_C* K2Node_DynamicCast_AsBP_Structure_Functional_Sun_Giant_Offering, bool K2Node_DynamicCast_bSuccess);
	void Start_WP_Indicator();
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable);
	void OnRep_HoldingStone(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetTargetPriorityOrder(TArray<struct FGameplayTag>* TargetPriorityOrder, const TArray<struct FGameplayTag>& TargetPriorities, TArray<struct FGameplayTag>& CallFunc_GetTargetPriorityOrder_TargetPriorityOrder, TArray<struct FGameplayTag>& K2Node_MakeArray_Array);
	void GiantAttack(class UPrimitiveComponent* Collision, class AActor* HitActor, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_ApplyDamageToTarget_bActorHit, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_AbilityDamage_ImplicitCast);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void BndEvt__BP_Creature_Wildlife_HillGiant_TreeCapsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_Creature_Wildlife_SunGiant(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_ResolveHitResult_ReturnValue, class AInteractiveInstancedMeshManager* K2Node_DynamicCast_AsInteractive_Instanced_Mesh_Manager, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue_1, const struct FTagValueContainer& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, bool CallFunc_IsServer_ReturnValue_2, const struct FTagValueContainer& Temp_struct_Variable_3, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, const struct FHitResult& CallFunc_ResolveHitResult_ReturnValue_1, class AInteractiveInstancedMeshManager* K2Node_DynamicCast_AsInteractive_Instanced_Mesh_Manager_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_2, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable_5, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_1, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer_1, bool CallFunc_ActorHasTag_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, const struct FTagValueContainer& Temp_struct_Variable_7, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_2);
};

}



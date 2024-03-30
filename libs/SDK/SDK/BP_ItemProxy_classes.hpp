#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x7C8 - 0x6E0)
// BlueprintGeneratedClass BP_ItemProxy.BP_ItemProxy_C
class ABP_ItemProxy_C : public AItemProxyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAk;                                          // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PhysicsAVFXComponent_C*            BP_Physics_AVFX_Component;                         // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAsyncAssetLoaderComponent*            AsyncAssetLoader;                                  // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         ShimmerEffect;                                     // 0x718(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       LastTriggerTime;                                   // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPhysicsStopScheduled;                            // 0x748(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PhysicsStopTimeout;                                // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         EssenceEffect;                                     // 0x758(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UObject*>                       LastBoundObjectsOnSleep;                           // 0x780(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          TAG_ESSENCE;                                       // 0x790(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            GroundMeshSoftRef;                                 // 0x798(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	double                                       DefaultPhysicsStopTimeout;                         // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ItemProxy_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, bool CallFunc_IsDedicatedServer_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void InteractReleased(bool* Success);
	void InteractPressed(bool* Success);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1);
	void OnNotifyNearbyPhysics(class UObject* TriggeringObject);
	void UnbindStructureEvents(class UObject* StructureObject, class UStructureEventsObject* EventsObject, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void UnbindLastBoundObjectsOnSleep(class UObject* CurrentLastBoundObject, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INotifyNearbyPhysicsInterface> K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetPhysics(bool bEnabled, bool Temp_bool_Variable, enum class ENetDormancy Temp_byte_Variable, enum class ENetDormancy Temp_byte_Variable_1, enum class ENetDormancy K2Node_Select_Default);
	void EnablePhysics();
	void OnStructureMoved(class UObject* MovedEntity);
	void OnStructureDestroyed(class UObject* Structure, class AActor* Instigator);
	void OnSleep(const struct FVector& BoxTraceHalfSize, double SphereTraceRadius, class UObject* CurrentHitObject, class UStructureEventsObject* Structure, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, TArray<class UObject*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FRotator& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class INotifyNearbyPhysicsInterface> K2Node_DynamicCast_AsNotify_Nearby_Physics_Interface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXBoxTraceMultiForObjects_OutHits, bool CallFunc_NWXBoxTraceMultiForObjects_ReturnValue, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetHitObject_OutObject, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, class UObject* CallFunc_GetHitObject_OutObject_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast);
	void OnAsyncLoadComplete(class UObject* Asset);
	void OnInitialize(bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_GetGroundMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IAssetLoaderProvider> CallFunc_LoadSingle_LoaderProvider_CastInput);
	void GetInstanceQuantity(int32* Quantity);
	void OnSpawnAudioLoaded(class UAkAudioEvent* LoadedAudio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue);
	void LoadAndPlaySpawnedAudio(TSoftObjectPtr<class UAkAudioEvent> FoundAudioEvent, const struct FGameplayTag& Context, const struct FGameplayTag& AVFX_Tag, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FResourceAudioSpawned& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue);
	void SpawnEssenceEffect(int32 EssenceTypeIndex, enum class EItemQuality ItemQuality, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue, enum class EItemQuality Temp_byte_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, double CallFunc_MakeLiteralDouble_ReturnValue_3, double K2Node_Select_Default, const struct FVector& CallFunc_GetUpVector_ReturnValue, enum class EItemQuality Temp_byte_Variable_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, double K2Node_Select_Default_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_TryGetItemEssenceVFXIndex_OutVFXIndex, enum class EGetResult CallFunc_TryGetItemEssenceVFXIndex_Branches, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast);
	bool GetInteractionTag(struct FGameplayTag* InteractionTag);
	void TrySchedulePhysicsTimeout(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void DisablePhysics();
	void SetPhysicsTimeoutOnHit(double TimeoutInSeconds);
	void SpawnImpactVFX(struct FHitResult& Hit, class AActor* Self_Actor, double CallFunc_GetTimeSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	bool TryAddItemProxyToStructure(class UObject* Structure, const TArray<struct FInventoryEntry>& UnusedResources, const struct FGameplayTagContainer& EntryTraits, int32 QuantityRemaining, int32 Temp_int_Array_Index_Variable, TArray<struct FStructureResourceRequirements>& Temp_struct_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_GetQuantityRemaining_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IStructureResourceHandlingInterface> K2Node_DynamicCast_AsStructure_Resource_Handling_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddConstructionResources_bSuccess, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutUnusedResources, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutAddedResources, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void AddToStructureFeedback(class UObject* Structure, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ItemProxy_DestroyedFeedback_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Audio_Event_Loaded_Roll_Stop(class UAkAudioEvent* AudioEvent);
	void Audio_Event_Loaded_Roll_Start(class UAkAudioEvent* AudioEvent);
	void Audio_Event_Loaded_Impact(class UAkAudioEvent* AudioEvent);
	void LoadImpactAudioEvents(TSoftObjectPtr<class UAkAudioEvent> TempSoftPath, const struct FItemAudioPhysics& PhysicsItemAudio, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData_1, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast);
	void SpawnShimmerEffect(class UNiagaraComponent* ParticleSystem, enum class EItemQuality ItemQuality, enum class EItemQuality Temp_byte_Variable, enum class EItemQuality Temp_byte_Variable_1, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, double K2Node_Select_Default, double CallFunc_MakeLiteralDouble_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, double K2Node_Select_Default_1, bool CallFunc_IsServer_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Desaturated_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_Multiply_LinearColorFloat_B_ImplicitCast, float CallFunc_LinearColor_Desaturated_InDesaturation_ImplicitCast);
	void GetItemID(struct FItemDataReference* ItemId);
	void InitializeMesh(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void InitializeItemProxy(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UserConstructionScript();
	void PerformClientSideInteraction(class AController* Controller);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Client_PickUpWaterSplashSpawn(const struct FVector& PickerViewLocation);
	void ExecuteUbergraph_BP_ItemProxy(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& K2Node_CustomEvent_PickerViewLocation, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName_1, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, class AController* K2Node_Event_Controller, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}



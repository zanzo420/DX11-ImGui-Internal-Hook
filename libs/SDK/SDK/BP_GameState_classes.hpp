#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x6D0 - 0x5E0)
// BlueprintGeneratedClass BP_GameState.BP_GameState_C
class ABP_GameState_C : public ANWXGameStateBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URandomQuestModuleComponent*           RandomQuestModule;                                 // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScriptedQuestModuleComponent*         ScriptedQuestModule;                               // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SimulationMonitorComponent_C*      BP_SimulationMonitorComponent;                     // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpatialWorldTimeComponent*            SpatialWorldTime;                                  // 0x600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayerReady;                                    // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsControllerReady;                                // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHUDReady;                                       // 0x612(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BroadcastClientReady;                              // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bPlayerStateReady;                                 // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTraversalEnabled;                               // 0x629(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ManagerSpawnTransform;                             // 0x630(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AmbientSoundManagerClass;                          // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AmbientSoundManager;                               // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinBoundTime;                                      // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxBoundTime;                                      // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BoundClusterRadius;                                // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BoundSpawnTimer;                                   // 0x6B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           NightBoundSpawners;                                // 0x6C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_GameState_C* GetDefaultObj();

	void GetComfortLevelForStructure(class UObject* Structure, double* Comfort, class UStructureTraitAsset* ComfortTrait, class UStructureTraitComponent* LStructureTraitComponent, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, const struct FStructureTrait& CallFunc_FindActiveTrait_OutFoundTrait, bool CallFunc_FindActiveTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue);
	void ExecuteRestForPlayer(class APlayerController* Controller, class UObject* Structure, class UCurveFloat* HealthRegenCurve, class UCurveFloat* StaminaRegenCurve, double LComfortLevel, class UAbilitySystemComponent* LAbility, class APawn* LPawn, double CallFunc_GetComfortLevelForStructure_Comfort, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1);
	void SetPersistenceObjectByKey(const class FString& PersistenceKey, class UObject* ObjectToPersist, bool* bSuccess, class UObject* OldPersistedObject, TMap<class FString, class UObject*> GenericDataMap, bool CallFunc_HasAuthority_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UClass* CallFunc_GetObjectClass_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UClass* CallFunc_GetObjectClass_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_StoreGenericObjectMap_Success);
	void GetPersistenceObjectByKey(const class FString& PersistenceKey, bool* bSuccess, class UObject** PersistedObject, TMap<class FString, class UObject*> GenericDataMap, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnRep_GameStartTime();
	void IsTraversalEnabled(bool* IsEnabled);
	void SetTraversalEnabled(bool IsEnabled);
	void SetPlayerStateReady(bool Ready, bool OldReady);
	void GetGameStateInfo(TArray<struct FBPAnalyticsEventAttr>* GameStateInfoArray, const class FString& CreatureLocations, const class FString& PlayerLocationString, const TArray<struct FBPAnalyticsEventAttr>& NewGameStateInfo, int32 Temp_int_Array_Index_Variable, const struct FBPAnalyticsEventAttr& K2Node_MakeStruct_BPAnalyticsEventAttr, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Add_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Vector_ReturnValue, const class FString& CallFunc_BuildString_Vector_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FBPAnalyticsEventAttr& K2Node_MakeStruct_BPAnalyticsEventAttr_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Character_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_BuildString_Vector_ReturnValue_2, const class FString& CallFunc_BuildString_Vector_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1);
	void IsReady(bool* Ready, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void CheckReadyStatus(bool CallFunc_IsReady_Ready);
	void SetHUDIsReady(bool Ready, bool bOldReady);
	void SetControllerIsReady(bool Ready, bool bOldReady);
	void SetPlayerIsReady(bool Ready, bool bOldReady);
	void PrintReadyDebug();
	void ReceiveBeginPlay();
	void UpdateBPGameState();
	void OnPlayerJoined(class APlayerController* NewPlayer);
	void ExecuteUbergraph_BP_GameState(int32 EntryPoint, class UGameFrameworkComponentManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_PlayerController_C*>& CallFunc_GetAllActorsOfClass_OutActors, const class FString& CallFunc_GetFunctionName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_GetFunctionName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, const class FString& CallFunc_GetDisplayName_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_3, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_5, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_4, class APawn* CallFunc_K2_GetPawn_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_GetFunctionName_ReturnValue_5, const class FString& CallFunc_GetFunctionName_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_GetInitialInventoryReceived_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, class AActor* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, TScriptInterface<class IBPI_Ready_C> K2Node_DynamicCast_AsBPI_Ready, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, bool CallFunc_IsServer_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class APlayerController* K2Node_CustomEvent_NewPlayer, class ABP_Character_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
	void BroadcastClientReady__DelegateSignature();
};

}



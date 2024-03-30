#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x358 (0x8C8 - 0x570)
// BlueprintGeneratedClass BP_CreatureManager.BP_CreatureManager_C
class ABP_CreatureManager_C : public ANWXCreatureManagerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicSpawningManagerComponent*      DynamicSpawningManager;                            // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_CreatureSpawnerBase_C*>       Spawners;                                          // 0x590(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TSet<class UObject*>                         Homes;                                             // 0x5E0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         bAIEnabled;                                        // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_808E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class ABP_Creature_NPC_C*>              NPCs;                                              // 0x638(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        MaxCreatures;                                      // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_808F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ABP_CreatureSpawnerBase_C*, int32> SpawnerReserveAllocations;                         // 0x690(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	FMulticastInlineDelegateProperty_            AIEnabledChanged;                                  // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       InitialSpawnReadyDelayEditor;                      // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InitialSpawnReadyDelayNonEditor;                   // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AI_StatTracker_C*                  AIStatTracker;                                     // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        POIs_0;                                            // 0x708(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         bHasSpawnedInitialSpawners;                        // 0x718(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8090[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SimulationStateManager_C*          SimStateManager;                                   // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<enum class ECreatureType, int32>        ReservedCreaturesByType;                           // 0x728(0x50)(Edit, BlueprintVisible)
	bool                                         POIsInitialized;                                   // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8092[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WildlifeRespawnThreshold;                          // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TrySpawnWildLifeFrequency;                         // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WildlifeFillbudgetLimit;                           // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFillingBudget;                                   // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8095[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TrySpawnWildlifeHandle;                            // 0x7A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureSpawnerBase_C*>     AudioSpawnersApex;                                 // 0x7A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                             FarAudioDelayApex;                                 // 0x7B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureSpawnerBase_C*>     AudioSpawnersMonster;                              // 0x7C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                             FarAudioDelayMonster;                              // 0x7D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureSpawnerBase_C*>     AudioSpawnersAnimal;                               // 0x7E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                             FarAudioDelayAnimal;                               // 0x7F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureSpawnerBase_C*>     AudioSpawnersBound;                                // 0x808(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                             FarAudioDelayBound;                                // 0x818(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FSoftClassPath, int32>           CreatureChallengeRatings;                          // 0x828(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class ABP_CreatureSpawnerBase_C*, struct FCreaturePersistentData> PersistentCreatureData;                            // 0x878(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_CreatureManager_C* GetDefaultObj();

	class ANWXAISpawner* RequestNewPetSpawner(class UPetsDataAsset* PetsData, class ANWXStructure* OwnerStructure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2);
	void OnPersistentCreaturesSpawned(class ABP_CreatureSpawnerBase_C* Spawner, int32 LFoundIndex, class ABP_Creature_NPC_Human_C* LSpawnedNPC, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ANWXAICharacter*>& CallFunc_GetSpawnedAICharacters_ReturnValue, const struct FCreaturePersistentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ANWXAICharacter* CallFunc_Array_Get_Item, class ABP_Creature_NPC_Human_C* K2Node_DynamicCast_AsBP_Creature_NPC_Human, bool K2Node_DynamicCast_bSuccess, class UCreatureSpecificPersistentData* CallFunc_Array_Get_Item_1, class UCreatureSpecificPersistentData_NPC* K2Node_DynamicCast_AsCreature_Specific_Persistent_Data_NPC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void SpawnPersistentCreatures(const struct FCreaturePersistentData& LPersistedCreatureSpawner, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FCreaturePersistentData>& CallFunc_GetPersistedCreatures_PeristedCreatures, const struct FCreaturePersistentData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetValidSpawners(TArray<class ABP_CreatureSpawnerBase_C*>& Spawners, TArray<class ABP_CreatureSpawnerBase_C*>* ValidSpawners, int32 HighestPriority, const TArray<class ABP_CreatureSpawnerBase_C*>& EligableSpawners, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void FarCreatureAudioStartTimerBound(double LTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FarCreatureAudioStartTimerAnimal(double LTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FarCreatureAudioStartTimerMonster(double LTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FarCreatureAudioStartTimerApex(double LTime, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FarCreatureAudioSpawnerRegister(class ABP_CreatureSpawnerBase_C* Spawner, bool Register, const struct FGameplayTagContainer& LSpawnerTags, class ABP_CreatureSpawnerBase_C* LSpawner, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ContainerContainsState_ReturnValue_2, bool CallFunc_ContainerContainsState_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsValid_ReturnValue);
	void FarCreatureAudioEvaluationBound();
	void FarCreatureAudioEvaluationAnimal();
	void FarCreatureAudioEvaluationMonster();
	void FarCreatureAudioEvaluationApex(class ABP_CreatureSpawnerBase_C* LSpawner);
	void Far_Creature_Audio_Evaluation(TArray<class ABP_CreatureSpawnerBase_C*>& Spawners, class ABP_CreatureSpawnerBase_C* LSpawner, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_GetValidSpawners_ValidSpawners, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeFarCreatureAudio(double LTime);
	void PrintReservations(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetNumberOfCreaturesSpawned_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	void ReturnReservation(class ABP_CreatureSpawnerBase_C* Spawner, int32 NumberToReturn, class ABP_CreatureSpawnerBase_C* LSpawner, int32 Val, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue_1);
	int32 GetReservationsForSpawner(class ANWXAISpawner* Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	int32 GetTotalReservations(int32 Total, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class ECreatureType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ECreatureType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	class ANWXAISpawner* SpawnSpawnerAtPOI(struct FWildlifeSpawner& ChosenCreature, class UNWXAIPOI_Component* ChosenPOI, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_SpawnWildlifeSpawnerOfType_Spawner);
	TArray<class AStreamingLevelProxyActor*> GetSpawnPointPOIs(const TArray<class ABP_DenBase_C*>& Unfiltered, const TArray<class ANWXActor*>& Filtered, TArray<class AStreamingLevelProxyActor*>& CallFunc_GetAllActorsOfClass_OutActors);
	void GetMaxCreaturesForType(enum class ECreatureType CreatureType, int32* MaxCreatures, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxCreaturesForType_ReturnValue, int32 CallFunc_Min_ReturnValue);
	void GetReservedCreaturesForType(enum class ECreatureType CreatureType, int32* ReservedCreatures, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetTotalReservedCreatures(int32* ReservedCreatures, int32 Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<enum class ECreatureType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, enum class ECreatureType CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void GetAvailableRoomForCreatureType(enum class ECreatureType CreatureType, int32* MaxCreatures, int32 CallFunc_GetReservedCreaturesForType_ReservedCreatures, int32 CallFunc_GetMaxCreaturesForType_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void GetManagerDataString(class FString* DataString, int32 T, int32 CallFunc_GetTotalReservedCreatures_ReservedCreatures, int32 CallFunc_Get_Total_Creatures_TotalCreatures, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void Get_Total_Creatures(int32* TotalCreatures, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetTotalCreatures_ReturnValue);
	void GetSpawnerDebugInfo(TArray<struct FAISpawnerDebugStats>* SpawnerInfo, const struct FDataTableRowHandle& SpawnerData, int32 MaxCount, int32 MinCount, const TArray<struct FAISpawnerDebugStats>& OutInfo, class FName SpawnerName, TMap<struct FDataTableRowHandle, int32> SpawnerCountsByRow, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FAISpawnerDebugStats& K2Node_MakeStruct_AISpawnerDebugStats, int32 CallFunc_Array_Add_ReturnValue, const struct FWildlifeSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsNaturalSpawnerValidForRealm_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_Set_ToArray_Result, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue);
	void UnregisterSpawner(class ABP_CreatureSpawnerBase_C* Spawner, class ABP_CreatureSpawnerBase_C* LSpawner, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void UpdateAIStatTracker(const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetTotalReservedCreatures_ReservedCreatures, TArray<struct FAISpawnerDebugStats>& CallFunc_GetSpawnerDebugInfo_SpawnerInfo, bool CallFunc_HasAuthority_ReturnValue);
	void SpawnWildlifeSpawnerOfType(class UClass* SpawnerClass, const struct FTransform& Location, const struct FDataTableRowHandle& BPSpawnerData, class UNWXAIPOI_Component* POIImplementer, class ABP_CreatureSpawnerBase_C** Spawner, int32 SuccessfulSpawns, int32 Countdown, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, int32 CallFunc_GetMaxCreaturesForType_MaxCreatures, int32 CallFunc_GetReservedCreaturesForType_ReservedCreatures, TSet<class UClass*> Temp_class_Variable, bool CallFunc_Less_IntInt_ReturnValue, TMap<class UClass*, struct FS_CreatureWeaponOverride> Temp_class_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void Log_Manager_Totals(const class FString& CallFunc_GetManagerDataString_DataString, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void UpdateNPCs(class APlayerController* NewPlayer, const class FString& PlayerId, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Creature_NPC_C*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IBPI_NPCInterfaces_C> CallFunc_GetNPCFriendshipInterface_self_CastInput, TScriptInterface<class IBPI_NPCFriendship_C> CallFunc_GetNPCFriendshipInterface_Interface, enum class Enum_FriendshipLevel CallFunc_GetFriendshipLevel_FriendshipLevel, int32 CallFunc_GetFriendshipLevel_FriendshipScore, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void RemoveFromReserveCreatures(class ABP_CreatureSpawnerBase_C* CreatureSpawner, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void IsAI_Enabled(bool* AIEnabled);
	void SetAI_Enabled(bool AIEnabled);
	void TryToReserveCreatures(class ABP_CreatureSpawnerBase_C* Spawner, int32 RequestedReserve, int32* TotalReserved, class ABP_CreatureSpawnerBase_C* LSpawner, int32 T, int32 MaxCreaturesForSpawnerType, int32 ReservedCreatures, enum class ECreatureType CreatureType, int32 AmountReserved, int32 ModifiedReserve, int32 InitialReserve, int32 CallFunc_GetMaxCreaturesForType_MaxCreatures, int32 CallFunc_GetReservedCreaturesForType_ReservedCreatures, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSpawnersWithTag(const struct FGameplayTag& Tag, TArray<class ABP_CreatureSpawnerBase_C*>* Spawners, bool bFoundTag, class ABP_CreatureSpawnerBase_C* CurrentSpawner, const TArray<struct FGameplayTag>& SearchTag, const TArray<class ABP_CreatureSpawnerBase_C*>& MatchingSpawners, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void RegisterSpawner(class ABP_CreatureSpawnerBase_C* CreatureSpawner, bool bRegister, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void ReceiveBeginPlay();
	void CreatureSpawned(class ABP_CreatureBase_C* CreatureSpawned);
	void OnPostLogin(class APlayerController* NewPlayer);
	void SetupPOIs();
	void CreatureDestroyed(class AActor* DestroyedActor);
	void SpawnWildlifeIfNeeded();
	void StartSpawning();
	void SimulationStateManagerReady(bool Success);
	void InitializeCreatureDataMap();
	void InitializeCreatureDataMap_OLD();
	void ExecuteUbergraph_BP_CreatureManager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ABP_CreatureBase_C* K2Node_CustomEvent_CreatureSpawned, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_CustomEvent_NewPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXGameModeBase* CallFunc_GetGameMode_GameMode, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsDevEnvironment_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsManagerExpected_ReturnValue, TArray<class AStreamingLevelProxyActor*>& CallFunc_GetSpawnPointPOIs_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_GetMaxCreaturesForType_ReturnValue, int32 CallFunc_GetTotalCreaturesForType_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Vector_Zero_ReturnValue, class UNWXAIPOI_Component* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_AI_StatTracker_C* CallFunc_FinishSpawningActor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool K2Node_CustomEvent_Success, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_1, bool K2Node_DynamicCast_bSuccess_4, class UNWXNavigationSystemV1* CallFunc_GetNWXNavigationSystem_ReturnValue, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FCreatureChallengeEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_BPCreatureData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ANWXAICharacter* CallFunc_Array_Get_Item_2, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Base, bool K2Node_ClassDynamicCast_bSuccess, const struct FSoftClassPath& CallFunc_GetSoftClassPath_ReturnValue, class ABP_CreatureBase_C* CallFunc_GetDefaultObject_ReturnValue, const struct FS_BPCreatureData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void AIEnabledChanged__DelegateSignature();
};

}



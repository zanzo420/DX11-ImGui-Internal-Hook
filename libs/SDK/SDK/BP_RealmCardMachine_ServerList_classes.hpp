#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x468 - 0x370)
// BlueprintGeneratedClass BP_RealmCardMachine_ServerList.BP_RealmCardMachine_ServerList_C
class ABP_RealmCardMachine_ServerList_C : public ABP_NWXActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Bellows;                          // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Small;                            // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambient_Audio_Component_C*         SFX_Amb_Flywheel_Large;                            // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRealmRecipe>                  RealmRecipes;                                      // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               DeploymentPortalLocation;                          // 0x3B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_TemporalPortal>             CreatedPortals;                                    // 0x3D0(0x10)(Edit, BlueprintVisible, Net, RepNotify)
	FMulticastInlineDelegateProperty_            PortalListUpdate;                                  // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_DeploymentState>            DeploymentStatuses;                                // 0x3F0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_            DeploymentsStatusUpdate;                           // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          PortalUpdateTimer;                                 // 0x410(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasActivePortal;                                   // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlayerSpawnCorner;                                 // 0x420(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeightBetweenSpawns;                               // 0x438(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DistanceBetweenSpawns;                             // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnAreaRowCount;                                 // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnAreaColumnCount;                              // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnAreaDepthCount;                               // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       PlayerSpawnLocations;                              // 0x450(0x10)(Edit, BlueprintVisible)
	class FName                                  TemporalRealmStartTag;                             // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RealmCardMachine_ServerList_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void InteractReleased(bool* Success);
	void InteractPressed(bool* Success);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, bool CallFunc_HasPermissions_HasPermission);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_HasPermissions_HasPermission);
	void MakeRealmRecipe(class UTemporalRealm* TemporalRealm, struct FRealmRecipe* RealmRecipe, const TArray<struct FItemDataReference>& CardsRequired, TMap<enum class EBiomeID, struct FItemDataReference> Card, TMap<enum class EBiomeID, struct FItemDataReference> K2Node_MakeVariable_MakeVariableOutput, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetRealmName_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagRequirements_ReturnValue, const struct FRealmPlacementRequirement& K2Node_MakeStruct_RealmPlacementRequirement, TArray<struct FRealmPlacementRequirement>& K2Node_MakeArray_Array, const struct FRealmRecipe& K2Node_MakeStruct_RealmRecipe, const struct FItemDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ContainsRunningDeployment(TArray<struct FDeployment>& Deployments, const class FString& DepName, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FDeployment& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FindMatchingRealmRecipesFromDARef(const struct FItemDataReference& BiomeCardDARef, bool* Found, TArray<struct FRealmRecipe>* Recipes, bool RecipeFound, const TArray<struct FDataTableRowHandle>& ItemData, const TArray<struct FRealmRecipe>& MatchedRecipes, const struct FRealmRecipe& CurrentRecipe, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EBiomeID CallFunc_GetBiomeIDFromRealmCard_ReturnValue, enum class ERealmCardType CallFunc_GetRealmCardAssetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FRealmRecipe& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HasPermissions(class AController* Controller, bool* HasPermission, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue);
	void SpawnPlayerStarts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerStart* CallFunc_FinishSpawningActor_ReturnValue);
	void PopulatePlayerSpawnLocations(int32 Z, int32 Y, int32 X, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& K2Node_MathExpression_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
	void JoinDeployment(class AController* PlayerController, const class FString& ID, class ANWXTravelController* K2Node_DynamicCast_AsNWXTravel_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPermissions_HasPermission);
	class FString MakeRealmDescription(class APawn* CharacterPawn, const struct FRealmInfluenceValues& Influence, const class FString& MapName, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_InfluenceToString_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void UpdateDeployState(enum class ETemporalPortalState State, const class FString& DeploymentName, int32 Index, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FS_TemporalPortal& CallFunc_Array_Get_Item, const struct FS_TemporalPortal& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnListDeploymentsComplete(TArray<struct FDeployment>& Deployments, struct FOnlineServiceStatus& Status, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsSuccess_bIsSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FDeployment& CallFunc_Array_Get_Item, const struct FS_DeploymentState& K2Node_MakeStruct_S_DeploymentState, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FS_TemporalPortal& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ContainsRunningDeployment_Result, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void StartListDeployments(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_PortalStatuses();
	void OnRep_TemporalPortals();
	void OnCreateDeployComplete(struct FCreateDeployResponse& Response, struct FOnlineServiceStatus& Status, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_IsSuccess_bIsSuccess);
	void StartCreateDeploy(class AController* Interacting_Controller, struct FRealmRecipe& Recipe, int32 Ferocity, int32 Seed, struct FRealmSettings& RealmSettings, bool TestRealm, const class FString& POIDistributionKey, const TArray<class FString>& Realm_Cards, TArray<struct FGuid>& CallFunc_SetRealmCardIDArray_ReturnValue, TArray<class FString>& CallFunc_ConvertTagContainerToStringArray_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, const class FString& CallFunc_GetMapName_MapName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetMapName_MapName_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_MakeRealmDescription_ReturnValue, bool CallFunc_HasPermissions_HasPermission, bool CallFunc_IsValid_ReturnValue, TArray<class FString>& CallFunc_ConvertTagContainerToStringArray_ReturnValue_1, int32 CallFunc_GetNextRealmPower_NextRealmPower, const struct FTemporalConfig& K2Node_MakeStruct_TemporalConfig, const class FString& CallFunc_CreateDeployWithTemporalConfigBP_OutDeploymentName, const struct FS_TemporalPortal& K2Node_MakeStruct_S_TemporalPortal, int32 CallFunc_Array_Add_ReturnValue);
	void UserConstructionScript();
	void PerformClientSideInteraction(class AController* Controller);
	void ReceiveBeginPlay();
	void PlayerInteraction(class AController* Controller);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void ExecuteUbergraph_BP_RealmCardMachine_ServerList(int32 EntryPoint, TArray<class UTemporalRealm*>& CallFunc_GetAllTemporalRealm_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTemporalRealm* CallFunc_Array_Get_Item, const struct FRealmRecipe& CallFunc_MakeRealmRecipe_RealmRecipe, class AController* K2Node_Event_Controller, const class FString& CallFunc_GetMapName_MapName, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsMapInBuild_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* K2Node_CustomEvent_Controller, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPermissions_HasPermission, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void DeploymentsStatusUpdate__DelegateSignature(TArray<struct FS_DeploymentState>& DeploymentStatuses);
	void PortalListUpdate__DelegateSignature(TArray<struct FS_TemporalPortal>& TemporalPortals);
};

}



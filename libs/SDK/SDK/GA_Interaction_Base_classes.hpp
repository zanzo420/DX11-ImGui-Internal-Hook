#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x248 (0x668 - 0x420)
// BlueprintGeneratedClass GA_Interaction_Base.GA_Interaction_Base_C
class UGA_Interaction_Base_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                 Pawn;                                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InstigatingActor;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_InteractionPhase                InteractionPhase;                                  // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InteractableTimeout;                               // 0x448(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PayloadParseError;                                 // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousPhaseSucceeded;                            // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresFinishPhase;                               // 0x452(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionTargetData                InteractionData;                                   // 0x458(0x180)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bExecutedPhaseSuccessful;                          // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStopAtExecutedPhase;                              // 0x5D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityPayloadHandle         ExecutedPhasePayload;                              // 0x5E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TimeoutEventHandle;                                // 0x600(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         Payload;                                           // 0x608(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PayloadIndex;                                      // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAdvancePhase;                                     // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 OptionalGameplayTags;                              // 0x630(0x20)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                       InteractionSqrDist;                                // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InteractionTraceRange;                             // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InteractionBuffer;                                 // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_Base_C* GetDefaultObj();

	void AuthorityLogUnableToValidateInteraction(class UObject* Interactable, const class FString& InteractionLocationText, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_Vector3fToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_VectorToText_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FVector3f& CallFunc_Conv_Vector3fToString_InVec_ImplicitCast);
	void GetInteractableTransform(struct FTransform* Transform, class UObject* CallFunc_GetInteractable_Interactable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetInteractableTransform_Transform, bool CallFunc_IsValid_ReturnValue);
	void IsInteractionInRange(bool* bSuccess, double MaxInteractionSqrDist, class UObject* Interactable, const struct FTransform& CallFunc_GetInteractableTransform_Transform, const struct FTransform& CallFunc_GetInteractableTransform_Transform_1, class APawn* CallFunc_GetPawn_Pawn, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double K2Node_MathExpression_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetInteractable_Interactable, const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FBox& CallFunc_MakeBox_ReturnValue, double CallFunc_GetDistanceFromPointToBox_Distance, class APawn* CallFunc_GetPawn_Pawn_1, double CallFunc_Square_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_DistanceSquared_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void ValidateInteraction(bool* bSuccess, class UObject* Interactable, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_K2_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_HasAuthority_ReturnValue_1, bool CallFunc_CanInteractWithActor_InteractAvailable, class APawn* CallFunc_GetPawn_Pawn, bool CallFunc_IsInteractionInRange_bSuccess, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnInteractionExecuted(const struct FGameplayTagContainer& InteractionTags, class APawn* InstigatorPawn, class UObject* CallFunc_GetInteractable_Interactable, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPawn_Pawn);
	void PopulateVariables(bool* bSuccess, bool CallFunc_ObtainVariablesPawnOwner_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags);
	void GetInstigatingActor(class AActor** InstigatingActor);
	void GetTargetActor(class AActor** TargetActor);
	void ParsePayloadItemReference(bool* bSuccess, struct FItemDataReference* Value, const struct FItemDataReference& LocalValue, int32 Temp_int_Variable, const struct FSoftObjectPath& CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue, const struct FItemDataReference& K2Node_MakeStruct_ItemDataReference, int32 CallFunc_Add_IntInt_ReturnValue);
	void ParsePayloadGameplayTagContainer(bool* bSuccess, struct FGameplayTagContainer* Value, const struct FGameplayTagContainer& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetGameplayTagConatinerFromPayload_Success, const struct FGameplayTagContainer& CallFunc_GetGameplayTagConatinerFromPayload_GameplayTagContainer);
	void ParsePayloadGuid(bool* bSuccess, struct FGuid* Value, const struct FGuid& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetGuidFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasGuid_ReturnValue);
	void ParsePayloadString(bool* bSuccess, class FString* Value, const class FString& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetStringFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasString_ReturnValue);
	void ParsePayloadInt(bool* bSuccess, int32* Value, int32 LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetIntFromPayload_Success, int32 CallFunc_GetIntFromPayload_Integer);
	void ParsePayloadBool(bool* bSuccess, bool* bValue, bool bLocalValue, int32 Temp_int_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasBool_ReturnValue);
	void GetPawn(class APawn** Pawn);
	void SendInteractionTelemetryEvent(const class FString& EventName, class APawn* CallFunc_GetPawn_Pawn, class UObject* CallFunc_GetInteractable_Interactable);
	void GetInteractable(class UObject** Interactable, class UObject* InteractableObj, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue);
	void ValidatePrimaryActors(class AActor* ExpectedPawn, bool* bSuccess, class APawn** ValidPawn, const class FString& CallFunc_GetDisplayName_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ObtainVariablesPawnOwner(bool* bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_ValidatePrimaryActors_bSuccess, class APawn* CallFunc_ValidatePrimaryActors_ValidPawn);
	void ParsePayload(const struct FGameplayEventData& EventData, bool* bSuccess, const struct FGameplayEventData& LocalEventData, const struct FGameplayTag& EventTag, const struct FInteractionTargetData& CallFunc_GetInteractionData_OutData, bool CallFunc_IsValid_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Interaction_Base(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_PopulateVariables_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ParsePayload_bSuccess, bool CallFunc_ValidateInteraction_bSuccess);
};

}



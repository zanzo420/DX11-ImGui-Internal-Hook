#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x210 - 0xF0)
// BlueprintGeneratedClass BP_Structure_Audio_Component.BP_Structure_Audio_Component_C
class UBP_Structure_Audio_Component_C : public UStructureAudioComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MaxDistanceCheck;                                  // 0xF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LargeCompositePieceThreshold;                      // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStructureCompositePiece*>      CompletedStructures;                               // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          BulkCompletionTimer;                               // 0x118(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Temp_LastPawnToAddResouces;                        // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FS_StructurePieceDestructionProperties> Cached_Destruction_Properties;                     // 0x128(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                DestroyedPieceIds;                                 // 0x178(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          BulkDestructionTimer;                              // 0x188(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Destruction_By_Local_Player;                       // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Tracked_Completed_Piece_Ids;                       // 0x198(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                Tracked_Placed_Piece_Ids;                          // 0x1A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_CraftingStationComponent_C*        CachedCraftingStationComponent;                    // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AStructureConstructedBase*             CachedOwnerAsStructure;                            // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CraftingStartTime;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TotalCraftingTime;                                 // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ClientCraftingUpdateTimer;                         // 0x1D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URealmTimerComponent*                  CachedRealmTimer;                                  // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAVFXFocusComponent*                   CachedFocusScoreComponent;                         // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               CraftingProgressRTPC;                              // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CraftingProgressRTPCMaxValue;                      // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                SwitchesToLoad;                                    // 0x200(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Structure_Audio_Component_C* GetDefaultObj();

	void ActorIsLocalPC(class AActor* Actor, bool* IsLocalPC, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
	void ShouldFireClientEventForStructure(class UObject* Structure, bool* bShouldFire, bool CallFunc_IsDedicatedServer_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess);
	void ClientOnly_OnStructureStateIntialized(class UObject* Structure, enum class EStructureState State, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetLocalRemoteSwitchForInstigator(class AActor* Instigator, class UAkSwitchValue** LocalRemoteSwitch, bool Temp_bool_Variable, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* K2Node_Select_Default);
	void GetStructureDestructionSound(struct FStructureAssetReference& StructureAssetRef, TSoftObjectPtr<class UAkAudioEvent>* FoundAkAudioEvent, TSoftObjectPtr<class UAkAudioEvent> DestructionAkAudioEvent, const struct FStructureData& StructureData, enum class EStructureFXActivationTime Temp_byte_Variable, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void UpdateFocusMixingSubscription(const TArray<class UScopedAkComponent*>& ScopedAkComponents, int32 Temp_int_Array_Index_Variable, class UAVFXFocusSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UAVFXFocusComponent* CallFunc_GetFocusScoreComponent_FocusScoreComponent, int32 CallFunc_GetFocusRank_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAVFXFocusComponent* CallFunc_GetFocusScoreComponent_FocusScoreComponent_1, class UAVFXFocusComponent* CallFunc_GetFocusScoreComponent_FocusScoreComponent_2, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure_1, int32 CallFunc_Array_Add_ReturnValue, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure_2, TArray<class UScopedAkComponent*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UScopedAkComponent* CallFunc_Array_Get_Item, bool CallFunc_IsSuspended_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UScopedAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAVFXFocusComponent* CallFunc_GetFocusScoreComponent_FocusScoreComponent_3, bool CallFunc_IsValid_ReturnValue_2);
	void GetFocusScoreComponent(class UAVFXFocusComponent** FocusScoreComponent, class AActor* CallFunc_GetOwner_ReturnValue, class UAVFXFocusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetRealmTime(double* RealmTime, class URealmTimerComponent* CallFunc_GetRealmTimer_RealmTimer, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue);
	void GetRealmTimer(class URealmTimerComponent** RealmTimer, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetOwnerAsStructure(class AStructureConstructedBase** OwnerAsStructure, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess);
	void GetCraftingStationComponent(class UBP_CraftingStationComponent_C** CraftingStationComponent, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateCraftingProgressRTPC(bool IsComplete, double RemainingCraftingTimeClamped, const TArray<class UScopedAkComponent*>& ScopedAkComponents, double RemainingCraftingTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class UScopedAkComponent*>& CallFunc_Map_Values_Values, double CallFunc_GetRealmTime_RealmTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class AStructureConstructedBase* CallFunc_GetOwnerAsStructure_OwnerAsStructure_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UScopedAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UScopedAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void HandleCraftingDataUpdated(const struct FS_Crafting_CraftInProgress& CraftingData, class UBP_CraftingStationComponent_C* CraftingStation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetCraftingStationComponent_CraftingStationComponent, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void Generate_Piece_Id_List(class UStructureCompositeComponent* Component, int32 Piece_Count, TArray<int32>& Ref_Placed_Piece_Ids, TArray<int32>* Completed_Piece_Ids, int32 Loc_Piece_Id, class UStructureCompositePiece* Composite_Piece, const TArray<int32>& Loc_Completed_Piece_Ids, TArray<class UStructureCompositePiece*>& CallFunc_Get_Composite_Pieces_From_Component_Structure_Composite_Pieces, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UStructureCompositePiece* CallFunc_Array_Get_Item, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, int32 CallFunc_Array_AddUnique_ReturnValue, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Add_Piece_Id_To_Destroyed_List(int32& Piece_Id, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Get_Composite_Pieces_From_Component(class UStructureCompositeComponent* Component, int32 Piece_Count, TArray<class UStructureCompositePiece*>* Structure_Composite_Pieces, const TArray<class UStructureCompositePiece*>& Structure_Component_Pieces, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	int32 Get_Composite_Piece_Count_From_Owner(class UStructureCompositeComponent** Structure_Composite_Component, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, int32 CallFunc_GetPieceCount_ReturnValue);
	void Update_Composite_Pieces(class UStructureCompositePiece* Piece, int32 Updated_Piece_Id, bool Pieces_Added, int32 Tracked_Piece_Id, const TArray<int32>& Updated_Completed_Piece_Ids, int32 Composite_Piece_Count, class UStructureCompositeComponent* Composite_Component, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<int32>& CallFunc_GetPreviouslyPlacedPieceIds_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<int32>& CallFunc_GetCurrentCompletedPieceIds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdatePieceIdLists_ReturnValue, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Handle_Initial_Piece_Destruction(class UAkSwitchValue* MaterialSwitch, int32 Piece_Count, class UPhysicalMaterial* Physical_Material, class UScopedAkComponent* Ak_Component, const struct FS_StructurePieceDestructionProperties& Destroyed_Piece, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, class UAkSwitchValue* CallFunc_Get_Size_Switch_Switch_Value, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, int32 CallFunc_Array_Get_Item, const struct FS_StructurePieceDestructionProperties& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAkSwitchValue* K2Node_Select_Default);
	void UnbindAudioEvents(class UStructureEventsObject* Event_Obj, class AActor* Structure, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void Ensure_Piece_Destruction_Data_Is_Cached(class UStructureCompositePiece* Piece, const class FString& Piece_, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, bool CallFunc_Map_Contains_ReturnValue);
	void On_Bulk_Destroyed_Timer(int32 Total_Piece_Count, const TArray<struct FVector>& Surface_Locs, TMap<class UAkSwitchValue*, struct FS_StructureSurface> Surfaces_Map, class UAkSwitchValue* Surface_Switch, const TArray<struct FVector>& Event_Locs, class UAkAudioEvent* Event, class UPhysicalMaterial* Material, const struct FVector& Loc, const struct FS_StructurePieceDestructionProperties& Destroyed_Piece_Properties, TMap<class UAkAudioEvent*, struct FS_StructureSurface> Event_Overrides, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UAkSwitchValue*>& CallFunc_Map_Keys_Keys, class UAkSwitchValue* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FS_StructureSurface& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, TArray<class UAkAudioEvent*>& CallFunc_Map_Keys_Keys_1, class UAkAudioEvent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_StructureSurface& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FS_StructureSurface& K2Node_MakeStruct_S_StructureSurface, int32 CallFunc_Array_Add_ReturnValue, const struct FS_StructureSurface& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FS_StructureSurface& K2Node_MakeStruct_S_StructureSurface_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_StructureSurface& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FS_StructurePieceDestructionProperties& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue);
	void Handle_Piece_Destroyed(const struct FStructure_AudioPayload& Audio_Payload, bool CallFunc_ActorIsLocalPC_IsLocalPC, bool CallFunc_BooleanOR_ReturnValue);
	void Handle_New_Piece(const struct FStructure_AudioPayload& Audio_Payload, bool* Success, class UObject** Structure, class UStructureCompositePiece* Structure_Composite_Piece, class UObject* Structure_Object, class UObject* CallFunc_GetStructureObjectFromAudioPayload_StructureObject, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess);
	void CacheDestructionData(class UStructureCompositePiece* Structure_Composite_Piece, const class FString& Piece_Id, const struct FVector& World_Location, class UObject* NewLocalVar, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, class UAkAudioEvent* CallFunc_Get_Destruction_Properties_Event_Override, class UAkSwitchValue* CallFunc_Get_Destruction_Properties_Material_Switch, const struct FS_StructurePieceDestructionProperties& K2Node_MakeStruct_S_StructurePieceDestructionProperties);
	void HandleStructureDestroyed(class UObject* Structure, class AActor* Instigator, class UAkSwitchValue* MaterialSwitch, const struct FVector& SFXWorldLocation, class ABP_Structure_Constructed_C* StructureConstructed, const struct FStructureAssetReference& Structure_Reference, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, bool CallFunc_IsServer_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UAkSwitchValue> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UAkSwitchValue* CallFunc_GetLocalRemoteSwitchForInstigator_LocalRemoteSwitch, TSoftObjectPtr<class UAkSwitchValue> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_GetStructureDestructionSound_FoundAkAudioEvent, TArray<TSoftObjectPtr<class UAkSwitchValue>>& K2Node_MakeArray_Array, TArray<struct FVector>& K2Node_MakeArray_Array_1, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, TArray<class UMeshComponent*>& CallFunc_GetMeshComponents_ReturnValue, class UAkSwitchValue* CallFunc_GetAkSwitchFromMeshArray_ReturnValue, TArray<struct FRTPCValuePair>& Temp_struct_Variable, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, bool CallFunc_IsValid_ReturnValue);
	void IsPawnLocal(class APawn* TestPawn, bool* IsLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	void Temp_IsLastPawnToAddResourcesLocal(bool* IsLocal, bool CallFunc_IsPawnLocal_IsLocal);
	void Handle_Resources_Added(struct FStructureAddResourcesContext& AddResourcesSFX, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Play_Surface_Audio(class UAkAudioEvent* Ak_Event, class UAkSwitchValue* Surface_Switch, const struct FS_StructureSurface& Surface_Struct, int32 Total_Piece_Count, bool IsInstigatorLocal, class UScopedAkComponent* Ak_Component, class UAkSwitchValue* Temp_object_Variable, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, class UAkSwitchValue* CallFunc_Get_Size_Switch_Switch_Value, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, class UAkSwitchValue* K2Node_Select_Default, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void Get_Total_Piece_Count(TMap<class UAkSwitchValue*, struct FS_StructureSurface> Surfaces_Map, int32* Piece_Count, int32 Total_Piece_Count, TArray<struct FS_StructureSurface>& CallFunc_Map_Values_Values, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_StructureSurface& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Size_Switch(int32 Piece_Count, class UAkSwitchValue** Switch_Value, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkSwitchValue* K2Node_Select_Default, class UAkSwitchValue* Temp_object_Variable_2, bool Temp_bool_Variable_2, class UAkSwitchValue* K2Node_Select_Default_1, class UAkSwitchValue* Temp_object_Variable_3, bool Temp_bool_Variable_3, class UAkSwitchValue* K2Node_Select_Default_2, class UAkSwitchValue* Temp_object_Variable_4, bool Temp_bool_Variable_4, class UAkSwitchValue* K2Node_Select_Default_3, class UAkSwitchValue* Temp_object_Variable_5, class UAkSwitchValue* K2Node_Select_Default_4);
	void Play_Completion_Audio(class UObject* Structure, bool IsInstigatorLocal, class UAkSwitchValue* SurfaceSwitch, class UAkSwitchValue* Local_Remote, class UObject* LStructure, class UScopedAkComponent* Scoped_Ak_Component, class UNWXPhyiscalMaterial* Completion_Physical_Material, class UAkAudioEvent* Event_Override, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_3, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, class UAkSwitchValue* CallFunc_GetAkSwitchFromMeshArray_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkAudioEvent* CallFunc_Get_Completion_Properties_Event_Override, class UAkSwitchValue* CallFunc_Get_Completion_Properties_Material_Switch, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void GetStructureObjectFromAudioPayload(const struct FStructure_AudioPayload& AudioPayload, class UObject** StructureObject, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue);
	void BuildAudioPayload(class UObject* InStructure, class AActor* Instigator, struct FStructure_AudioPayload* AudioPayload, const struct FStructure_AudioPayload& LocalAudioPayload, const struct FVector& WorldLocation, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId);
	void HandleSchematicCompleted(class UObject* Structure);
	void HandleSchematicPlacement(class UObject* InStructure, class APawn* OwningPlayerPawn, class AController* OwningPlayerController, const struct FStructure_AudioPayload& AudioPayload, const struct FVector& WorldLocation, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, class AController* Temp_object_Variable, class AController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBulkCompletedEventTimer(const TArray<class UStructureCompositePiece*>& AlreadyPlayedStructures, class UAkAudioEvent* Completion_Override_Event, class UStructureCompositePiece* Structure, int32 Total_Piece_Count, class UScopedAkComponent* Ak_Component, TMap<class UAkSwitchValue*, struct FS_StructureSurface> Surfaces_Map, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Get_Total_Piece_Count_Piece_Count, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Temp_IsLastPawnToAddResourcesLocal_IsLocal, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FS_StructureSurface& K2Node_MakeStruct_S_StructureSurface, class UAkAudioEvent* CallFunc_Get_Completion_Properties_Event_Override, class UAkSwitchValue* CallFunc_Get_Completion_Properties_Material_Switch, class UStructureCompositePiece* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UStructureCompositePiece* CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Temp_IsLastPawnToAddResourcesLocal_IsLocal_1, TArray<class UAkSwitchValue*>& CallFunc_Map_Keys_Keys, class UAkSwitchValue* CallFunc_Array_Get_Item_2, const struct FS_StructureSurface& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, TMap<class UAkSwitchValue*, struct FS_StructureSurface> CallFunc_GetSurfaceTypesFromMultipleStructures_Surface_Data, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void AddStructureToBulkCompleteQueue(class UStructureCompositePiece* Structure, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddResourcesSFX(class APawn* Pawn, TArray<struct FInventoryEntry>& InputtedResources, bool Post_Construction, const TArray<TSoftObjectPtr<class UAkAudioEvent>>& AudioEventsToTrigger, const struct FInventoryEntry& CurrentItem, const struct FVector& Location, class UAkSwitchValue* Local_Remote_Switch, class UAkAudioEvent* Added_Event, class UAkComponent* Ak_Component, class APawn* LPawn, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAkSwitchValue* Temp_object_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FResourceAudioSpent& CallFunc_GetTableCellData_OutData, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_Array_Get_Item_1, class UAkAudioEvent* CallFunc_ResolveAudio_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array_1, bool CallFunc_IsPawnLocal_IsLocal, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBP_LoadAndPlay_Audio_C* CallFunc_AddComponentByClass_ReturnValue, const struct FTaggableSound& K2Node_Select_Default_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void BindAudioEvents(class UObject* Structure, class UStructureEventsObject* Event_Object, class UObject* LStructure, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, bool CallFunc_IsValid_ReturnValue);
	void DistanceCheck(const struct FVector& Location, bool* IsInRange, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void PlaceBlueprintSFX(const struct FStructure_AudioPayload& AudioPayload, bool InstigatorIsLocal, class APawn* InstigatorPawn, class UAkComponent* Ak_Component, class UObject* LStructure, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable, class UAkSwitchValue* K2Node_Select_Default, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
	void OnCompletedEvent(class UObject* StructureObject, class AActor* Instigator);
	void OnPlacedEvent(class UObject* StructureObject, class AActor* Instigator);
	void OnDestroy(class UObject* StructureObject, class AActor* Instigator);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void AutoUpdateCraftingProgressRTPC();
	void ExecuteUbergraph_BP_Structure_Audio_Component(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAVFXFocusComponent* CallFunc_GetFocusScoreComponent_FocusScoreComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetCraftingStationComponent_CraftingStationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetCraftingStationComponent_CraftingStationComponent_1, bool CallFunc_IsValid_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UObject* K2Node_CustomEvent_StructureObject, class AActor* K2Node_CustomEvent_Instigator, const struct FStructure_AudioPayload& CallFunc_BuildAudioPayload_AudioPayload, bool CallFunc_ShouldFireClientEventForStructure_bShouldFire, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UObject* K2Node_CustomEvent_StructureObject_1, class AActor* K2Node_CustomEvent_Instigator_1, const struct FStructure_AudioPayload& CallFunc_BuildAudioPayload_AudioPayload_1, bool CallFunc_ShouldFireClientEventForStructure_bShouldFire_1, class UObject* K2Node_CustomEvent_StructureObject_2, class AActor* K2Node_CustomEvent_Instigator_2, bool CallFunc_ShouldFireClientEventForStructure_bShouldFire_2, const struct FStructure_AudioPayload& CallFunc_BuildAudioPayload_AudioPayload_2, bool CallFunc_Handle_New_Piece_Success, class UObject* CallFunc_Handle_New_Piece_Structure);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_StagedConstructionComponent.BP_StagedConstructionComponent_C
class UBP_StagedConstructionComponent_C : public UStagedConstructionComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_ObjectArray>                PieceLevel;                                        // 0xA8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class UBP_StagedConstructionComponent_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void UpdatePieceConstructionBucket(class UObject* NewPiece, bool CallFunc_IsValid_ReturnValue);
	void GetTotalPieceCount(int32* Count, int32 PieceCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ObjectArray& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void GetPieceIdsInConstructionOrder(TArray<int32>* OutPieceIds, const struct FS_ObjectArray& CombinedArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_ObjectArray& CallFunc_Array_Get_Item, const struct FS_ObjectArray& CallFunc_ObjectArrayAppend_CombinedObjectArray, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AddPieceToConstructionBucket(class UObject* NewPiece, int32 NewLevel, const struct FS_ObjectArray& ObjectsForType, class UObject* LNewPiece, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FS_ObjectArray& CallFunc_AddPieceToBucket_UpdatedPieceBucket, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_CreatePieceLevel_Level, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FS_ObjectArray& CallFunc_AddPieceToBucket_UpdatedPieceBucket_1);
	void GetPieceLevels(TArray<struct FS_ObjectArray>* PieceLevels);
	void DEBUG_OutputLevels(class UStructureCompositeComponent* CompositeComponent, class ABP_Structure_Composite_C* OwningStructure, const struct FS_ObjectArray& LevelObjects, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetStructureDebugName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ObjectArray& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
	void FindAdjacentPiecesBelowLevel(class UObject* CentralPiece, int32 MaxLevel, TArray<class UObject*>* ConnectedPiecesBelowLevel, TSet<class UObject*> ConnectedObjects, const TArray<class UObject*>& LAdajacentObjects, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_IsServer_ReturnValue, TArray<class UObject*>& CallFunc_GetAllConnectedStructures_ConnectedStructures, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class UObject*>& CallFunc_Set_ToArray_Result, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetPieceLevel_FoundLevel, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetMinLevelInConnectedPieces(class UObject* ReferencePiece, int32 StartingMin, int32* MinLevel, TSet<class UObject*> LowerLevelPieces, int32 LMinLevel, const TArray<class UObject*>& LAdajacentObjects, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FStructureSupportObjectData>& Temp_struct_Variable, const struct FStructureSupportObjectData& CallFunc_Array_Get_Item, int32 CallFunc_GetPieceLevel_FoundLevel, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UObject* CallFunc_GetSupportObjectFromStructure_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureSupportObjectData>& CallFunc_GetSupportingObjects_OutSupportingStructures);
	void AddPieceToBucket(const struct FS_ObjectArray& PieceBucket, class UObject*& Piece, struct FS_ObjectArray* UpdatedPieceBucket, const struct FS_ObjectArray& LPieceBucket, class UObject* LPiece, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, int32 CallFunc_ObjectArrayAdd_AddIndex, const struct FS_ObjectArray& CallFunc_ObjectArrayAdd_UpdatedArray, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ObjectArrayContains_ReturnValue);
	void GetPieceLevel(class UObject* Piece, int32* FoundLevel, int32 MinLevel, class UObject* LPiece, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_ObjectArray& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ObjectArrayContains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreatePieceLevel(class UObject* NewPiece, int32* Level, int32 StartingMin, int32 MinLevel, class UObject* LPiece, const TArray<class UObject*>& LAdajacentActors, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_GetMinLevelInConnectedPieces_MinLevel, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsObjectAtGroundLevel_ReturnValue);
	void RemovePieceFromConstructionBucket(class UObject* PieceObject, class AActor* Instigator, int32 LPieceLevel, const struct FS_ObjectArray& ObjectsForType, enum class ESnapType NewPieceSnapType, class UObject* LRemovedPiece, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ObjectArrayRemove_Success, const struct FS_ObjectArray& CallFunc_ObjectArrayRemove_UpdatedObjectArray, bool CallFunc_ObjectArrayContains_ReturnValue, int32 CallFunc_GetPieceLevel_FoundLevel, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnLinkedReferencesRestored();
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_StagedConstructionComponent(int32 EntryPoint);
};

}


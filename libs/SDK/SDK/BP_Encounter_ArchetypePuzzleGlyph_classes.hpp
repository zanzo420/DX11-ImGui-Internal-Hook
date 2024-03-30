#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x4E0 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C
class ABP_Encounter_ArchetypePuzzleGlyph_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        GlyphTotalCount;                                   // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A682[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_ArenaContainer_C* Hope_Containment_Structure;                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    Container_Glyph_Anchors;                           // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AGlyphVolume*>                  PuzzleGlyphs;                                      // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        DiscoveredGlyphCount;                              // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllGlyphsFound;                                    // 0x48C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A683[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AGlyphVolume*, class AGlyphVolume*> GlyphToGlyphCopy;                                  // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypePuzzleGlyph_C* GetDefaultObj();

	void CollectDebuggerShapes(TArray<struct FEncounterDebugLine>* OutDebugLines, TArray<struct FEncounterDebugPoint>* OutDebugPoints, const struct FVector& HECUHeightOffset, const struct FVector& GlyphHeightOffset, const struct FVector& GlyphBeaconOffset, const struct FLinearColor& LineColour, const struct FVector& PieceLocation, class AGlyphVolume* CurrentGlyph, const struct FVector& HECULocation, const TArray<struct FEncounterDebugPoint>& DebugPoints, const TArray<struct FEncounterDebugLine>& DebugLines, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FEncounterDebugLine& K2Node_MakeStruct_EncounterDebugLine, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasBeenInteractedWith_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FEncounterDebugLine& K2Node_MakeStruct_EncounterDebugLine_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FEncounterDebugLine>& CallFunc_CollectDebuggerShapes_OutDebugLines, TArray<struct FEncounterDebugPoint>& CallFunc_CollectDebuggerShapes_OutDebugPoints);
	void OnGlyphInteracted(class AGlyphVolume* InteractedVolume, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGlyphVolume* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	TArray<class AGlyphVolume*> GetGlyphs();
	void SetupPuzzleGlyphs(const struct FVector& EncounterLocation, class UEncounterPOIPersistedObject* PersistedObject, TScriptInterface<class IEncounterManagerInterface> CallFunc_GetEncounterManager_ReturnValue, TScriptInterface<class IEncounterManagerInterface> CallFunc_GetEncounterManager_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void InitializePuzzle(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UEncounterArchetypeDataAssetPuzzleGlyph* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Glyph, bool K2Node_DynamicCast_bSuccess, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1);
	void SpawnPuzzleGlyphs(int32 GlyphAnchorsNum, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_RemoveInvalidEntriesFromArray_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Volume_Glyph_HECU_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SpawnRewardStructure(const struct FStructureAssetReference& HECU_SDA, const struct FTransform& HECU_Transform, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FStructureEncounterArenaSpawnContext& K2Node_MakeStruct_StructureEncounterArenaSpawnContext, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container, bool K2Node_DynamicCast_bSuccess_2, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1, bool K2Node_DynamicCast_bSuccess_3);
	class FString CollectDebuggerInformation(int32 RevealedCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, bool CallFunc_HasBeenInteractedWith_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void NoCreaturesRemain(bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned);
	void Initialize(TSubclassOf<class IInterface> Temp_class_Variable, TArray<struct FTransform>& CallFunc_Get_Glyph_Anchors_Out_Anchor_Transforms, bool CallFunc_Get_Glyph_Anchors_GetTransformsSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void CompleteEncounter();
	void BeginEncounter();
	void Start();
	void CleanupEncounter();
	void ExecuteUbergraph_BP_Encounter_ArchetypePuzzleGlyph(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned, bool CallFunc_IsValid_ReturnValue_1, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}



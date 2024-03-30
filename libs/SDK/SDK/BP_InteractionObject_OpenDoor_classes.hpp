#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_OpenDoor.BP_InteractionObject_OpenDoor_C
class UBP_InteractionObject_OpenDoor_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_OpenDoor_C* GetDefaultObj();

	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionAvailable_CanInteract, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_CanToggle_CanToggle);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, class UObject* LStructure, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue);
	void GetText(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, class FText* InteractionText, class FText CallFunc_GetText_InteractionText, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsOpen_ReturnValue);
};

}



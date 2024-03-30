#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_OpenDoor.BP_InteractionObject_OpenDoor_C
// (None)

class UClass* UBP_InteractionObject_OpenDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_OpenDoor_C");

	return Clss;
}


// BP_InteractionObject_OpenDoor_C BP_InteractionObject_OpenDoor.Default__BP_InteractionObject_OpenDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_OpenDoor_C* UBP_InteractionObject_OpenDoor_C::GetDefaultObj()
{
	static class UBP_InteractionObject_OpenDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_OpenDoor_C*>(UBP_InteractionObject_OpenDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_OpenDoor.BP_InteractionObject_OpenDoor_C.IsInteractionAvailable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PieceObject_Door_C*      K2Node_DynamicCast_AsBP_Piece_Object_Door                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionAvailable_CanInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanToggle_CanToggle                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenDoor_C::IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionAvailable_CanInteract, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_CanToggle_CanToggle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenDoor_C", "IsInteractionAvailable");

	Params::UBP_InteractionObject_OpenDoor_C_IsInteractionAvailable_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.K2Node_DynamicCast_AsBP_Piece_Object_Door = K2Node_DynamicCast_AsBP_Piece_Object_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInteractionAvailable_CanInteract = CallFunc_IsInteractionAvailable_CanInteract;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_CanToggle_CanToggle = CallFunc_CanToggle_CanToggle;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function BP_InteractionObject_OpenDoor.BP_InteractionObject_OpenDoor_C.ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_PieceObject_Door_C*      K2Node_DynamicCast_AsBP_Piece_Object_Door                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenDoor_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, class UObject* LStructure, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenDoor_C", "ExecuteInteraction");

	Params::UBP_InteractionObject_OpenDoor_C_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;
	Parms.LStructure = LStructure;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.K2Node_DynamicCast_AsBP_Piece_Object_Door = K2Node_DynamicCast_AsBP_Piece_Object_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BP_InteractionObject_OpenDoor.BP_InteractionObject_OpenDoor_C.GetText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionText                                                  (Parm, OutParm)
// class FText                        CallFunc_GetText_InteractionText                                 (None)
// class UBP_PieceObject_Door_C*      K2Node_DynamicCast_AsBP_Piece_Object_Door                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenDoor_C::GetText(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, class FText* InteractionText, class FText CallFunc_GetText_InteractionText, class UBP_PieceObject_Door_C* K2Node_DynamicCast_AsBP_Piece_Object_Door, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenDoor_C", "GetText");

	Params::UBP_InteractionObject_OpenDoor_C_GetText_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.CallFunc_GetText_InteractionText = CallFunc_GetText_InteractionText;
	Parms.K2Node_DynamicCast_AsBP_Piece_Object_Door = K2Node_DynamicCast_AsBP_Piece_Object_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionText != nullptr)
		*InteractionText = Parms.InteractionText;

}

}



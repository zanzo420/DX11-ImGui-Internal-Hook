#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xC4 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C
class UAIA_Creature_NPC_HarvestChaosStones_C : public UAIA_Creature_NPCVillager_Base_C
{
public:
	float                                        MaxDistance;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPC_HarvestChaosStones_C* GetDefaultObj();

	float GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, class ANWXHarvestableGeometryCollection* LHarvestableGeom, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IDamageVulnerabilityInterface> CallFunc_IsVulnerableToPowerLevel_self_CastInput, const struct FPowerLevel& CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference, bool CallFunc_IsVulnerableToPowerLevel_ReturnValue, class ANWXHarvestableGeometryCollection* K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	float GetNormalizedScore(class AActor* Target, double CallFunc_GetNormalizedDistanceScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, class ANWXHarvestableGeometryCollection* K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection, bool K2Node_DynamicCast_bSuccess);
};

}



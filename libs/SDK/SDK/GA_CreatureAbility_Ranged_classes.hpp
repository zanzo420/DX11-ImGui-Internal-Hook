#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x6B8 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged.GA_CreatureAbility_Ranged_C
class UGA_CreatureAbility_Ranged_C : public UGA_CreatureAbilityBase_C
{
public:
	double                                       ProjectileSpeed;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OverrideProjectileVelocity;                        // 0x518(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ProjectileClass;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ProjectileImpactEffects;                           // 0x538(0x20)(Edit, BlueprintVisible)
	double                                       ProjectileDamage;                                  // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ProjectileSpawnSocket;                             // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bUseOverrideVelocity;                              // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSpawnSocketRotation;                           // 0x569(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9AB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        ImpactGameplayEffects;                             // 0x570(0x10)(Edit, BlueprintVisible)
	bool                                         bFavourHighArc;                                    // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRandomizeArc;                                     // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AB8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ProjectileTarget;                                  // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCustomTargetLocation;                          // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomTargetLocation;                              // 0x598(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SimpleLaunchAngle;                                 // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowSolutionFail;                                // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_TrajectoryTypes              TrajectoryType;                                    // 0x5B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSetCustomTargetLocationRelative;                  // 0x5BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9ABA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomTargetLocationRandomThreshold;               // 0x5C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomArcWeighting;                                // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTargetElevationAsLaunchAngle;                   // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9ABC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocationOffset;                              // 0x5E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LaunchAngle;                                       // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_DamageAttack                 DamageAttribute;                                   // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttackLocationType           AttackLocationType;                                // 0x609(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ConstraintVector;                                  // 0x610(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MissRadius;                                        // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingProjectilePrediction;                         // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AC2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PredictedLocation;                                 // 0x640(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PredictedRotation;                                 // 0x6A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_C* GetDefaultObj();

	void PredictProjectilePath(struct FVector* NewParam, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast);
	void ApplyVelocityMods(struct FVector& Velocity);
	void GetArcPreference(bool* bFavourHighArc);
	void SpawnProjectiles(class UClass* ProjectileClass, const struct FTransform& ProjectileStart, const struct FVector& ProjectileVelocity, class ABP_CreatureBase_C* InstigatingCreature, double ProjectileDamage, class AActor* IntendedTarget, const struct FVector& StartingLocation, TArray<class UClass*>& ImpactGameplayEffects, TMap<class ABP_ProjectileBase_C*, struct FVector>* Projectiles, bool* bSuccess, TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL, const struct FS_ProjectileSourceData& K2Node_MakeStruct_S_ProjectileSourceData, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast);
	void FireProjectile(TMap<class ABP_ProjectileBase_C*, struct FVector> Projectiles, bool* bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_ProjectileBase_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class ABP_ProjectileBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FVector GetProjectileTarget(const struct FTransform& ProjectileStart, bool* bSuccess, const struct FVector& TargetLocationL, double LZConstraint, double LYConstraint, double LXConstraint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_PredictProjectilePath_NewParam, const struct FVector& CallFunc_MakeVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRangedAttackLocation_Location, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void GetProjectileDamage(double* ProjectileDamage, class UAbilitySystemComponent* LAbilitySystem, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_FunctionResult_ProjectileDamage_ImplicitCast, double K2Node_FunctionResult_ProjectileDamage_ImplicitCast_1, double K2Node_FunctionResult_ProjectileDamage_ImplicitCast_2);
	void ValidateProjectile(class ABP_ProjectileBase_C* Projectile, bool* bIsValid, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void PrepareProjectile(class UClass* ProjectileClass, const struct FTransform& ProjectileStart, const struct FVector& ProjectileVector, class AActor* Shooter, double WeaponDamage, bool bUseSocketRotation, TArray<class UClass*>& ImpactGameplayEffects, TMap<class ABP_ProjectileBase_C*, struct FVector>* Projectiles, bool* bSuccess, const struct FVector& LCachedVector, const struct FVector& ProjectileScale, const struct FTransform& ProjectileStartFinal, const struct FVector& StartingLocation, class AActor* IntendedTarget, int32 Temp_int_Array_Index_Variable, double CallFunc_GetProjectileDamage_ProjectileDamage, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_SelectTransform_ReturnValue, TMap<class ABP_ProjectileBase_C*, struct FVector> CallFunc_SpawnProjectiles_Projectiles, bool CallFunc_SpawnProjectiles_bSuccess, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, TArray<class ABP_ProjectileBase_C*>& CallFunc_Map_Keys_Keys, class ABP_ProjectileBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetProjectileClass(class UClass** ProjectileClass, bool* bSuccess);
	void GetProjectileStart(struct FTransform* ProjectileStart, bool* bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	void GetProjectileSpeed(double* ProjectileSpeed, bool* bSuccess);
	void GetProjectileVelocity(const struct FTransform& ProjectileStart, double ProjectileSpeed, const struct FVector& TargetLocation, struct FVector* ProjectileVelocity, bool* bSuccess, const struct FRotator& LStartRotation, const struct FVector& LEnd_Location, const struct FVector& LStartLocation, bool LFavourHighArc, double CallFunc_FClamp_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_ClampAngle_ReturnValue, const struct FVector& CallFunc_CalculateFixedLaunchAngleVelocity_FixedAngleVelocity, double CallFunc_CalculateFixedLaunchAngleVelocity_ProjectileSpeed, double CallFunc_DegSin_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_GetArcPreference_bFavourHighArc, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity, bool CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_RandomBoolWithWeight_Weight_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_BlueprintSuggestProjectileVelocity_LaunchSpeed_ImplicitCast);
	void CreatureAbilityActivate(bool* bSuccess, const struct FVector& TargetLocationL, const struct FVector& ProjectileStartLocationL, class UClass* ProjectileClassL, double ProjectileLaunchDistanceL, double DamageL, const struct FTransform& ProjectileStartL, double ProjectileSpeedL, const struct FVector& ProjectilePrincipalVelocityL, TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL, double CallFunc_GetProjectileDamage_ProjectileDamage, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_GetProjectileClass_ProjectileClass, bool CallFunc_GetProjectileClass_bSuccess, double CallFunc_GetProjectileSpeed_ProjectileSpeed, bool CallFunc_GetProjectileSpeed_bSuccess, const struct FTransform& CallFunc_GetProjectileStart_ProjectileStart, bool CallFunc_GetProjectileStart_bSuccess, const struct FVector& CallFunc_GetProjectileVelocity_ProjectileVelocity, bool CallFunc_GetProjectileVelocity_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_GetProjectileTarget_ReturnValue, bool CallFunc_GetProjectileTarget_bSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_FireProjectile_bSuccess, TMap<class ABP_ProjectileBase_C*, struct FVector> CallFunc_PrepareProjectile_Projectiles, bool CallFunc_PrepareProjectile_bSuccess);
};

}



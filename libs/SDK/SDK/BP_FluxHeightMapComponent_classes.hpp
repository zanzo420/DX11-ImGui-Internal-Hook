#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x218 - 0xA0)
// BlueprintGeneratedClass BP_FluxHeightMapComponent.BP_FluxHeightMapComponent_C
class UBP_FluxHeightMapComponent_C : public UActorComponent
{
public:
	TSoftObjectPtr<class UMaterialInterface>     HeightmapMaterial;                                 // 0xA0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            DebugMesh;                                         // 0xC8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBS_FluxHeightmapDomain               DomainTexture;                                     // 0xF0(0xA)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBS_FluxCaptureVisibility             SceneVisibility;                                   // 0x100(0x34)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_8C1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AreaWorldPixelSize;                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AreaWorldHeight;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CaptureLimitTileSize;                              // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                GroundHeightMap;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeightmapPreviewInstance;                          // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeightmapUpdateInstance;                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                HeightmapUpdateTexture;                            // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeightmapLoad;                                     // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeightmapPostprocessInstance;                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              CaptureComponent;                                  // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Debug;                                             // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AreaWorldSize;                                     // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CaptureOffset;                                     // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaLocation;                                      // 0x1A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaSize;                                          // 0x1C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>     HeghtmapDebug;                                     // 0x1D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       SurfaceHeight;                                     // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AActor>>         SceneVisibilityReferences;                         // 0x208(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_FluxHeightMapComponent_C* GetDefaultObj();

	void VisibilityReferences(bool Active, const TArray<class AActor*>& ActorsList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void AppendReferences(TArray<class AActor*>& Array, TArray<TSoftObjectPtr<class AActor>>& TargetArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	double GetEdgeBlend(double CallFunc_Conv_ByteToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void SetConfig(double AreaWorldHeight, double AreaWorldPixelSize, int32 CaptureLimitTileSize, const struct FBS_FluxHeightmapDomain& DomainTexture, const struct FBS_FluxCaptureVisibility& GeometryVisibility, double CaptureOffset);
	void InitializeAll(class USceneCaptureComponent2D* CaptureComponent);
	void InitlializeDebug(class UStaticMeshComponent* DebugMesh, bool DebugInEditor, bool DebugInGame, class USceneComponent* Volume, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetVolumeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void InitializeVolume(class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue);
	void InitializeRenderTargets(bool Temp_bool_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable_1, enum class ETextureRenderTargetFormat K2Node_Select_Default, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture);
	struct FTransform GetVolumeTransform(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void RecognizeVisibleActors(const TArray<class AActor*>& ActorsList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item, const struct FEngineShowFlagsSetting& K2Node_MakeStruct_EngineShowFlagsSetting, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, const struct FEngineShowFlagsSetting& K2Node_MakeStruct_EngineShowFlagsSetting_1, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<struct FEngineShowFlagsSetting>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_NotEqual_NameName_ReturnValue);
	void LoadGroundMap(class UTexture* SourceMap, const struct FVector& Location, const struct FVector& Size, double Surface, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetEdgeBlend_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast);
	void GenerateGroundMapForArea(const struct FVector2D& Position, const struct FVector2D& Size, bool Debug, const struct FVector& CaptureSize, const struct FVector& CaptureLocation, double CallFunc_GetEdgeBlend_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_SelectFloat_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_3, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_BreakVector_X_5, double CallFunc_BreakVector_Y_5, double CallFunc_BreakVector_Z_5, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, double CallFunc_BreakVector_X_6, double CallFunc_BreakVector_Y_6, double CallFunc_BreakVector_Z_6, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_RecreateRenderTarget_NewTexture, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float CallFunc_Conv_Vector2DToVector_Z_ImplicitCast, float CallFunc_Conv_Vector2DToVector_Z_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float K2Node_VariableSet_OrthoWidth_ImplicitCast);
	void GenerateGroundMapForActor(class AActor* Actor, bool Debug, double ExtendSize, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue);
	void GenerateGroundMap(bool RefereshVisibleActors, const struct FIntPoint& NumTiles, const struct FVector2D& TileSize, const struct FVector2D& TileLocation, const TArray<class AActor*>& DynamicShow, const TArray<class AActor*>& DynamicHidden, int32 Temp_int_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x400 - 0x3B8)
// WidgetBlueprintGeneratedClass WBP_GammaScreen_Slider.WBP_GammaScreen_Slider_C
class UWBP_GammaScreen_Slider_C : public UNWXOptionsSettingSlider
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Label;                                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SliderWidget;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x3D0(0x18)(Edit, BlueprintVisible)
	int32                                        NumDecimalDigits;                                  // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_719E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          Ak_Component;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int64                                        PreviousValue;                                     // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GammaScreen_Slider_C* GetDefaultObj();

	class USlider* GetSliderWidget();
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	void OnValueChangedSFX(double Value, FDelegateProperty_ Temp_delegate_Variable, int64 CallFunc_Round64_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	double GetSliderValue(float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void BndEvt__SliderWidget_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_GammaScreen_Slider(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, double CallFunc_GridSnap_Float_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetBrightness_ReturnValue, double CallFunc_GridSnap_Float_Location_ImplicitCast, double CallFunc_GridSnap_Float_GridSize_ImplicitCast);
};

}



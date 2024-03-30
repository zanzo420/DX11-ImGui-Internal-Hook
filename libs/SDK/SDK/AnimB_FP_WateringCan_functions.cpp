#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_WateringCan.AnimB_FP_WateringCan_C
// (None)

class UClass* UAnimB_FP_WateringCan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_WateringCan_C");

	return Clss;
}


// AnimB_FP_WateringCan_C AnimB_FP_WateringCan.Default__AnimB_FP_WateringCan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_WateringCan_C* UAnimB_FP_WateringCan_C::GetDefaultObj()
{
	static class UAnimB_FP_WateringCan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_WateringCan_C*>(UAnimB_FP_WateringCan_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BOX_GPR_HUM_Trunk05.ABP_BOX_GPR_HUM_Trunk05_C
// (None)

class UClass* UABP_BOX_GPR_HUM_Trunk05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BOX_GPR_HUM_Trunk05_C");

	return Clss;
}


// ABP_BOX_GPR_HUM_Trunk05_C ABP_BOX_GPR_HUM_Trunk05.Default__ABP_BOX_GPR_HUM_Trunk05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BOX_GPR_HUM_Trunk05_C* UABP_BOX_GPR_HUM_Trunk05_C::GetDefaultObj()
{
	static class UABP_BOX_GPR_HUM_Trunk05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BOX_GPR_HUM_Trunk05_C*>(UABP_BOX_GPR_HUM_Trunk05_C::StaticClass()->DefaultObject);

	return Default;
}

}


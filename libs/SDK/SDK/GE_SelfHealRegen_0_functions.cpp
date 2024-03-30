#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SelfHealRegen_0.GE_SelfHealRegen_0_C
// (None)

class UClass* UGE_SelfHealRegen_0_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SelfHealRegen_0_C");

	return Clss;
}


// GE_SelfHealRegen_0_C GE_SelfHealRegen_0.Default__GE_SelfHealRegen_0_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SelfHealRegen_0_C* UGE_SelfHealRegen_0_C::GetDefaultObj()
{
	static class UGE_SelfHealRegen_0_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SelfHealRegen_0_C*>(UGE_SelfHealRegen_0_C::StaticClass()->DefaultObject);

	return Default;
}

}



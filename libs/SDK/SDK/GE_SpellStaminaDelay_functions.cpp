#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellStaminaDelay.GE_SpellStaminaDelay_C
// (None)

class UClass* UGE_SpellStaminaDelay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellStaminaDelay_C");

	return Clss;
}


// GE_SpellStaminaDelay_C GE_SpellStaminaDelay.Default__GE_SpellStaminaDelay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellStaminaDelay_C* UGE_SpellStaminaDelay_C::GetDefaultObj()
{
	static class UGE_SpellStaminaDelay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellStaminaDelay_C*>(UGE_SpellStaminaDelay_C::StaticClass()->DefaultObject);

	return Default;
}

}



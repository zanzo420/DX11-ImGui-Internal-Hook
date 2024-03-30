#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Spell_SpeedReduction.GE_Spell_SpeedReduction_C
// (None)

class UClass* UGE_Spell_SpeedReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Spell_SpeedReduction_C");

	return Clss;
}


// GE_Spell_SpeedReduction_C GE_Spell_SpeedReduction.Default__GE_Spell_SpeedReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Spell_SpeedReduction_C* UGE_Spell_SpeedReduction_C::GetDefaultObj()
{
	static class UGE_Spell_SpeedReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Spell_SpeedReduction_C*>(UGE_Spell_SpeedReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}



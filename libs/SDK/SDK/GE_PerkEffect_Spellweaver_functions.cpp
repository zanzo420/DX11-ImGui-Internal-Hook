#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_Spellweaver.GE_PerkEffect_Spellweaver_C
// (None)

class UClass* UGE_PerkEffect_Spellweaver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_Spellweaver_C");

	return Clss;
}


// GE_PerkEffect_Spellweaver_C GE_PerkEffect_Spellweaver.Default__GE_PerkEffect_Spellweaver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_Spellweaver_C* UGE_PerkEffect_Spellweaver_C::GetDefaultObj()
{
	static class UGE_PerkEffect_Spellweaver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_Spellweaver_C*>(UGE_PerkEffect_Spellweaver_C::StaticClass()->DefaultObject);

	return Default;
}

}


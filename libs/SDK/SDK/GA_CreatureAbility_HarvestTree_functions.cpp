#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_HarvestTree.GA_CreatureAbility_HarvestTree_C
// (None)

class UClass* UGA_CreatureAbility_HarvestTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_HarvestTree_C");

	return Clss;
}


// GA_CreatureAbility_HarvestTree_C GA_CreatureAbility_HarvestTree.Default__GA_CreatureAbility_HarvestTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_HarvestTree_C* UGA_CreatureAbility_HarvestTree_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_HarvestTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_HarvestTree_C*>(UGA_CreatureAbility_HarvestTree_C::StaticClass()->DefaultObject);

	return Default;
}

}


#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LightningMarble.GE_LightningMarble_C
// (None)

class UClass* UGE_LightningMarble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LightningMarble_C");

	return Clss;
}


// GE_LightningMarble_C GE_LightningMarble.Default__GE_LightningMarble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LightningMarble_C* UGE_LightningMarble_C::GetDefaultObj()
{
	static class UGE_LightningMarble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LightningMarble_C*>(UGE_LightningMarble_C::StaticClass()->DefaultObject);

	return Default;
}

}



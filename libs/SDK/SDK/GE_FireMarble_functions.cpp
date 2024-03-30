#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireMarble.GE_FireMarble_C
// (None)

class UClass* UGE_FireMarble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireMarble_C");

	return Clss;
}


// GE_FireMarble_C GE_FireMarble.Default__GE_FireMarble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireMarble_C* UGE_FireMarble_C::GetDefaultObj()
{
	static class UGE_FireMarble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireMarble_C*>(UGE_FireMarble_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ColdMarble.GE_ColdMarble_C
// (None)

class UClass* UGE_ColdMarble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ColdMarble_C");

	return Clss;
}


// GE_ColdMarble_C GE_ColdMarble.Default__GE_ColdMarble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ColdMarble_C* UGE_ColdMarble_C::GetDefaultObj()
{
	static class UGE_ColdMarble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ColdMarble_C*>(UGE_ColdMarble_C::StaticClass()->DefaultObject);

	return Default;
}

}



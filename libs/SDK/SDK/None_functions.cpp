#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass None.None
// (None)

class UClass* UNone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("None");

	return Clss;
}


// None None.None
// (Public, ClassDefaultObject, ArchetypeObject, BeginDestroyed, WasLoaded, LoadCompleted)

class UNone* UNone::GetDefaultObj()
{
	static class UNone* Default = nullptr;

	if (!Default)
		Default = static_cast<UNone*>(UNone::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Wade_Light.AN_Footstep_Wade_Light_C
// (None)

class UClass* UAN_Footstep_Wade_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Wade_Light_C");

	return Clss;
}


// AN_Footstep_Wade_Light_C AN_Footstep_Wade_Light.Default__AN_Footstep_Wade_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Wade_Light_C* UAN_Footstep_Wade_Light_C::GetDefaultObj()
{
	static class UAN_Footstep_Wade_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Wade_Light_C*>(UAN_Footstep_Wade_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


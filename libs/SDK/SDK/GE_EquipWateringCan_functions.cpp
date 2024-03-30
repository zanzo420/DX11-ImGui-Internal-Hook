#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipWateringCan.GE_EquipWateringCan_C
// (None)

class UClass* UGE_EquipWateringCan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipWateringCan_C");

	return Clss;
}


// GE_EquipWateringCan_C GE_EquipWateringCan.Default__GE_EquipWateringCan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipWateringCan_C* UGE_EquipWateringCan_C::GetDefaultObj()
{
	static class UGE_EquipWateringCan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipWateringCan_C*>(UGE_EquipWateringCan_C::StaticClass()->DefaultObject);

	return Default;
}

}



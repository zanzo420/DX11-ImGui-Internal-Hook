#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA3 (0xA3 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.Fix Persistent Name Handle
struct UBPFL_NPC_C_Fix_Persistent_Name_Handle_Params
{
public:
	class ABP_Creature_NPC_C*                    InNPC;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  LNewSTPath_Female;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LOldSTPath_Female;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LNewSTPath_Male;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LOldSTPath_Male;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringTableEntryHandle               CallFunc_GetNPCNameHandle_OutNameHandle;           // 0x38(0x18)(None)
	struct FStringTableEntryHandle               K2Node_MakeStruct_StringTableEntryHandle;          // 0x50(0x18)(None)
	struct FStringTableEntryHandle               CallFunc_GetNPCNameHandle_OutNameHandle_1;         // 0x68(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringTableEntryHandle               K2Node_MakeStruct_StringTableEntryHandle_1;        // 0x88(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.Get Rand NPC Name
struct UBPFL_NPC_C_Get_Rand_NPC_Name_Params
{
public:
	enum class EBodyType                         Gender;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStringTableEntryHandle               NameHandle;                                        // 0x10(0x18)(Parm, OutParm)
	struct FStringTableEntryHandle               LNameHandle;                                       // 0x28(0x18)(Edit, BlueprintVisible)
	class FText                                  DefaultNameFemale;                                 // 0x40(0x18)(Edit, BlueprintVisible)
	class FText                                  DefaultNameMale;                                   // 0x58(0x18)(Edit, BlueprintVisible)
	class FName                                  StringTableIDFemale;                               // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StringTableIDMale;                                 // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetKeysFromStringTable_ReturnValue;       // 0x88(0x10)(ReferenceParm)
	TArray<class FString>                        CallFunc_GetKeysFromStringTable_ReturnValue_1;     // 0x98(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Random_OutItem;                     // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Random_OutItem_1;                   // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex_1;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringTableEntryHandle               K2Node_MakeStruct_StringTableEntryHandle;          // 0xD8(0x18)(None)
	struct FStringTableEntryHandle               K2Node_MakeStruct_StringTableEntryHandle_1;        // 0xF0(0x18)(None)
};

// 0x190 (0x190 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.BreakDesireHandle
struct UBPFL_NPC_C_BreakDesireHandle_Params
{
public:
	struct FDataTableRowHandle                   Desire;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ENWXNPCDesireType                 DesireType;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          DesireTypeTag;                                     // 0x1C(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TypedRowHandle;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class FText                                  IncompleteTitle;                                   // 0x38(0x18)(Parm, OutParm)
	class FText                                  IncompleteDescription;                             // 0x50(0x18)(Parm, OutParm)
	class FText                                  CompletedTitle;                                    // 0x68(0x18)(Parm, OutParm)
	class FText                                  CompletedDescription;                              // 0x80(0x18)(Parm, OutParm)
	int32                                        IncompleteValue;                                   // 0x98(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompletedValue;                                    // 0x9C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InternalTimeStamp;                                 // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InternalTimeRemaining;                             // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNWXNPCDesireData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0xB8(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_Duration_ImplicitCast;       // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_InternalTimeStamp_ImplicitCast; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetVictorianName
struct UBPFL_NPC_C_GetVictorianName_Params
{
public:
	bool                                         Female;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x10(0x18)(Parm, OutParm)
	int32                                        LCurrentCount;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LRandomInt;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NPCVictorianName                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x78(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_9F8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0xA0(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.IsControllerNPC
struct UBPFL_NPC_C_IsControllerNPC_Params
{
public:
	class UObject*                               Controller;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNPC;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetFriendshipCostMultiplierFromFriendshipLevel
struct UBPFL_NPC_C_GetFriendshipCostMultiplierFromFriendshipLevel_Params
{
public:
	enum class Enum_FriendshipLevel              FriendshipLevel;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CostMultiplier;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NPCFriendshipCostMultiplier        CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_CostMultiplier_ImplicitCast; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetMinAndMaxFriendshipScores
struct UBPFL_NPC_C_GetMinAndMaxFriendshipScores_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        MinScore;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxScore;                                          // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              MaxFriendship;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              MinFriendship;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F9E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NPCFriendshipLevel                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NPCFriendshipLevel                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetFriendshipLevelFromScore
struct UBPFL_NPC_C_GetFriendshipLevelFromScore_Params
{
public:
	int32                                        FriendshipScore;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              FriendshipLevel;                                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinScore;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxScore;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentScore;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              MaxFriendshipLevel;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              CurrentFriendshipLevel;                            // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NPCFriendshipLevel                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_ByteByte_ReturnValue;                // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetScoreFromFriendshipEvent
struct UBPFL_NPC_C_GetScoreFromFriendshipEvent_Params
{
public:
	enum class Enum_NPCFriendshipEvent           FriendshipEvent;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NPCFriendShipEvent                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BPFL_NPC.BPFL_NPC_C.GetActionStationTypeFromPingVerb
struct UBPFL_NPC_C_GetActionStationTypeFromPingVerb_Params
{
public:
	enum class E_PingVerbs                       PingVerb;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionStationType            DefaultActionStationType;                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FB6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionStationType            ActionStationType;                                 // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x390 - 0x2A8)
// Class AkAudio.AkPortalComponent
class UAkPortalComponent : public USceneComponent
{
public:
	bool                                         bDynamic;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2733[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObstructionRefreshInterval;                        // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ObstructionCollisionChannel;                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2734[0xDF];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPortalComponent* GetDefaultObj();

	bool PortalPlacementValid();
	void OpenPortal();
	class UPrimitiveComponent* GetPrimitiveParent();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x10 (0x2E8 - 0x2D8)
// Class AkAudio.AkAcousticPortal
class AAkAcousticPortal : public AVolume
{
public:
	class UAkPortalComponent*                    Portal;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRequiresStateMigration;                           // 0x2E1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_273D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAkAcousticPortal* GetDefaultObj();

	void OpenPortal();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x18 (0x40 - 0x28)
// Class AkAudio.AkAudioType
class UAkAudioType : public UObject
{
public:
	uint32                                       ShortID;                                           // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2744[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAudioType* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkAcousticTexture
class UAkAcousticTexture : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkAcousticTexture* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class AkAudio.AkAcousticTextureSetComponent
class UAkAcousticTextureSetComponent : public USceneComponent
{
public:
	uint8                                        Pad_274B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAcousticTextureSetComponent* GetDefaultObj();

};

// 0x40 (0x2E0 - 0x2A0)
// Class AkAudio.AkAmbientSound
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x2A0(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                          AkComponent;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerIsDestroyed;                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274D[0x2E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAkAmbientSound* GetDefaultObj();

	void StopAmbientSound();
	void StartAmbientSound();
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkAndroidInitializationSettings
class UAkAndroidInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2750[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAndroidInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x48 (0x70 - 0x28)
// Class AkAudio.AkPlatformInfo
class UAkPlatformInfo : public UObject
{
public:
	uint8                                        Pad_2753[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkAndroidPlatformInfo
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkAndroidPlatformInfo* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class AkAudio.AkAssetBase
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                  PlatformAssetData;                                 // 0x40(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2757[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetBase* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkAssetData
class UAkAssetData : public UObject
{
public:
	uint32                                       CachedHash;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BankLanguage;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275B[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetData* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class AkAudio.AkAssetDataWithMedia
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<class UAkMediaAsset*>                 MediaList;                                         // 0x78(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAssetDataWithMedia* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkAssetPlatformData
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                          CurrentAssetData;                                  // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAssetPlatformData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkAssetDataSwitchContainerData
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	TSoftObjectPtr<class UAkGroupValue>          GroupValue;                                        // 0x28(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x50(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkMediaAsset*>                 MediaList;                                         // 0x58(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UAkAssetDataSwitchContainerData*> Children;                                          // 0x68(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAssetDataSwitchContainerData* GetDefaultObj();

};

// 0x68 (0xF0 - 0x88)
// Class AkAudio.AkAssetDataSwitchContainer
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*> SwitchContainers;                                  // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x98(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2762[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetDataSwitchContainer* GetDefaultObj();

};

// 0x1A0 (0x290 - 0xF0)
// Class AkAudio.AkAudioEventData
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                        MaxAttenuationRadius;                              // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInfinite;                                        // 0xF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2766[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                    // 0x100(0x50)(Deprecated, NativeAccessSpecifierPublic)
	TSet<class UAkAudioEvent*>                   PostedEvents;                                      // 0x150(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkAuxBus*>                       UserDefinedSends;                                  // 0x1A0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkTrigger*>                      PostedTriggers;                                    // 0x1F0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkGroupValue*>                   GroupValues;                                       // 0x240(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAudioEventData* GetDefaultObj();

};

// 0xC8 (0x118 - 0x50)
// Class AkAudio.AkAudioBank
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                         AutoLoad;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2767[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x58(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UAkAudioEvent>>    LinkedAkEvents;                                    // 0xA8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformAssetData;                 // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2769[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioBank* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class AkAudio.AkAudioEvent
class UAkAudioEvent : public UAkAssetBase
{
public:
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x50(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	class UAkAudioBank*                          RequiredBank;                                      // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2774[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformData;                      // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAttenuationRadius;                              // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsInfinite;                                        // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2776[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaximumDuration;                                   // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2777[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioEvent* GetDefaultObj();

	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};

// 0x20 (0x2C8 - 0x2A8)
// Class AkAudio.AkGameObject
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2793[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGameObject* GetDefaultObj();

	void Stop();
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMS, const class FString& Rtpc);
	void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo, int32* PlayingID);
	int32 PostAssociatedAkEvent(int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources);
	void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& In_EventName);
	void GetRTPCValue(class UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, const class FString& Rtpc, int32 PlayingID);
};

// 0x1D0 (0x498 - 0x2C8)
// Class AkAudio.AkComponent
class UAkComponent : public UAkGameObject
{
public:
	bool                                         bUseSpatialAudio;                                  // 0x2C8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 OcclusionCollisionChannel;                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSpotReflectors;                              // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OuterRadius;                                       // 0x2D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x2E0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                EarlyReflectionAuxBusName;                         // 0x2E8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EarlyReflectionOrder;                              // 0x2F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionBusSendGain;                        // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionMaxPathLength;                      // 0x300(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RoomReverbAuxBusGain;                              // 0x304(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxEdges;                               // 0x308(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxPaths;                               // 0x30C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DiffractionMaxPathLength;                          // 0x310(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         DrawFirstOrderReflections;                         // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawSecondOrderReflections;                        // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawHigherOrderReflections;                        // 0x316(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDiffraction;                                   // 0x317(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerDestroyed;                            // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttenuationScalingFactor;                          // 0x31C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanSelfObstruct;                                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionRefreshInterval;                          // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseReverbVolumes;                                 // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A5[0x16F];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkComponent* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*>& Listeners);
	void SetGameObjectRadius(float In_outerRadius, float In_innerRadius);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEventByName(const class FString& In_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	float GetAttenuationRadius();
};

// 0x30 (0x4C8 - 0x498)
// Class AkAudio.AkAudioInputComponent
class UAkAudioInputComponent : public UAkComponent
{
public:
	uint8                                        Pad_27A6[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioInputComponent* GetDefaultObj();

	int32 PostAssociatedAudioInputEvent();
};

// 0x8 (0x58 - 0x50)
// Class AkAudio.AkAuxBus
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                          RequiredBank;                                      // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAuxBus* GetDefaultObj();

};

// 0xE68 (0x1000 - 0x198)
// Class AkAudio.AkCheckBox
class UAkCheckBox : public UContentWidget
{
public:
	uint8                                        Pad_27A7[0x298];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECheckBoxState                    CheckedState;                                      // 0x430(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x434(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x450(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xF20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xF21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkBoolPropertyToControl              ThePropertyToControl;                              // 0xF28(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0xF38(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AkOnCheckStateChanged;                             // 0xF78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0xF88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0xF98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AB[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkCheckBox* GetDefaultObj();

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	void SetAkItemId(struct FGuid& ItemId);
	void SetAkBoolProperty(const class FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
	class FString GetAkProperty();
	struct FGuid GetAkItemId();
};

// 0x8 (0x580 - 0x578)
// Class AkAudio.DrawPortalComponent
class UDrawPortalComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_27AC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPortalComponent* GetDefaultObj();

};

// 0x8 (0x580 - 0x578)
// Class AkAudio.DrawRoomComponent
class UDrawRoomComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_27AD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawRoomComponent* GetDefaultObj();

};

// 0x78 (0xB8 - 0x40)
// Class AkAudio.AkFolder
class UAkFolder : public UAkAudioType
{
public:
	class FString                                UnrealFolderPath;                                  // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WwiseFolderPath;                                   // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AE[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkFolder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkGameplayStatics
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkGameplayStatics* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor);
	void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void UnloadBankByName(const class FString& BankName);
	void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankUnloadedCallback);
	void UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* WorldContextObject);
	void StopAll();
	void StopActor(class AActor* Actor);
	void StartProfilerCapture(const class FString& Filename);
	void StartOutputCapture(const class FString& Filename);
	void StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
	void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState);
	void SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State);
	void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMS, class AActor* Actor, class FName Rtpc);
	void SetReflectionsOrder(int32 Order, bool RefreshPaths);
	void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
	void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
	void SetPanningRule(enum class EPanningRule PanRule);
	void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void SetOcclusionScalingFactor(float ScalingFactor);
	void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FAkChannelMask>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
	void SetCurrentAudioCultureAsync(const class FString& AudioCulture, FDelegateProperty_& Completed);
	void SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void SetBusConfig(const class FString& BusName, enum class EAkChannelConfiguration ChannelConfiguration);
	void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMS, class AActor* Actor, class FName Rtpc);
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings);
	void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger);
	void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int32 PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, class FName AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	void PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
	int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
	void LoadInitBank();
	void LoadBanks(TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
	void LoadBankByName(const class FString& BankName);
	void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankLoadedCallback);
	void LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool IsGame(class UObject* WorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
	void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, class AActor* Actor, class FName Rtpc);
	float GetOcclusionScalingFactor();
	class FString GetCurrentAudioCulture();
	TArray<class FString> GetAvailableAudioCultures();
	class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
	class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType);
	class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
	void ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve);
	void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32 PlayingID);
	void ClearBanks();
	void CancelEventCallback(FDelegateProperty_& PostEventCallback);
	void AddOutputCaptureMarker(const class FString& MarkerText);
};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkCallbackInfo
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkCallbackInfo* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AkAudio.AkEventCallbackInfo
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventID;                                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkEventCallbackInfo* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class AkAudio.AkMIDIEventCallbackInfo
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	uint8                                        Pad_27DB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMIDIEventCallbackInfo* GetDefaultObj();

	enum class EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	uint8 GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkMarkerCallbackInfo
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int32                                        Identifier;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Label;                                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMarkerCallbackInfo* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkDurationCallbackInfo
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                        Duration;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioNodeID;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaID;                                           // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreaming;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkDurationCallbackInfo* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class AkAudio.AkMusicSyncCallbackInfo
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                        SegmentInfo;                                       // 0x34(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAkCallbackType                   MusicSyncType;                                     // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserCueName;                                       // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMusicSyncCallbackInfo* GetDefaultObj();

};

// 0x190 (0x450 - 0x2C0)
// Class AkAudio.AkGeometryComponent
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
public:
	enum class EAkMeshType                       MeshType;                                          // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LOD;                                               // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x2D0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride            CollisionMeshSurfaceOverride;                      // 0x320(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkGeometryData                       GeometryData;                                      // 0x358(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, double>                          SurfaceAreas;                                      // 0x3A8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_27E2[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGeometryComponent* GetDefaultObj();

	void UpdateGeometry();
	void SendGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};

// 0x28 (0x68 - 0x40)
// Class AkAudio.AkGroupValue
class UAkGroupValue : public UAkAudioType
{
public:
	TArray<TSoftObjectPtr<class UAkMediaAsset>>  MediaDependencies;                                 // 0x40(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint32                                       GroupShortID;                                      // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E3[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGroupValue* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkHololensInitializationSettings
class UAkHololensInitializationSettings : public UObject
{
public:
	uint8                                        Pad_27E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkHololensInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkHololensPlatformInfo
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkHololensPlatformInfo* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class AkAudio.AkInitBankAssetData
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                 PluginInfos;                                       // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkInitBankAssetData* GetDefaultObj();

};

// 0x20 (0x70 - 0x50)
// Class AkAudio.AkInitBank
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<class FString>                        AvailableAudioCultures;                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                DefaultLanguage;                                   // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkInitBank* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkIOSInitializationSettings
class UAkIOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_27E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x98(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xD0(0x2C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkIOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkIOSPlatformInfo
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkIOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemBoolPropertiesConv
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemBoolPropertiesConv* GetDefaultObj();

	class FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	class FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkItemBoolProperties
class UAkItemBoolProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E9[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkItemBoolProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemPropertiesConv
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemPropertiesConv* GetDefaultObj();

	class FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl);
	class FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl);
};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkItemProperties
class UAkItemProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkItemProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x88 (0x330 - 0x2A8)
// Class AkAudio.AkLateReverbComponent
class UAkLateReverbComponent : public USceneComponent
{
public:
	bool                                         bEnable;                                           // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SendLevel;                                         // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoAssignAuxBus;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBusManual;                                      // 0x2E0(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27EE[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkLateReverbComponent* GetDefaultObj();

	void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);
};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkLinuxInitializationSettings
class UAkLinuxInitializationSettings : public UObject
{
public:
	uint8                                        Pad_27EF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkLinuxInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkLinuxPlatformInfo
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkLinuxPlatformInfo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkMacInitializationSettings
class UAkMacInitializationSettings : public UObject
{
public:
	uint8                                        Pad_27F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMacInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkMacPlatformInfo
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkMacPlatformInfo* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class AkAudio.AkMediaAssetData
class UAkMediaAssetData : public UObject
{
public:
	bool                                         IsStreamed;                                        // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDeviceMemory;                                   // 0x29(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Language;                                          // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetPlatform;                                     // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F2[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMediaAssetData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkMediaAsset
class UAkMediaAsset : public UObject
{
public:
	uint32                                       ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MediaName;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoLoad;                                          // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x58(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                     CurrentMediaAssetData;                             // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27F5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMediaAsset* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class AkAudio.AkLocalizedMediaAsset
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static class UClass* StaticClass();
	static class UAkLocalizedMediaAsset* GetDefaultObj();

};

// 0x60 (0xD8 - 0x78)
// Class AkAudio.AkExternalMediaAsset
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	uint8                                        Pad_27F6[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkExternalMediaAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkPlatformInitialisationSettingsBase
class IAkPlatformInitialisationSettingsBase : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAkPlatformInitialisationSettingsBase* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkPS4InitializationSettings
class UAkPS4InitializationSettings : public UObject
{
public:
	uint8                                        Pad_27F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings  AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkPS4InitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS4PlatformInfo
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS4PlatformInfo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkPS5InitializationSettings
class UAkPS5InitializationSettings : public UObject
{
public:
	uint8                                        Pad_27F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS5AdvancedInitializationSettings  AdvancedSettings;                                  // 0xB8(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPS5InitializationSettings* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class AkAudio.AkDPXInitializationSettings
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkDPXInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS5PlatformInfo
class UAkPS5PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS5PlatformInfo* GetDefaultObj();

};

// 0x38 (0x310 - 0x2D8)
// Class AkAudio.AkReverbVolume
class AAkReverbVolume : public AVolume
{
public:
	bool                                         bEnabled;                                          // 0x2D8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x2E0(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2E8(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x2F8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2FC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x300(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkLateReverbComponent*                LateReverbComponent;                               // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkReverbVolume* GetDefaultObj();

};

// 0x38 (0x300 - 0x2C8)
// Class AkAudio.AkRoomComponent
class UAkRoomComponent : public UAkGameObject
{
public:
	bool                                         bEnable;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDynamic;                                          // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Priority;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallOcclusion;                                     // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuxSendLevel;                                      // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FD[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAcousticTextureSetComponent*        GeometryComponent;                                 // 0x2E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27FE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkRoomComponent* GetDefaultObj();

	void SetGeometryComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);
	class UPrimitiveComponent* GetPrimitiveParent();
};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkRtpc
class UAkRtpc : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkRtpc* GetDefaultObj();

};

// 0x2B8 (0x2E0 - 0x28)
// Class AkAudio.AkSettings
class UAkSettings : public UObject
{
public:
	uint8                                        MaxSimultaneousReverbVolumes;                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             WwiseProjectPath;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        WwiseSoundDataFolder;                              // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x50(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultOcclusionCollisionChannel;                  // 0x51(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultFitToGeometryCollisionChannel;              // 0x52(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2800[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                     // 0x58(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	float                                        GlobalDecayAbsorption;                             // 0xA8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2801[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAuxBus>              DefaultReverbAuxBus;                               // 0xB0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<float, TSoftObjectPtr<class UAkAuxBus>> EnvironmentDecayAuxBusMap;                         // 0xD8(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                HFDampingName;                                     // 0x128(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecayEstimateName;                                 // 0x138(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TimeToFirstReflectionName;                         // 0x148(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                HFDampingRTPC;                                     // 0x158(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                DecayEstimateRTPC;                                 // 0x180(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                TimeToFirstReflectionRTPC;                         // 0x1A8(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioInputEvent;                                   // 0x1D0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;                          // 0x1F8(0x50)(Config, NativeAccessSpecifierPublic)
	bool                                         SplitSwitchContainerMedia;                         // 0x248(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SplitMediaPerFolder;                               // 0x249(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseEventBasedPackaging;                            // 0x24A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutomaticAssetSynchronization;               // 0x24B(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2802[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CommandletCommitMessage;                           // 0x250(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           UnrealCultureToWwiseCulture;                       // 0x260(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         AskedToUseNewAssetManagement;                      // 0x2B0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultiCoreRendering;                         // 0x2B1(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MigratedEnableMultiCoreRendering;                  // 0x2B2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FixupRedirectorsDuringMigration;                   // 0x2B3(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2803[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x2B8(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x2C8(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2804[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class AkAudio.AkSettingsPerUser
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutomaticAssetSynchronization;               // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2805[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WaapiIPAddress;                                    // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaapiPort;                                         // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x64(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoSyncSelection;                                 // 0x65(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SuppressWwiseProjectPathWarnings;                  // 0x66(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SoundDataGenerationSkipLanguage;                   // 0x67(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2806[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSettingsPerUser* GetDefaultObj();

};

// 0x5F0 (0x770 - 0x180)
// Class AkAudio.AkSlider
class UAkSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2807[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x1A0(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x6A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2808[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x6A4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x6B4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x6C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x6C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2809[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x6C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x6CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkPropertyToControl                  ThePropertyToControl;                              // 0x6D0(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0x6E0(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x720(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0x730(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0x740(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_280B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSlider* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const class FString& ItemProperty);
	void SetAkSliderItemId(struct FGuid& ItemId);
	float GetValue();
	class FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};

// 0x18 (0x2F0 - 0x2D8)
// Class AkAudio.AkSpatialAudioVolume
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*       SurfaceReflectorSet;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                LateReverb;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                      Room;                                              // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpatialAudioVolume* GetDefaultObj();

};

// 0x28 (0x2C8 - 0x2A0)
// Class AkAudio.AkSpotReflector
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EarlyReflectionAuxBusName;                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceScalingFactor;                             // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpotReflector* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AkAudio.AkStateValue
class UAkStateValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkStateValue* GetDefaultObj();

};

// 0x58 (0x520 - 0x4C8)
// Class AkAudio.AkSubmixInputComponent
class UAkSubmixInputComponent : public UAkAudioInputComponent
{
public:
	uint8                                        Pad_280C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSubmix*                          SubmixToRecord;                                    // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280D[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSubmixInputComponent* GetDefaultObj();

};

// 0x30 (0x2F0 - 0x2C0)
// Class AkAudio.AkSurfaceReflectorSetComponent
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
public:
	bool                                         bEnableSurfaceReflectors;                          // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkSurfacePoly>                AcousticPolys;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2810[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSurfaceReflectorSetComponent* GetDefaultObj();

	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkSwitchInitializationSettings
class UAkSwitchInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2811[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkSwitchInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkSwitchPlatformInfo
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkSwitchPlatformInfo* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AkAudio.AkSwitchValue
class UAkSwitchValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkSwitchValue* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkTrigger
class UAkTrigger : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkTrigger* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkTVOSInitializationSettings
class UAkTVOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2812[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x98(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2813[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xD0(0x2C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_2814[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkTVOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkTVOSPlatformInfo
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkTVOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiCalls
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiCalls* GetDefaultObj();

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, FDelegateProperty_& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32 ID);
	bool RegisterWaapiProjectLoadedCallback(FDelegateProperty_& Callback);
	bool RegisterWaapiConnectionLostCallback(FDelegateProperty_& Callback);
	int32 GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription);
	class FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	class FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.SAkWaapiFieldNamesConv
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USAkWaapiFieldNamesConv* GetDefaultObj();

	class FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	class FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiJsonManager
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiJsonManager* GetDefaultObj();

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, TArray<class FString>& FieldStringValues, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject>& FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	class FString GetStringField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	int32 GetIntegerField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiUriConv
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiUriConv* GetDefaultObj();

	class FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri);
	class FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri);
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkWindowsInitializationSettings
class UAkWindowsInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2821[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWindowsInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin32PlatformInfo
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin32PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin64PlatformInfo
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin64PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWindowsPlatformInfo
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWindowsPlatformInfo* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkWinGDKInitializationSettings
class UAkWinGDKInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2823[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWinGDKInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0xF8 - 0xF8)
// Class AkAudio.AkWinAnvilInitializationSettings
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinGDKPlatformInfo
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinGDKPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinAnvilPlatformInfo
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilPlatformInfo* GetDefaultObj();

};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkWwiseTree
class UAkWwiseTree : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkWwiseTree* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	class FString GetSearchText();
};

// 0x60 (0x1E0 - 0x180)
// Class AkAudio.AkWwiseTreeSelector
class UAkWwiseTreeSelector : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2826[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkWwiseTreeSelector* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkXboxOneInitializationSettings
class UAkXboxOneInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2827[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;                                   // 0x90(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_2828[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkXboxOneInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOnePlatformInfo
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOnePlatformInfo* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkXSXInitializationSettings
class UAkXSXInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2829[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXApuHeapInitializationSettings   ApuHeapSettings;                                   // 0x90(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXAdvancedInitializationSettings  AdvancedSettings;                                  // 0xC0(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_282A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkXSXInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x100 - 0x100)
// Class AkAudio.AkMPXInitializationSettings
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkMPXInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXSXPlatformInfo
class UAkXSXPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXSXPlatformInfo* GetDefaultObj();

};

// 0xE8 (0x1D8 - 0xF0)
// Class AkAudio.MovieSceneAkAudioEventSection
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_282E[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Event;                                             // 0x130(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RetriggerEvent;                                    // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2830[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScrubTailLengthMs;                                 // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         StopAtSectionEnd;                                  // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2831[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x148(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2832[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSourceDuration;                                 // 0x178(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2833[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MaxDurationSourceID;                               // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2834[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class AkAudio.MovieSceneAkTrack
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAMasterTrack;                                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2836[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkTrack* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioEventTrack
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_2837[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventTrack* GetDefaultObj();

};

// 0x1D8 (0x2C8 - 0xF0)
// Class AkAudio.MovieSceneAkAudioRTPCSection
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                               Rtpc;                                              // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0xF8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                            FloatCurve;                                        // 0x108(0x80)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;                   // 0x188(0x30)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel               RTPCChannel;                                       // 0x1B8(0x110)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCSection* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioRTPCTrack
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_2839[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCTrack* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class AkAudio.PostEventAsync
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2840[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPostEventAsync* GetDefaultObj();

	class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// 0x68 (0x98 - 0x30)
// Class AkAudio.PostEventAtLocationAsync
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2843[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPostEventAtLocationAsync* GetDefaultObj();

	class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
	void PollPostEventFuture();
};

}



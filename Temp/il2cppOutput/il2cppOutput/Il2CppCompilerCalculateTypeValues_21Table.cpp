#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t3543869877;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t3232193064;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t3057593653;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t3393747436;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1942298958;
// UnityEngine.Transform
struct Transform_t1902747184;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t1542364118;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t1899730751;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t3249456275;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2657036970;
// System.Char[]
struct CharU5BU5D_t2775925042;
// System.Void
struct Void_t97265340;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t4273034315;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1041011760;
// UnityEngine.CharacterController
struct CharacterController_t3170073212;
// UnityEngine.Collider
struct Collider_t966687888;
// UnityEngine.Rigidbody
struct Rigidbody_t2022202123;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t425974840;
// UnityEngine.Font
struct Font_t1247610616;
// UnityEngine.Object
struct Object_t2083116985;
// UnityEngine.AnimationState
struct AnimationState_t2254120030;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t4291808532;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t3308759786;
// System.Action`1<UnityEngine.Font>
struct Action_1_t4189585719;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t4104338335;
// System.IAsyncResult
struct IAsyncResult_t2521632562;
// System.AsyncCallback
struct AsyncCallback_t2696712479;
// UnityEngine.RectTransform
struct RectTransform_t219695396;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1356515435;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2015043497;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1511494852;
// System.Single[]
struct SingleU5BU5D_t3951372790;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1933245441;

struct ContactPoint_t235394261 ;
struct Object_t2083116985_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SCENEMANAGER_T2751400528_H
#define SCENEMANAGER_T2751400528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2751400528  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2751400528_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t3543869877 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t3232193064 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t3057593653 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2751400528_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t3543869877 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t3543869877 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t3543869877 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2751400528_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t3232193064 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t3232193064 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t3232193064 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2751400528_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t3057593653 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t3057593653 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t3057593653 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2751400528_H
#ifndef VALUETYPE_T1666163699_H
#define VALUETYPE_T1666163699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1666163699  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1666163699_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1666163699_marshaled_com
{
};
#endif // VALUETYPE_T1666163699_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T3264543164_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T3264543164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t3264543164  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T3264543164_H
#ifndef PHYSICS2D_T1061246715_H
#define PHYSICS2D_T1061246715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t1061246715  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t1061246715_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t3393747436 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t1061246715_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t3393747436 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t3393747436 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t3393747436 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T1061246715_H
#ifndef AUDIOSETTINGS_T653524273_H
#define AUDIOSETTINGS_T653524273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t653524273  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t653524273_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1942298958 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t653524273_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1942298958 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1942298958 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1942298958 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T653524273_H
#ifndef ENUMERATOR_T2193729040_H
#define ENUMERATOR_T2193729040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t2193729040  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t1902747184 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t2193729040, ___outer_0)); }
	inline Transform_t1902747184 * get_outer_0() const { return ___outer_0; }
	inline Transform_t1902747184 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t1902747184 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t2193729040, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2193729040_H
#ifndef ANIMATIONPLAYABLEEXTENSIONS_T590282538_H
#define ANIMATIONPLAYABLEEXTENSIONS_T590282538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableExtensions
struct  AnimationPlayableExtensions_t590282538  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEEXTENSIONS_T590282538_H
#ifndef SPRITEATLASMANAGER_T2369515522_H
#define SPRITEATLASMANAGER_T2369515522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t2369515522  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t2369515522_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t1542364118 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t1899730751 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t2369515522_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t1542364118 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t1542364118 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t1542364118 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t2369515522_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t1899730751 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t1899730751 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t1899730751 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T2369515522_H
#ifndef PHYSICS_T592859697_H
#define PHYSICS_T592859697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t592859697  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T592859697_H
#ifndef ATTRIBUTE_T301694360_H
#define ATTRIBUTE_T301694360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t301694360  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T301694360_H
#ifndef NAVMESH_T3317076187_H
#define NAVMESH_T3317076187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh
struct  NavMesh_t3317076187  : public RuntimeObject
{
public:

public:
};

struct NavMesh_t3317076187_StaticFields
{
public:
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t3249456275 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_t3317076187_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_t3249456275 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_t3249456275 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_t3249456275 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onPreUpdate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESH_T3317076187_H
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T2488870762_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T2488870762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t2488870762  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T2488870762_H
#ifndef YIELDINSTRUCTION_T296394869_H
#define YIELDINSTRUCTION_T296394869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t296394869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t296394869_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t296394869_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T296394869_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T2584643184_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T2584643184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t2584643184  : public Attribute_t301694360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T2584643184_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T602944351_H
#define DRIVENRECTTRANSFORMTRACKER_T602944351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t602944351 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T602944351_H
#ifndef ANIMATORTRANSITIONINFO_T2492728474_H
#define ANIMATORTRANSITIONINFO_T2492728474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t2492728474 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2492728474, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2492728474_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2492728474_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T2492728474_H
#ifndef MAINMODULE_T1565899854_H
#define MAINMODULE_T1565899854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t1565899854 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2657036970 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t1565899854, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2657036970 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2657036970 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2657036970 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t1565899854_marshaled_pinvoke
{
	ParticleSystem_t2657036970 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t1565899854_marshaled_com
{
	ParticleSystem_t2657036970 * ___m_ParticleSystem_0;
};
#endif // MAINMODULE_T1565899854_H
#ifndef ENUM_T1471893459_H
#define ENUM_T1471893459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1471893459  : public ValueType_t1666163699
{
public:

public:
};

struct Enum_t1471893459_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2775925042* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1471893459_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2775925042* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2775925042** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2775925042* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1471893459_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1471893459_marshaled_com
{
};
#endif // ENUM_T1471893459_H
#ifndef SCENE_T3548145984_H
#define SCENE_T3548145984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t3548145984 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t3548145984, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T3548145984_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T97265340_H
#define VOID_T97265340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t97265340 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T97265340_H
#ifndef VECTOR3_T662603373_H
#define VECTOR3_T662603373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t662603373 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t662603373, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t662603373, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t662603373, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t662603373_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t662603373  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t662603373  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t662603373  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t662603373  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t662603373  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t662603373  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t662603373  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t662603373  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t662603373  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t662603373  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___zeroVector_4)); }
	inline Vector3_t662603373  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t662603373 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t662603373  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___oneVector_5)); }
	inline Vector3_t662603373  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t662603373 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t662603373  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___upVector_6)); }
	inline Vector3_t662603373  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t662603373 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t662603373  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___downVector_7)); }
	inline Vector3_t662603373  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t662603373 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t662603373  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___leftVector_8)); }
	inline Vector3_t662603373  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t662603373 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t662603373  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___rightVector_9)); }
	inline Vector3_t662603373  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t662603373 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t662603373  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___forwardVector_10)); }
	inline Vector3_t662603373  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t662603373 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t662603373  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___backVector_11)); }
	inline Vector3_t662603373  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t662603373 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t662603373  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t662603373  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t662603373 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t662603373  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t662603373_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t662603373  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t662603373 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t662603373  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T662603373_H
#ifndef COLOR32_T3814187558_H
#define COLOR32_T3814187558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t3814187558 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t3814187558, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t3814187558, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t3814187558, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t3814187558, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T3814187558_H
#ifndef VECTOR2_T96842169_H
#define VECTOR2_T96842169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t96842169 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t96842169, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t96842169, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t96842169_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t96842169  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t96842169  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t96842169  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t96842169  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t96842169  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t96842169  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t96842169  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t96842169  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___zeroVector_2)); }
	inline Vector2_t96842169  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t96842169 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t96842169  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___oneVector_3)); }
	inline Vector2_t96842169  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t96842169 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t96842169  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___upVector_4)); }
	inline Vector2_t96842169  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t96842169 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t96842169  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___downVector_5)); }
	inline Vector2_t96842169  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t96842169 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t96842169  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___leftVector_6)); }
	inline Vector2_t96842169  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t96842169 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t96842169  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___rightVector_7)); }
	inline Vector2_t96842169  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t96842169 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t96842169  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t96842169  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t96842169 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t96842169  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t96842169_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t96842169  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t96842169 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t96842169  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T96842169_H
#ifndef BOOLEAN_T1583631706_H
#define BOOLEAN_T1583631706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1583631706 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1583631706, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1583631706_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1583631706_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1583631706_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1583631706_H
#ifndef INT32_T1175791592_H
#define INT32_T1175791592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1175791592 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1175791592, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1175791592_H
#ifndef QUATERNION_T3834325445_H
#define QUATERNION_T3834325445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3834325445 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3834325445, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3834325445, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3834325445, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3834325445, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3834325445_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3834325445  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3834325445_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3834325445  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3834325445 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3834325445  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3834325445_H
#ifndef COLOR_T323270958_H
#define COLOR_T323270958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t323270958 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t323270958, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t323270958, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t323270958, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t323270958, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T323270958_H
#ifndef ANIMATORSTATEINFO_T2686842193_H
#define ANIMATORSTATEINFO_T2686842193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t2686842193 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2686842193, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T2686842193_H
#ifndef ANIMATORCLIPINFO_T515722270_H
#define ANIMATORCLIPINFO_T515722270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t515722270 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t515722270, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t515722270, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T515722270_H
#ifndef ANIMATIONEVENTSOURCE_T3843175332_H
#define ANIMATIONEVENTSOURCE_T3843175332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t3843175332 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t3843175332, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T3843175332_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T1001721160_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T1001721160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t1001721160 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t1001721160, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T1001721160_H
#ifndef VERTICALWRAPMODE_T1660938436_H
#define VERTICALWRAPMODE_T1660938436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VerticalWrapMode
struct  VerticalWrapMode_t1660938436 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t1660938436, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALWRAPMODE_T1660938436_H
#ifndef HUMANLIMIT_T3512629200_H
#define HUMANLIMIT_T3512629200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t3512629200 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t662603373  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t662603373  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t662603373  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t3512629200, ___m_Min_0)); }
	inline Vector3_t662603373  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t662603373 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t662603373  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t3512629200, ___m_Max_1)); }
	inline Vector3_t662603373  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t662603373 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t662603373  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t3512629200, ___m_Center_2)); }
	inline Vector3_t662603373  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t662603373 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t662603373  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t3512629200, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t3512629200, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T3512629200_H
#ifndef FONTSTYLE_T2102218308_H
#define FONTSTYLE_T2102218308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t2102218308 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t2102218308, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLE_T2102218308_H
#ifndef TEXTGENERATIONERROR_T141465744_H
#define TEXTGENERATIONERROR_T141465744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationError
struct  TextGenerationError_t141465744 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextGenerationError_t141465744, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTGENERATIONERROR_T141465744_H
#ifndef TEXTANCHOR_T3038484373_H
#define TEXTANCHOR_T3038484373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t3038484373 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t3038484373, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T3038484373_H
#ifndef HORIZONTALWRAPMODE_T193919012_H
#define HORIZONTALWRAPMODE_T193919012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HorizontalWrapMode
struct  HorizontalWrapMode_t193919012 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_t193919012, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALWRAPMODE_T193919012_H
#ifndef UICHARINFO_T35434783_H
#define UICHARINFO_T35434783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t35434783 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t96842169  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t35434783, ___cursorPos_0)); }
	inline Vector2_t96842169  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t96842169 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t96842169  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t35434783, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T35434783_H
#ifndef OBJECT_T2083116985_H
#define OBJECT_T2083116985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2083116985  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2083116985, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2083116985_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2083116985_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2083116985_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2083116985_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2083116985_H
#ifndef TRACKEDREFERENCE_T1037935676_H
#define TRACKEDREFERENCE_T1037935676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1037935676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1037935676, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1037935676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1037935676_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1037935676_H
#ifndef SKELETONBONE_T3506695127_H
#define SKELETONBONE_T3506695127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t3506695127 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t662603373  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t3834325445  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t662603373  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t3506695127, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t3506695127, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t3506695127, ___position_2)); }
	inline Vector3_t662603373  get_position_2() const { return ___position_2; }
	inline Vector3_t662603373 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t662603373  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t3506695127, ___rotation_3)); }
	inline Quaternion_t3834325445  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t3834325445 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t3834325445  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t3506695127, ___scale_4)); }
	inline Vector3_t662603373  get_scale_4() const { return ___scale_4; }
	inline Vector3_t662603373 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t662603373  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t3506695127_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t662603373  ___position_2;
	Quaternion_t3834325445  ___rotation_3;
	Vector3_t662603373  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t3506695127_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t662603373  ___position_2;
	Quaternion_t3834325445  ___rotation_3;
	Vector3_t662603373  ___scale_4;
};
#endif // SKELETONBONE_T3506695127_H
#ifndef RAYCASTHIT2D_T750213667_H
#define RAYCASTHIT2D_T750213667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t750213667 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t96842169  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t96842169  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t96842169  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t4273034315 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Centroid_0)); }
	inline Vector2_t96842169  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t96842169 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t96842169  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Point_1)); }
	inline Vector2_t96842169  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t96842169 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t96842169  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Normal_2)); }
	inline Vector2_t96842169  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t96842169 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t96842169  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t750213667, ___m_Collider_5)); }
	inline Collider2D_t4273034315 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t4273034315 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t4273034315 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t750213667_marshaled_pinvoke
{
	Vector2_t96842169  ___m_Centroid_0;
	Vector2_t96842169  ___m_Point_1;
	Vector2_t96842169  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t4273034315 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t750213667_marshaled_com
{
	Vector2_t96842169  ___m_Centroid_0;
	Vector2_t96842169  ___m_Point_1;
	Vector2_t96842169  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t4273034315 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T750213667_H
#ifndef DELEGATE_T4015944365_H
#define DELEGATE_T4015944365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4015944365  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1041011760 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___data_8)); }
	inline DelegateData_t1041011760 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1041011760 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1041011760 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4015944365_H
#ifndef REMOTENOTIFICATION_T613315372_H
#define REMOTENOTIFICATION_T613315372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t613315372  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t613315372, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T613315372_H
#ifndef LOADSCENEMODE_T4034422208_H
#define LOADSCENEMODE_T4034422208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t4034422208 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t4034422208, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T4034422208_H
#ifndef LOCALNOTIFICATION_T547795672_H
#define LOCALNOTIFICATION_T547795672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t547795672  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t547795672, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t547795672_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t547795672_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T547795672_H
#ifndef CALENDARUNIT_T2903036030_H
#define CALENDARUNIT_T2903036030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t2903036030 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t2903036030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T2903036030_H
#ifndef CALENDARIDENTIFIER_T1297039846_H
#define CALENDARIDENTIFIER_T1297039846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t1297039846 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t1297039846, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T1297039846_H
#ifndef PARTICLE_T205514383_H
#define PARTICLE_T205514383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t205514383 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t662603373  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t662603373  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t662603373  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t662603373  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t662603373  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t662603373  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t662603373  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t662603373  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t3814187558  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_Position_0)); }
	inline Vector3_t662603373  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t662603373 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t662603373  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_Velocity_1)); }
	inline Vector3_t662603373  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t662603373 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t662603373  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_AnimatedVelocity_2)); }
	inline Vector3_t662603373  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t662603373 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t662603373  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_InitialVelocity_3)); }
	inline Vector3_t662603373  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t662603373 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t662603373  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_AxisOfRotation_4)); }
	inline Vector3_t662603373  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t662603373 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t662603373  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_Rotation_5)); }
	inline Vector3_t662603373  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t662603373 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t662603373  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_AngularVelocity_6)); }
	inline Vector3_t662603373  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t662603373 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t662603373  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_StartSize_7)); }
	inline Vector3_t662603373  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t662603373 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t662603373  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_StartColor_8)); }
	inline Color32_t3814187558  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t3814187558 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t3814187558  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t205514383, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T205514383_H
#ifndef PLAYABLEOUTPUTHANDLE_T1265276347_H
#define PLAYABLEOUTPUTHANDLE_T1265276347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t1265276347 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1265276347, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1265276347, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T1265276347_H
#ifndef CONTROLLERCOLLIDERHIT_T2072103049_H
#define CONTROLLERCOLLIDERHIT_T2072103049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t2072103049  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t3170073212 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t966687888 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t662603373  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t662603373  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t662603373  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_Controller_0)); }
	inline CharacterController_t3170073212 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t3170073212 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t3170073212 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_Collider_1)); }
	inline Collider_t966687888 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t966687888 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t966687888 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_Point_2)); }
	inline Vector3_t662603373  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t662603373 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t662603373  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_Normal_3)); }
	inline Vector3_t662603373  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t662603373 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t662603373  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_MoveDirection_4)); }
	inline Vector3_t662603373  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t662603373 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t662603373  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2072103049, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2072103049_marshaled_pinvoke
{
	CharacterController_t3170073212 * ___m_Controller_0;
	Collider_t966687888 * ___m_Collider_1;
	Vector3_t662603373  ___m_Point_2;
	Vector3_t662603373  ___m_Normal_3;
	Vector3_t662603373  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2072103049_marshaled_com
{
	CharacterController_t3170073212 * ___m_Controller_0;
	Collider_t966687888 * ___m_Collider_1;
	Vector3_t662603373  ___m_Point_2;
	Vector3_t662603373  ___m_Normal_3;
	Vector3_t662603373  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T2072103049_H
#ifndef COLLISION_T468606996_H
#define COLLISION_T468606996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t468606996  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t662603373  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t662603373  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t2022202123 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t966687888 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t425974840* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t468606996, ___m_Impulse_0)); }
	inline Vector3_t662603373  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t662603373 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t662603373  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t468606996, ___m_RelativeVelocity_1)); }
	inline Vector3_t662603373  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t662603373 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t662603373  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t468606996, ___m_Rigidbody_2)); }
	inline Rigidbody_t2022202123 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t2022202123 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t2022202123 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t468606996, ___m_Collider_3)); }
	inline Collider_t966687888 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t966687888 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t966687888 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t468606996, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t425974840* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t425974840** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t425974840* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t468606996_marshaled_pinvoke
{
	Vector3_t662603373  ___m_Impulse_0;
	Vector3_t662603373  ___m_RelativeVelocity_1;
	Rigidbody_t2022202123 * ___m_Rigidbody_2;
	Collider_t966687888 * ___m_Collider_3;
	ContactPoint_t235394261 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t468606996_marshaled_com
{
	Vector3_t662603373  ___m_Impulse_0;
	Vector3_t662603373  ___m_RelativeVelocity_1;
	Rigidbody_t2022202123 * ___m_Rigidbody_2;
	Collider_t966687888 * ___m_Collider_3;
	ContactPoint_t235394261 * ___m_Contacts_4;
};
#endif // COLLISION_T468606996_H
#ifndef PLAYABLEGRAPH_T1513555314_H
#define PLAYABLEGRAPH_T1513555314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t1513555314 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t1513555314, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t1513555314, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T1513555314_H
#ifndef CONTACTPOINT_T235394261_H
#define CONTACTPOINT_T235394261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t235394261 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t662603373  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t662603373  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t235394261, ___m_Point_0)); }
	inline Vector3_t662603373  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t662603373 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t662603373  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t235394261, ___m_Normal_1)); }
	inline Vector3_t662603373  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t662603373 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t662603373  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t235394261, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t235394261, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t235394261, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T235394261_H
#ifndef AXIS_T3063955414_H
#define AXIS_T3063955414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t3063955414 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t3063955414, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T3063955414_H
#ifndef QUERYTRIGGERINTERACTION_T3830961558_H
#define QUERYTRIGGERINTERACTION_T3830961558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t3830961558 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t3830961558, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T3830961558_H
#ifndef DATASTREAMTYPE_T4274042814_H
#define DATASTREAMTYPE_T4274042814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4274042814 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4274042814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4274042814_H
#ifndef DIRECTORUPDATEMODE_T3247315495_H
#define DIRECTORUPDATEMODE_T3247315495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DirectorUpdateMode
struct  DirectorUpdateMode_t3247315495 
{
public:
	// System.Int32 UnityEngine.Playables.DirectorUpdateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DirectorUpdateMode_t3247315495, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEMODE_T3247315495_H
#ifndef DRIVENTRANSFORMPROPERTIES_T2871953697_H
#define DRIVENTRANSFORMPROPERTIES_T2871953697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t2871953697 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t2871953697, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T2871953697_H
#ifndef EDGE_T1754155305_H
#define EDGE_T1754155305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t1754155305 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Edge_t1754155305, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGE_T1754155305_H
#ifndef PLAYABLEHANDLE_T3946394360_H
#define PLAYABLEHANDLE_T3946394360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t3946394360 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t3946394360, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t3946394360, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T3946394360_H
#ifndef PLAYSTATE_T3540124810_H
#define PLAYSTATE_T3540124810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t3540124810 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t3540124810, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T3540124810_H
#ifndef RAYCASTHIT_T3843666727_H
#define RAYCASTHIT_T3843666727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t3843666727 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t662603373  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t662603373  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t96842169  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t966687888 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_Point_0)); }
	inline Vector3_t662603373  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t662603373 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t662603373  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_Normal_1)); }
	inline Vector3_t662603373  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t662603373 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t662603373  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_UV_4)); }
	inline Vector2_t96842169  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t96842169 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t96842169  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t3843666727, ___m_Collider_5)); }
	inline Collider_t966687888 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t966687888 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t966687888 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t3843666727_marshaled_pinvoke
{
	Vector3_t662603373  ___m_Point_0;
	Vector3_t662603373  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t96842169  ___m_UV_4;
	Collider_t966687888 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t3843666727_marshaled_com
{
	Vector3_t662603373  ___m_Point_0;
	Vector3_t662603373  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t96842169  ___m_UV_4;
	Collider_t966687888 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T3843666727_H
#ifndef PARTICLESYSTEMSTOPBEHAVIOR_T3780738570_H
#define PARTICLESYSTEMSTOPBEHAVIOR_T3780738570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemStopBehavior
struct  ParticleSystemStopBehavior_t3780738570 
{
public:
	// System.Int32 UnityEngine.ParticleSystemStopBehavior::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParticleSystemStopBehavior_t3780738570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMSTOPBEHAVIOR_T3780738570_H
#ifndef SCRIPTABLERENDERCONTEXT_T955099866_H
#define SCRIPTABLERENDERCONTEXT_T955099866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t955099866 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t955099866, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T955099866_H
#ifndef HUMANBONE_T2917565559_H
#define HUMANBONE_T2917565559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2917565559 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t3512629200  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2917565559, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2917565559, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2917565559, ___limit_2)); }
	inline HumanLimit_t3512629200  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t3512629200 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t3512629200  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2917565559_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t3512629200  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2917565559_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t3512629200  ___limit_2;
};
#endif // HUMANBONE_T2917565559_H
#ifndef SPRITEATLAS_T3252722944_H
#define SPRITEATLAS_T3252722944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t3252722944  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T3252722944_H
#ifndef ANIMATIONSTATE_T2254120030_H
#define ANIMATIONSTATE_T2254120030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t2254120030  : public TrackedReference_t1037935676
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T2254120030_H
#ifndef AVATARMASK_T3189150362_H
#define AVATARMASK_T3189150362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t3189150362  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T3189150362_H
#ifndef MOTION_T1491801944_H
#define MOTION_T1491801944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1491801944  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1491801944_H
#ifndef RUNTIMEANIMATORCONTROLLER_T1441198632_H
#define RUNTIMEANIMATORCONTROLLER_T1441198632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t1441198632  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T1441198632_H
#ifndef TEXTGENERATIONSETTINGS_T1641493984_H
#define TEXTGENERATIONSETTINGS_T1641493984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationSettings
struct  TextGenerationSettings_t1641493984 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_t1247610616 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_t323270958  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t96842169  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t96842169  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___font_0)); }
	inline Font_t1247610616 * get_font_0() const { return ___font_0; }
	inline Font_t1247610616 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_t1247610616 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((&___font_0), value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___color_1)); }
	inline Color_t323270958  get_color_1() const { return ___color_1; }
	inline Color_t323270958 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t323270958  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___generationExtents_15)); }
	inline Vector2_t96842169  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_t96842169 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_t96842169  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___pivot_16)); }
	inline Vector2_t96842169  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_t96842169 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_t96842169  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t1641493984, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t1641493984_marshaled_pinvoke
{
	Font_t1247610616 * ___font_0;
	Color_t323270958  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t96842169  ___generationExtents_15;
	Vector2_t96842169  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t1641493984_marshaled_com
{
	Font_t1247610616 * ___font_0;
	Color_t323270958  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t96842169  ___generationExtents_15;
	Vector2_t96842169  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
#endif // TEXTGENERATIONSETTINGS_T1641493984_H
#ifndef PHYSICMATERIAL_T3943749228_H
#define PHYSICMATERIAL_T3943749228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t3943749228  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T3943749228_H
#ifndef ANIMATORCONTROLLERPARAMETER_T2429574048_H
#define ANIMATORCONTROLLERPARAMETER_T2429574048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t2429574048  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2429574048, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2429574048, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2429574048, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2429574048, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2429574048, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T2429574048_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T1927770436_H
#define ANIMATIONPLAYABLEOUTPUT_T1927770436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t1927770436 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t1265276347  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t1927770436, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1265276347  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1265276347 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1265276347  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T1927770436_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T2020065967_H
#define ANIMATORCONTROLLERPLAYABLE_T2020065967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t2020065967 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t2020065967, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t2020065967_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t2020065967  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t2020065967_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t2020065967  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t2020065967 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t2020065967  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T2020065967_H
#ifndef PLAYABLE_T2112633112_H
#define PLAYABLE_T2112633112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t2112633112 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t2112633112, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t2112633112_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t2112633112  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t2112633112_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t2112633112  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t2112633112 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t2112633112  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T2112633112_H
#ifndef SCRIPTABLEOBJECT_T2836049649_H
#define SCRIPTABLEOBJECT_T2836049649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2836049649  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2836049649_marshaled_pinvoke : public Object_t2083116985_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2836049649_marshaled_com : public Object_t2083116985_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2836049649_H
#ifndef AUDIOPLAYABLEOUTPUT_T998540229_H
#define AUDIOPLAYABLEOUTPUT_T998540229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t998540229 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t1265276347  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t998540229, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1265276347  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1265276347 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1265276347  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T998540229_H
#ifndef AUDIOCLIPPLAYABLE_T2072739648_H
#define AUDIOCLIPPLAYABLE_T2072739648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t2072739648 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t2072739648, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T2072739648_H
#ifndef AUDIOMIXERPLAYABLE_T3094673687_H
#define AUDIOMIXERPLAYABLE_T3094673687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t3094673687 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t3094673687, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T3094673687_H
#ifndef ANIMATIONEVENT_T1669252500_H
#define ANIMATIONEVENT_T1669252500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1669252500  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t2083116985 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t2254120030 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t2686842193  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t515722270  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_ObjectReferenceParameter_3)); }
	inline Object_t2083116985 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t2083116985 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t2083116985 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_StateSender_8)); }
	inline AnimationState_t2254120030 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t2254120030 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t2254120030 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t2686842193  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t2686842193 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t2686842193  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1669252500, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t515722270  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t515722270 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t515722270  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1669252500_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t2083116985_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t2254120030 * ___m_StateSender_8;
	AnimatorStateInfo_t2686842193  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t515722270  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1669252500_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t2083116985_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t2254120030 * ___m_StateSender_8;
	AnimatorStateInfo_t2686842193  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t515722270  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1669252500_H
#ifndef PLAYABLEOUTPUT_T3158298161_H
#define PLAYABLEOUTPUT_T3158298161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3158298161 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t1265276347  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3158298161, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1265276347  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1265276347 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1265276347  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3158298161_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3158298161  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3158298161_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3158298161  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3158298161 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3158298161  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3158298161_H
#ifndef AUDIOCLIP_T22538224_H
#define AUDIOCLIP_T22538224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t22538224  : public Object_t2083116985
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t4291808532 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t3308759786 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t22538224, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t4291808532 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t4291808532 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t4291808532 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t22538224, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t3308759786 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t3308759786 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t3308759786 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T22538224_H
#ifndef ANIMATIONCLIPPLAYABLE_T3491736814_H
#define ANIMATIONCLIPPLAYABLE_T3491736814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t3491736814 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t3491736814, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T3491736814_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T3543721164_H
#define ANIMATIONLAYERMIXERPLAYABLE_T3543721164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t3543721164 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3543721164, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t3543721164_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t3543721164  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3543721164_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t3543721164  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t3543721164 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t3543721164  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T3543721164_H
#ifndef ANIMATIONMIXERPLAYABLE_T1562316139_H
#define ANIMATIONMIXERPLAYABLE_T1562316139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t1562316139 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t1562316139, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T1562316139_H
#ifndef ANIMATIONOFFSETPLAYABLE_T3715682483_H
#define ANIMATIONOFFSETPLAYABLE_T3715682483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t3715682483 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t3946394360  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3715682483, ___m_Handle_0)); }
	inline PlayableHandle_t3946394360  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3946394360 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3946394360  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t3715682483_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t3715682483  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3715682483_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t3715682483  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t3715682483 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t3715682483  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T3715682483_H
#ifndef COMPONENT_T3870876433_H
#define COMPONENT_T3870876433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3870876433  : public Object_t2083116985
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3870876433_H
#ifndef MULTICASTDELEGATE_T2400541826_H
#define MULTICASTDELEGATE_T2400541826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2400541826  : public Delegate_t4015944365
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2400541826 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2400541826 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2400541826, ___prev_9)); }
	inline MulticastDelegate_t2400541826 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2400541826 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2400541826 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2400541826, ___kpm_next_10)); }
	inline MulticastDelegate_t2400541826 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2400541826 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2400541826 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2400541826_H
#ifndef FONT_T1247610616_H
#define FONT_T1247610616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1247610616  : public Object_t2083116985
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t4104338335 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1247610616, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t4104338335 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t4104338335 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t4104338335 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1247610616_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t4189585719 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1247610616_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t4189585719 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t4189585719 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t4189585719 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1247610616_H
#ifndef BEHAVIOUR_T1507968190_H
#define BEHAVIOUR_T1507968190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1507968190  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1507968190_H
#ifndef TRANSFORM_T1902747184_H
#define TRANSFORM_T1902747184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1902747184  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1902747184_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T4104338335_H
#define FONTTEXTUREREBUILDCALLBACK_T4104338335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t4104338335  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T4104338335_H
#ifndef PCMSETPOSITIONCALLBACK_T3308759786_H
#define PCMSETPOSITIONCALLBACK_T3308759786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t3308759786  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T3308759786_H
#ifndef REAPPLYDRIVENPROPERTIES_T1933245441_H
#define REAPPLYDRIVENPROPERTIES_T1933245441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1933245441  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T1933245441_H
#ifndef TEXTGENERATOR_T4229000240_H
#define TEXTGENERATOR_T4229000240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerator
struct  TextGenerator_t4229000240  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_t1641493984  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t1356515435 * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t2015043497 * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t1511494852 * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastString_1), value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_LastSettings_2)); }
	inline TextGenerationSettings_t1641493984  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_t1641493984 * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_t1641493984  value)
	{
		___m_LastSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_Verts_5)); }
	inline List_1_t1356515435 * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t1356515435 ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t1356515435 * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Verts_5), value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_Characters_6)); }
	inline List_1_t2015043497 * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t2015043497 ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t2015043497 * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Characters_6), value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_Lines_7)); }
	inline List_1_t1511494852 * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_t1511494852 ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_t1511494852 * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Lines_7), value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t4229000240, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t4229000240_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_t1641493984_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t1356515435 * ___m_Verts_5;
	List_1_t2015043497 * ___m_Characters_6;
	List_1_t1511494852 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t4229000240_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_t1641493984_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t1356515435 * ___m_Verts_5;
	List_1_t2015043497 * ___m_Characters_6;
	List_1_t1511494852 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
#endif // TEXTGENERATOR_T4229000240_H
#ifndef REQUESTATLASCALLBACK_T1542364118_H
#define REQUESTATLASCALLBACK_T1542364118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t1542364118  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T1542364118_H
#ifndef PARTICLESYSTEM_T2657036970_H
#define PARTICLESYSTEM_T2657036970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t2657036970  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T2657036970_H
#ifndef ANIMATIONCLIP_T1569667265_H
#define ANIMATIONCLIP_T1569667265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t1569667265  : public Motion_t1491801944
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T1569667265_H
#ifndef RIGIDBODY_T2022202123_H
#define RIGIDBODY_T2022202123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t2022202123  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T2022202123_H
#ifndef STATEMACHINEBEHAVIOUR_T1535594223_H
#define STATEMACHINEBEHAVIOUR_T1535594223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t1535594223  : public ScriptableObject_t2836049649
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T1535594223_H
#ifndef COLLIDER_T966687888_H
#define COLLIDER_T966687888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t966687888  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T966687888_H
#ifndef RIGIDBODY2D_T1414138722_H
#define RIGIDBODY2D_T1414138722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t1414138722  : public Component_t3870876433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T1414138722_H
#ifndef PCMREADERCALLBACK_T4291808532_H
#define PCMREADERCALLBACK_T4291808532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t4291808532  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T4291808532_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T1942298958_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T1942298958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t1942298958  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T1942298958_H
#ifndef ONNAVMESHPREUPDATE_T3249456275_H
#define ONNAVMESHPREUPDATE_T3249456275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct  OnNavMeshPreUpdate_t3249456275  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONNAVMESHPREUPDATE_T3249456275_H
#ifndef RECTTRANSFORM_T219695396_H
#define RECTTRANSFORM_T219695396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t219695396  : public Transform_t1902747184
{
public:

public:
};

struct RectTransform_t219695396_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1933245441 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t219695396_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1933245441 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1933245441 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1933245441 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T219695396_H
#ifndef CAPSULECOLLIDER_T1777313537_H
#define CAPSULECOLLIDER_T1777313537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t1777313537  : public Collider_t966687888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T1777313537_H
#ifndef COLLIDER2D_T4273034315_H
#define COLLIDER2D_T4273034315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t4273034315  : public Behaviour_t1507968190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T4273034315_H
#ifndef MESHCOLLIDER_T3840865291_H
#define MESHCOLLIDER_T3840865291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t3840865291  : public Collider_t966687888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T3840865291_H
#ifndef AUDIOSOURCE_T1244642115_H
#define AUDIOSOURCE_T1244642115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t1244642115  : public Behaviour_t1507968190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T1244642115_H
#ifndef SPHERECOLLIDER_T2764975003_H
#define SPHERECOLLIDER_T2764975003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2764975003  : public Collider_t966687888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2764975003_H
#ifndef GUIELEMENT_T2891216609_H
#define GUIELEMENT_T2891216609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t2891216609  : public Behaviour_t1507968190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T2891216609_H
#ifndef BOXCOLLIDER_T263748287_H
#define BOXCOLLIDER_T263748287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t263748287  : public Collider_t966687888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T263748287_H
#ifndef ANIMATOR_T159330264_H
#define ANIMATOR_T159330264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t159330264  : public Behaviour_t1507968190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T159330264_H
#ifndef NAVMESHAGENT_T3656952187_H
#define NAVMESHAGENT_T3656952187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t3656952187  : public Behaviour_t1507968190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T3656952187_H
#ifndef CHARACTERCONTROLLER_T3170073212_H
#define CHARACTERCONTROLLER_T3170073212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t3170073212  : public Collider_t966687888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T3170073212_H
#ifndef GUITEXT_T1487485963_H
#define GUITEXT_T1487485963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIText
struct  GUIText_t1487485963  : public GUIElement_t2891216609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITEXT_T1487485963_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (YieldInstruction_t296394869), sizeof(YieldInstruction_t296394869_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (PlayState_t3540124810)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2101[3] = 
{
	PlayState_t3540124810::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (PlayableHandle_t3946394360)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t3946394360 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2102[2] = 
{
	PlayableHandle_t3946394360::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t3946394360::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (Playable_t2112633112)+ sizeof (RuntimeObject), sizeof(Playable_t2112633112 ), sizeof(Playable_t2112633112_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2103[2] = 
{
	Playable_t2112633112::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t2112633112_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (DirectorUpdateMode_t3247315495)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2104[5] = 
{
	DirectorUpdateMode_t3247315495::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (DataStreamType_t4274042814)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2105[5] = 
{
	DataStreamType_t4274042814::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (PlayableGraph_t1513555314)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t1513555314 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2106[2] = 
{
	PlayableGraph_t1513555314::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t1513555314::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (PlayableOutputHandle_t1265276347)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t1265276347 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2107[2] = 
{
	PlayableOutputHandle_t1265276347::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t1265276347::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (PlayableOutput_t3158298161)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3158298161 ), sizeof(PlayableOutput_t3158298161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2108[2] = 
{
	PlayableOutput_t3158298161::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3158298161_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (CalendarIdentifier_t1297039846)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2109[12] = 
{
	CalendarIdentifier_t1297039846::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (CalendarUnit_t2903036030)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2110[12] = 
{
	CalendarUnit_t2903036030::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (LocalNotification_t547795672), -1, sizeof(LocalNotification_t547795672_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2111[2] = 
{
	LocalNotification_t547795672::get_offset_of_notificationWrapper_0(),
	LocalNotification_t547795672_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (RemoteNotification_t613315372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2112[1] = 
{
	RemoteNotification_t613315372::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (Scene_t3548145984)+ sizeof (RuntimeObject), sizeof(Scene_t3548145984 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2113[1] = 
{
	Scene_t3548145984::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (LoadSceneMode_t4034422208)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2114[3] = 
{
	LoadSceneMode_t4034422208::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (SceneManager_t2751400528), -1, sizeof(SceneManager_t2751400528_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2115[3] = 
{
	SceneManager_t2751400528_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t2751400528_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t2751400528_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (ScriptableRenderContext_t955099866)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t955099866 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2116[1] = 
{
	ScriptableRenderContext_t955099866::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (Transform_t1902747184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (Enumerator_t2193729040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2118[2] = 
{
	Enumerator_t2193729040::get_offset_of_outer_0(),
	Enumerator_t2193729040::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (DrivenTransformProperties_t2871953697)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2119[26] = 
{
	DrivenTransformProperties_t2871953697::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (DrivenRectTransformTracker_t602944351)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t602944351 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (RectTransform_t219695396), -1, sizeof(RectTransform_t219695396_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2121[1] = 
{
	RectTransform_t219695396_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (ReapplyDrivenProperties_t1933245441), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (Edge_t1754155305)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2123[5] = 
{
	Edge_t1754155305::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (Axis_t3063955414)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2124[3] = 
{
	Axis_t3063955414::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (SpriteAtlasManager_t2369515522), -1, sizeof(SpriteAtlasManager_t2369515522_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2125[2] = 
{
	SpriteAtlasManager_t2369515522_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t2369515522_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (RequestAtlasCallback_t1542364118), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (SpriteAtlas_t3252722944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (ParticleSystemStopBehavior_t3780738570)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2128[3] = 
{
	ParticleSystemStopBehavior_t3780738570::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (ParticleSystem_t2657036970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (MainModule_t1565899854)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[1] = 
{
	MainModule_t1565899854::get_offset_of_m_ParticleSystem_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (Particle_t205514383)+ sizeof (RuntimeObject), sizeof(Particle_t205514383 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2131[14] = 
{
	Particle_t205514383::get_offset_of_m_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_Velocity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_AnimatedVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_InitialVelocity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_AxisOfRotation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_Rotation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_AngularVelocity_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_StartSize_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_StartColor_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_RandomSeed_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_Lifetime_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_StartLifetime_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_EmitAccumulator0_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t205514383::get_offset_of_m_EmitAccumulator1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (ControllerColliderHit_t2072103049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2132[7] = 
{
	ControllerColliderHit_t2072103049::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t2072103049::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t2072103049::get_offset_of_m_Point_2(),
	ControllerColliderHit_t2072103049::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t2072103049::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t2072103049::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t2072103049::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (Collision_t468606996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[5] = 
{
	Collision_t468606996::get_offset_of_m_Impulse_0(),
	Collision_t468606996::get_offset_of_m_RelativeVelocity_1(),
	Collision_t468606996::get_offset_of_m_Rigidbody_2(),
	Collision_t468606996::get_offset_of_m_Collider_3(),
	Collision_t468606996::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (QueryTriggerInteraction_t3830961558)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2134[4] = 
{
	QueryTriggerInteraction_t3830961558::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (Physics_t592859697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (ContactPoint_t235394261)+ sizeof (RuntimeObject), sizeof(ContactPoint_t235394261 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2136[5] = 
{
	ContactPoint_t235394261::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t235394261::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t235394261::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t235394261::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t235394261::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (Rigidbody_t2022202123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (Collider_t966687888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (BoxCollider_t263748287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (SphereCollider_t2764975003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (MeshCollider_t3840865291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (CapsuleCollider_t1777313537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (RaycastHit_t3843666727)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2143[6] = 
{
	RaycastHit_t3843666727::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t3843666727::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t3843666727::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t3843666727::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t3843666727::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t3843666727::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (PhysicMaterial_t3943749228), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (CharacterController_t3170073212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (RaycastHit2D_t750213667)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2146[6] = 
{
	RaycastHit2D_t750213667::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t750213667::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t750213667::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t750213667::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t750213667::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t750213667::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (Physics2D_t1061246715), -1, sizeof(Physics2D_t1061246715_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2147[1] = 
{
	Physics2D_t1061246715_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (Rigidbody2D_t1414138722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (Collider2D_t4273034315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (NavMesh_t3317076187), -1, sizeof(NavMesh_t3317076187_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2150[1] = 
{
	NavMesh_t3317076187_StaticFields::get_offset_of_onPreUpdate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (OnNavMeshPreUpdate_t3249456275), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (NavMeshAgent_t3656952187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (AudioPlayableOutput_t998540229)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t998540229 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2153[1] = 
{
	AudioPlayableOutput_t998540229::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (AudioClipPlayable_t2072739648)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t2072739648 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2154[1] = 
{
	AudioClipPlayable_t2072739648::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (AudioMixerPlayable_t3094673687)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t3094673687 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2155[1] = 
{
	AudioMixerPlayable_t3094673687::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (AudioSettings_t653524273), -1, sizeof(AudioSettings_t653524273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2156[1] = 
{
	AudioSettings_t653524273_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (AudioConfigurationChangeHandler_t1942298958), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (AudioClip_t22538224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2158[2] = 
{
	AudioClip_t22538224::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t22538224::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (PCMReaderCallback_t4291808532), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (PCMSetPositionCallback_t3308759786), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (AudioSource_t1244642115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (AudioPlayableGraphExtensions_t3264543164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (SharedBetweenAnimatorsAttribute_t2584643184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (StateMachineBehaviour_t1535594223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (AnimationClipPlayable_t3491736814)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t3491736814 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2165[1] = 
{
	AnimationClipPlayable_t3491736814::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (AnimationLayerMixerPlayable_t3543721164)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t3543721164 ), sizeof(AnimationLayerMixerPlayable_t3543721164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2166[2] = 
{
	AnimationLayerMixerPlayable_t3543721164::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t3543721164_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (AnimationMixerPlayable_t1562316139)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t1562316139 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2167[1] = 
{
	AnimationMixerPlayable_t1562316139::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (AnimationOffsetPlayable_t3715682483)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t3715682483 ), sizeof(AnimationOffsetPlayable_t3715682483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2168[2] = 
{
	AnimationOffsetPlayable_t3715682483::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t3715682483_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (AnimationPlayableExtensions_t590282538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (AnimationPlayableOutput_t1927770436)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t1927770436 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2170[1] = 
{
	AnimationPlayableOutput_t1927770436::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (AnimatorControllerPlayable_t2020065967)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t2020065967 ), sizeof(AnimatorControllerPlayable_t2020065967_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2171[2] = 
{
	AnimatorControllerPlayable_t2020065967::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t2020065967_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (AnimationPlayableGraphExtensions_t2488870762), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (AnimationEventSource_t3843175332)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2173[4] = 
{
	AnimationEventSource_t3843175332::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (AnimationEvent_t1669252500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2174[11] = 
{
	AnimationEvent_t1669252500::get_offset_of_m_Time_0(),
	AnimationEvent_t1669252500::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t1669252500::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t1669252500::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t1669252500::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t1669252500::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t1669252500::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t1669252500::get_offset_of_m_Source_7(),
	AnimationEvent_t1669252500::get_offset_of_m_StateSender_8(),
	AnimationEvent_t1669252500::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t1669252500::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (AnimationClip_t1569667265), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (AnimationState_t2254120030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (AnimatorControllerParameterType_t1001721160)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2177[5] = 
{
	AnimatorControllerParameterType_t1001721160::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (AnimatorClipInfo_t515722270)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t515722270 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2178[2] = 
{
	AnimatorClipInfo_t515722270::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t515722270::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (AnimatorStateInfo_t2686842193)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t2686842193 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2179[9] = 
{
	AnimatorStateInfo_t2686842193::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t2686842193::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (AnimatorTransitionInfo_t2492728474)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t2492728474_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2180[6] = 
{
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2492728474::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (Animator_t159330264), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (AnimatorControllerParameter_t2429574048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2182[5] = 
{
	AnimatorControllerParameter_t2429574048::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t2429574048::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t2429574048::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t2429574048::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t2429574048::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (SkeletonBone_t3506695127)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t3506695127_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2183[5] = 
{
	SkeletonBone_t3506695127::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t3506695127::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t3506695127::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t3506695127::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t3506695127::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (HumanLimit_t3512629200)+ sizeof (RuntimeObject), sizeof(HumanLimit_t3512629200 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2184[5] = 
{
	HumanLimit_t3512629200::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3512629200::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3512629200::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3512629200::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3512629200::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (HumanBone_t2917565559)+ sizeof (RuntimeObject), sizeof(HumanBone_t2917565559_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2185[3] = 
{
	HumanBone_t2917565559::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2917565559::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2917565559::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (AvatarMask_t3189150362), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (Motion_t1491801944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (RuntimeAnimatorController_t1441198632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (FontStyle_t2102218308)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2189[5] = 
{
	FontStyle_t2102218308::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (TextGenerationError_t141465744)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2190[5] = 
{
	TextGenerationError_t141465744::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (TextGenerationSettings_t1641493984)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2191[18] = 
{
	TextGenerationSettings_t1641493984::get_offset_of_font_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_fontSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_lineSpacing_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_richText_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_scaleFactor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_fontStyle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_textAnchor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_alignByGeometry_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_resizeTextForBestFit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_resizeTextMinSize_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_resizeTextMaxSize_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_updateBounds_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_verticalOverflow_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_horizontalOverflow_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_generationExtents_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_pivot_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t1641493984::get_offset_of_generateOutOfBounds_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (TextGenerator_t4229000240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2192[11] = 
{
	TextGenerator_t4229000240::get_offset_of_m_Ptr_0(),
	TextGenerator_t4229000240::get_offset_of_m_LastString_1(),
	TextGenerator_t4229000240::get_offset_of_m_LastSettings_2(),
	TextGenerator_t4229000240::get_offset_of_m_HasGenerated_3(),
	TextGenerator_t4229000240::get_offset_of_m_LastValid_4(),
	TextGenerator_t4229000240::get_offset_of_m_Verts_5(),
	TextGenerator_t4229000240::get_offset_of_m_Characters_6(),
	TextGenerator_t4229000240::get_offset_of_m_Lines_7(),
	TextGenerator_t4229000240::get_offset_of_m_CachedVerts_8(),
	TextGenerator_t4229000240::get_offset_of_m_CachedCharacters_9(),
	TextGenerator_t4229000240::get_offset_of_m_CachedLines_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (TextAnchor_t3038484373)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2193[10] = 
{
	TextAnchor_t3038484373::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (HorizontalWrapMode_t193919012)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2194[3] = 
{
	HorizontalWrapMode_t193919012::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (VerticalWrapMode_t1660938436)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2195[3] = 
{
	VerticalWrapMode_t1660938436::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (GUIText_t1487485963), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (Font_t1247610616), -1, sizeof(Font_t1247610616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2197[2] = 
{
	Font_t1247610616_StaticFields::get_offset_of_textureRebuilt_2(),
	Font_t1247610616::get_offset_of_m_FontTextureRebuildCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (FontTextureRebuildCallback_t4104338335), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (UICharInfo_t35434783)+ sizeof (RuntimeObject), sizeof(UICharInfo_t35434783 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2199[2] = 
{
	UICharInfo_t35434783::get_offset_of_cursorPos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UICharInfo_t35434783::get_offset_of_charWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

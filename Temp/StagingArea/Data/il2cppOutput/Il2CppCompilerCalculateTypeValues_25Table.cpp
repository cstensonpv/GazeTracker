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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t1286104214;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// MagicLeap.VideoCaptureVisualizer
struct VideoCaptureVisualizer_t486332716;
// MagicLeap.PlaneVisualizer/BoundariesCache
struct BoundariesCache_t1407943419;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<MagicLeap.PlaneVisualizer/PlanesCache>
struct List_1_t1055101014;
// System.Action`1<MagicLeap.PlaneVisualizer/PlanesCache>
struct Action_1_t4050461163;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPCF>
struct List_1_t3862267302;
// UnityEngine.XR.MagicLeap.MLPCF
struct MLPCF_t2390192560;
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[]
struct MLWorldPlaneBoundaryU5BU5D_t1423265241;
// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>
struct Func_2_t563276670;
// MagicLeap.PCFVisualizer
struct PCFVisualizer_t2975549815;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UserDataClass
struct UserDataClass_t3215840357;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.XR.MagicLeap.MLSpatialMapper
struct MLSpatialMapper_t3203873551;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.XR.MagicLeap.Placement
struct Placement_t3357082531;
// UnityEngine.XR.MagicLeap.ControllerConnectionHandler
struct ControllerConnectionHandler_t4044881542;
// UnityEngine.XR.MagicLeap.BaseRaycast
struct BaseRaycast_t2888167065;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.XR.MagicLeap.MLMediaPlayer
struct MLMediaPlayer_t2810777267;
// WorldScale
struct WorldScale_t4260615701;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t4032136720;
// System.Collections.Generic.List`1<MagicLeap.PlaneVisualizer/BoundariesCache>
struct List_1_t2880018161;
// System.Action`1<MagicLeap.PlaneVisualizer/BoundariesCache>
struct Action_1_t1580411014;
// UnityEngine.Gradient
struct Gradient_t3067099924;

struct MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke;
struct MLWorldPlaneBoundary_t1115739400_marshaled_com;



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
#ifndef PLANESCACHE_T3877993568_H
#define PLANESCACHE_T3877993568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer/PlanesCache
struct  PlanesCache_t3877993568  : public RuntimeObject
{
public:
	// UnityEngine.GameObject MagicLeap.PlaneVisualizer/PlanesCache::<Plane>k__BackingField
	GameObject_t1113636619 * ___U3CPlaneU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MagicLeap.PlaneVisualizer/PlanesCache::<Holes>k__BackingField
	List_1_t2585711361 * ___U3CHolesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPlaneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlanesCache_t3877993568, ___U3CPlaneU3Ek__BackingField_0)); }
	inline GameObject_t1113636619 * get_U3CPlaneU3Ek__BackingField_0() const { return ___U3CPlaneU3Ek__BackingField_0; }
	inline GameObject_t1113636619 ** get_address_of_U3CPlaneU3Ek__BackingField_0() { return &___U3CPlaneU3Ek__BackingField_0; }
	inline void set_U3CPlaneU3Ek__BackingField_0(GameObject_t1113636619 * value)
	{
		___U3CPlaneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlaneU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CHolesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlanesCache_t3877993568, ___U3CHolesU3Ek__BackingField_1)); }
	inline List_1_t2585711361 * get_U3CHolesU3Ek__BackingField_1() const { return ___U3CHolesU3Ek__BackingField_1; }
	inline List_1_t2585711361 ** get_address_of_U3CHolesU3Ek__BackingField_1() { return &___U3CHolesU3Ek__BackingField_1; }
	inline void set_U3CHolesU3Ek__BackingField_1(List_1_t2585711361 * value)
	{
		___U3CHolesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHolesU3Ek__BackingField_1), value);
	}
};

struct PlanesCache_t3877993568_StaticFields
{
public:
	// System.Action`1<UnityEngine.GameObject> MagicLeap.PlaneVisualizer/PlanesCache::<>f__am$cache0
	Action_1_t1286104214 * ___U3CU3Ef__amU24cache0_2;
	// System.Action`1<UnityEngine.GameObject> MagicLeap.PlaneVisualizer/PlanesCache::<>f__am$cache1
	Action_1_t1286104214 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(PlanesCache_t3877993568_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_1_t1286104214 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_1_t1286104214 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_1_t1286104214 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(PlanesCache_t3877993568_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Action_1_t1286104214 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Action_1_t1286104214 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Action_1_t1286104214 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANESCACHE_T3877993568_H
#ifndef U3CPOSTREQUESTU3EC__ITERATOR1_T3604508856_H
#define U3CPOSTREQUESTU3EC__ITERATOR1_T3604508856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewFirebaseScript/<PostRequest>c__Iterator1
struct  U3CPostRequestU3Ec__Iterator1_t3604508856  : public RuntimeObject
{
public:
	// System.String NewFirebaseScript/<PostRequest>c__Iterator1::url
	String_t* ___url_0;
	// UnityEngine.Networking.UnityWebRequest NewFirebaseScript/<PostRequest>c__Iterator1::<request>__0
	UnityWebRequest_t463507806 * ___U3CrequestU3E__0_1;
	// System.String NewFirebaseScript/<PostRequest>c__Iterator1::bodyJsonString
	String_t* ___bodyJsonString_2;
	// System.Byte[] NewFirebaseScript/<PostRequest>c__Iterator1::<bodyRaw>__0
	ByteU5BU5D_t4116647657* ___U3CbodyRawU3E__0_3;
	// System.Object NewFirebaseScript/<PostRequest>c__Iterator1::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean NewFirebaseScript/<PostRequest>c__Iterator1::$disposing
	bool ___U24disposing_5;
	// System.Int32 NewFirebaseScript/<PostRequest>c__Iterator1::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E__0_1() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___U3CrequestU3E__0_1)); }
	inline UnityWebRequest_t463507806 * get_U3CrequestU3E__0_1() const { return ___U3CrequestU3E__0_1; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CrequestU3E__0_1() { return &___U3CrequestU3E__0_1; }
	inline void set_U3CrequestU3E__0_1(UnityWebRequest_t463507806 * value)
	{
		___U3CrequestU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrequestU3E__0_1), value);
	}

	inline static int32_t get_offset_of_bodyJsonString_2() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___bodyJsonString_2)); }
	inline String_t* get_bodyJsonString_2() const { return ___bodyJsonString_2; }
	inline String_t** get_address_of_bodyJsonString_2() { return &___bodyJsonString_2; }
	inline void set_bodyJsonString_2(String_t* value)
	{
		___bodyJsonString_2 = value;
		Il2CppCodeGenWriteBarrier((&___bodyJsonString_2), value);
	}

	inline static int32_t get_offset_of_U3CbodyRawU3E__0_3() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___U3CbodyRawU3E__0_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CbodyRawU3E__0_3() const { return ___U3CbodyRawU3E__0_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CbodyRawU3E__0_3() { return &___U3CbodyRawU3E__0_3; }
	inline void set_U3CbodyRawU3E__0_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CbodyRawU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbodyRawU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CPostRequestU3Ec__Iterator1_t3604508856, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTREQUESTU3EC__ITERATOR1_T3604508856_H
#ifndef U3CPUTREQUESTU3EC__ITERATOR0_T3457603378_H
#define U3CPUTREQUESTU3EC__ITERATOR0_T3457603378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewFirebaseScript/<PutRequest>c__Iterator0
struct  U3CPutRequestU3Ec__Iterator0_t3457603378  : public RuntimeObject
{
public:
	// System.String NewFirebaseScript/<PutRequest>c__Iterator0::url
	String_t* ___url_0;
	// UnityEngine.Networking.UnityWebRequest NewFirebaseScript/<PutRequest>c__Iterator0::<request>__0
	UnityWebRequest_t463507806 * ___U3CrequestU3E__0_1;
	// System.String NewFirebaseScript/<PutRequest>c__Iterator0::bodyJsonString
	String_t* ___bodyJsonString_2;
	// System.Byte[] NewFirebaseScript/<PutRequest>c__Iterator0::<bodyRaw>__0
	ByteU5BU5D_t4116647657* ___U3CbodyRawU3E__0_3;
	// System.Object NewFirebaseScript/<PutRequest>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean NewFirebaseScript/<PutRequest>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 NewFirebaseScript/<PutRequest>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E__0_1() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___U3CrequestU3E__0_1)); }
	inline UnityWebRequest_t463507806 * get_U3CrequestU3E__0_1() const { return ___U3CrequestU3E__0_1; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CrequestU3E__0_1() { return &___U3CrequestU3E__0_1; }
	inline void set_U3CrequestU3E__0_1(UnityWebRequest_t463507806 * value)
	{
		___U3CrequestU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrequestU3E__0_1), value);
	}

	inline static int32_t get_offset_of_bodyJsonString_2() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___bodyJsonString_2)); }
	inline String_t* get_bodyJsonString_2() const { return ___bodyJsonString_2; }
	inline String_t** get_address_of_bodyJsonString_2() { return &___bodyJsonString_2; }
	inline void set_bodyJsonString_2(String_t* value)
	{
		___bodyJsonString_2 = value;
		Il2CppCodeGenWriteBarrier((&___bodyJsonString_2), value);
	}

	inline static int32_t get_offset_of_U3CbodyRawU3E__0_3() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___U3CbodyRawU3E__0_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CbodyRawU3E__0_3() const { return ___U3CbodyRawU3E__0_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CbodyRawU3E__0_3() { return &___U3CbodyRawU3E__0_3; }
	inline void set_U3CbodyRawU3E__0_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CbodyRawU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbodyRawU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CPutRequestU3Ec__Iterator0_t3457603378, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPUTREQUESTU3EC__ITERATOR0_T3457603378_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MLVERSION_T3020039793_H
#define MLVERSION_T3020039793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLVersion
struct  MLVersion_t3020039793  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLVERSION_T3020039793_H
#ifndef U3CENABLEPREVIEWU3EC__ITERATOR0_T1444502860_H
#define U3CENABLEPREVIEWU3EC__ITERATOR0_T1444502860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.VideoCaptureVisualizer/<EnablePreview>c__Iterator0
struct  U3CEnablePreviewU3Ec__Iterator0_t1444502860  : public RuntimeObject
{
public:
	// MagicLeap.VideoCaptureVisualizer MagicLeap.VideoCaptureVisualizer/<EnablePreview>c__Iterator0::$this
	VideoCaptureVisualizer_t486332716 * ___U24this_0;
	// System.Object MagicLeap.VideoCaptureVisualizer/<EnablePreview>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean MagicLeap.VideoCaptureVisualizer/<EnablePreview>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MagicLeap.VideoCaptureVisualizer/<EnablePreview>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CEnablePreviewU3Ec__Iterator0_t1444502860, ___U24this_0)); }
	inline VideoCaptureVisualizer_t486332716 * get_U24this_0() const { return ___U24this_0; }
	inline VideoCaptureVisualizer_t486332716 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(VideoCaptureVisualizer_t486332716 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CEnablePreviewU3Ec__Iterator0_t1444502860, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CEnablePreviewU3Ec__Iterator0_t1444502860, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CEnablePreviewU3Ec__Iterator0_t1444502860, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENABLEPREVIEWU3EC__ITERATOR0_T1444502860_H
#ifndef U3CDRAWBOUNDARIESU3EC__ANONSTOREY0_T2912254316_H
#define U3CDRAWBOUNDARIESU3EC__ANONSTOREY0_T2912254316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer/<DrawBoundaries>c__AnonStorey0
struct  U3CDrawBoundariesU3Ec__AnonStorey0_t2912254316  : public RuntimeObject
{
public:
	// MagicLeap.PlaneVisualizer/BoundariesCache MagicLeap.PlaneVisualizer/<DrawBoundaries>c__AnonStorey0::cache
	BoundariesCache_t1407943419 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(U3CDrawBoundariesU3Ec__AnonStorey0_t2912254316, ___cache_0)); }
	inline BoundariesCache_t1407943419 * get_cache_0() const { return ___cache_0; }
	inline BoundariesCache_t1407943419 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(BoundariesCache_t1407943419 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDRAWBOUNDARIESU3EC__ANONSTOREY0_T2912254316_H
#ifndef USERDATACLASS_T3215840357_H
#define USERDATACLASS_T3215840357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserDataClass
struct  UserDataClass_t3215840357  : public RuntimeObject
{
public:
	// System.String UserDataClass::userName
	String_t* ___userName_0;
	// System.String UserDataClass::note
	String_t* ___note_1;
	// System.String UserDataClass::timeStamp
	String_t* ___timeStamp_2;
	// System.Single UserDataClass::FixationConfidence
	float ___FixationConfidence_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::targetSession0
	List_1_t899420910 * ___targetSession0_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsEyeSession0
	List_1_t899420910 * ___positionsEyeSession0_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsHeadSession0
	List_1_t899420910 * ___positionsHeadSession0_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::targetSession1
	List_1_t899420910 * ___targetSession1_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsEyeSession1
	List_1_t899420910 * ___positionsEyeSession1_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsHeadSession1
	List_1_t899420910 * ___positionsHeadSession1_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::targetSession2
	List_1_t899420910 * ___targetSession2_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsEyeSession2
	List_1_t899420910 * ___positionsEyeSession2_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UserDataClass::positionsHeadSession2
	List_1_t899420910 * ___positionsHeadSession2_12;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_note_1() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___note_1)); }
	inline String_t* get_note_1() const { return ___note_1; }
	inline String_t** get_address_of_note_1() { return &___note_1; }
	inline void set_note_1(String_t* value)
	{
		___note_1 = value;
		Il2CppCodeGenWriteBarrier((&___note_1), value);
	}

	inline static int32_t get_offset_of_timeStamp_2() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___timeStamp_2)); }
	inline String_t* get_timeStamp_2() const { return ___timeStamp_2; }
	inline String_t** get_address_of_timeStamp_2() { return &___timeStamp_2; }
	inline void set_timeStamp_2(String_t* value)
	{
		___timeStamp_2 = value;
		Il2CppCodeGenWriteBarrier((&___timeStamp_2), value);
	}

	inline static int32_t get_offset_of_FixationConfidence_3() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___FixationConfidence_3)); }
	inline float get_FixationConfidence_3() const { return ___FixationConfidence_3; }
	inline float* get_address_of_FixationConfidence_3() { return &___FixationConfidence_3; }
	inline void set_FixationConfidence_3(float value)
	{
		___FixationConfidence_3 = value;
	}

	inline static int32_t get_offset_of_targetSession0_4() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___targetSession0_4)); }
	inline List_1_t899420910 * get_targetSession0_4() const { return ___targetSession0_4; }
	inline List_1_t899420910 ** get_address_of_targetSession0_4() { return &___targetSession0_4; }
	inline void set_targetSession0_4(List_1_t899420910 * value)
	{
		___targetSession0_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetSession0_4), value);
	}

	inline static int32_t get_offset_of_positionsEyeSession0_5() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsEyeSession0_5)); }
	inline List_1_t899420910 * get_positionsEyeSession0_5() const { return ___positionsEyeSession0_5; }
	inline List_1_t899420910 ** get_address_of_positionsEyeSession0_5() { return &___positionsEyeSession0_5; }
	inline void set_positionsEyeSession0_5(List_1_t899420910 * value)
	{
		___positionsEyeSession0_5 = value;
		Il2CppCodeGenWriteBarrier((&___positionsEyeSession0_5), value);
	}

	inline static int32_t get_offset_of_positionsHeadSession0_6() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsHeadSession0_6)); }
	inline List_1_t899420910 * get_positionsHeadSession0_6() const { return ___positionsHeadSession0_6; }
	inline List_1_t899420910 ** get_address_of_positionsHeadSession0_6() { return &___positionsHeadSession0_6; }
	inline void set_positionsHeadSession0_6(List_1_t899420910 * value)
	{
		___positionsHeadSession0_6 = value;
		Il2CppCodeGenWriteBarrier((&___positionsHeadSession0_6), value);
	}

	inline static int32_t get_offset_of_targetSession1_7() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___targetSession1_7)); }
	inline List_1_t899420910 * get_targetSession1_7() const { return ___targetSession1_7; }
	inline List_1_t899420910 ** get_address_of_targetSession1_7() { return &___targetSession1_7; }
	inline void set_targetSession1_7(List_1_t899420910 * value)
	{
		___targetSession1_7 = value;
		Il2CppCodeGenWriteBarrier((&___targetSession1_7), value);
	}

	inline static int32_t get_offset_of_positionsEyeSession1_8() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsEyeSession1_8)); }
	inline List_1_t899420910 * get_positionsEyeSession1_8() const { return ___positionsEyeSession1_8; }
	inline List_1_t899420910 ** get_address_of_positionsEyeSession1_8() { return &___positionsEyeSession1_8; }
	inline void set_positionsEyeSession1_8(List_1_t899420910 * value)
	{
		___positionsEyeSession1_8 = value;
		Il2CppCodeGenWriteBarrier((&___positionsEyeSession1_8), value);
	}

	inline static int32_t get_offset_of_positionsHeadSession1_9() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsHeadSession1_9)); }
	inline List_1_t899420910 * get_positionsHeadSession1_9() const { return ___positionsHeadSession1_9; }
	inline List_1_t899420910 ** get_address_of_positionsHeadSession1_9() { return &___positionsHeadSession1_9; }
	inline void set_positionsHeadSession1_9(List_1_t899420910 * value)
	{
		___positionsHeadSession1_9 = value;
		Il2CppCodeGenWriteBarrier((&___positionsHeadSession1_9), value);
	}

	inline static int32_t get_offset_of_targetSession2_10() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___targetSession2_10)); }
	inline List_1_t899420910 * get_targetSession2_10() const { return ___targetSession2_10; }
	inline List_1_t899420910 ** get_address_of_targetSession2_10() { return &___targetSession2_10; }
	inline void set_targetSession2_10(List_1_t899420910 * value)
	{
		___targetSession2_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetSession2_10), value);
	}

	inline static int32_t get_offset_of_positionsEyeSession2_11() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsEyeSession2_11)); }
	inline List_1_t899420910 * get_positionsEyeSession2_11() const { return ___positionsEyeSession2_11; }
	inline List_1_t899420910 ** get_address_of_positionsEyeSession2_11() { return &___positionsEyeSession2_11; }
	inline void set_positionsEyeSession2_11(List_1_t899420910 * value)
	{
		___positionsEyeSession2_11 = value;
		Il2CppCodeGenWriteBarrier((&___positionsEyeSession2_11), value);
	}

	inline static int32_t get_offset_of_positionsHeadSession2_12() { return static_cast<int32_t>(offsetof(UserDataClass_t3215840357, ___positionsHeadSession2_12)); }
	inline List_1_t899420910 * get_positionsHeadSession2_12() const { return ___positionsHeadSession2_12; }
	inline List_1_t899420910 ** get_address_of_positionsHeadSession2_12() { return &___positionsHeadSession2_12; }
	inline void set_positionsHeadSession2_12(List_1_t899420910 * value)
	{
		___positionsHeadSession2_12 = value;
		Il2CppCodeGenWriteBarrier((&___positionsHeadSession2_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATACLASS_T3215840357_H
#ifndef BOUNDARIESCACHE_T1407943419_H
#define BOUNDARIESCACHE_T1407943419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer/BoundariesCache
struct  BoundariesCache_t1407943419  : public RuntimeObject
{
public:
	// System.UInt64 MagicLeap.PlaneVisualizer/BoundariesCache::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<MagicLeap.PlaneVisualizer/PlanesCache> MagicLeap.PlaneVisualizer/BoundariesCache::<Planes>k__BackingField
	List_1_t1055101014 * ___U3CPlanesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BoundariesCache_t1407943419, ___U3CIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPlanesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoundariesCache_t1407943419, ___U3CPlanesU3Ek__BackingField_1)); }
	inline List_1_t1055101014 * get_U3CPlanesU3Ek__BackingField_1() const { return ___U3CPlanesU3Ek__BackingField_1; }
	inline List_1_t1055101014 ** get_address_of_U3CPlanesU3Ek__BackingField_1() { return &___U3CPlanesU3Ek__BackingField_1; }
	inline void set_U3CPlanesU3Ek__BackingField_1(List_1_t1055101014 * value)
	{
		___U3CPlanesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlanesU3Ek__BackingField_1), value);
	}
};

struct BoundariesCache_t1407943419_StaticFields
{
public:
	// System.Action`1<MagicLeap.PlaneVisualizer/PlanesCache> MagicLeap.PlaneVisualizer/BoundariesCache::<>f__am$cache0
	Action_1_t4050461163 * ___U3CU3Ef__amU24cache0_2;
	// System.Action`1<MagicLeap.PlaneVisualizer/PlanesCache> MagicLeap.PlaneVisualizer/BoundariesCache::<>f__am$cache1
	Action_1_t4050461163 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(BoundariesCache_t1407943419_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_1_t4050461163 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_1_t4050461163 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_1_t4050461163 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(BoundariesCache_t1407943419_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Action_1_t4050461163 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Action_1_t4050461163 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Action_1_t4050461163 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARIESCACHE_T1407943419_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUMERATOR_T1456543883_H
#define ENUMERATOR_T1456543883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPCF>
struct  Enumerator_t1456543883 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3862267302 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MLPCF_t2390192560 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1456543883, ___l_0)); }
	inline List_1_t3862267302 * get_l_0() const { return ___l_0; }
	inline List_1_t3862267302 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3862267302 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1456543883, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1456543883, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1456543883, ___current_3)); }
	inline MLPCF_t2390192560 * get_current_3() const { return ___current_3; }
	inline MLPCF_t2390192560 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MLPCF_t2390192560 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1456543883_H
#ifndef MLWORLDPLANEBOUNDARIES_T1565814570_H
#define MLWORLDPLANEBOUNDARIES_T1565814570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct  MLWorldPlaneBoundaries_t1565814570 
{
public:
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries::Id
	uint64_t ___Id_0;
	// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[] UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries::Boundaries
	MLWorldPlaneBoundaryU5BU5D_t1423265241* ___Boundaries_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundaries_t1565814570, ___Id_0)); }
	inline uint64_t get_Id_0() const { return ___Id_0; }
	inline uint64_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint64_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Boundaries_1() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundaries_t1565814570, ___Boundaries_1)); }
	inline MLWorldPlaneBoundaryU5BU5D_t1423265241* get_Boundaries_1() const { return ___Boundaries_1; }
	inline MLWorldPlaneBoundaryU5BU5D_t1423265241** get_address_of_Boundaries_1() { return &___Boundaries_1; }
	inline void set_Boundaries_1(MLWorldPlaneBoundaryU5BU5D_t1423265241* value)
	{
		___Boundaries_1 = value;
		Il2CppCodeGenWriteBarrier((&___Boundaries_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct MLWorldPlaneBoundaries_t1565814570_marshaled_pinvoke
{
	uint64_t ___Id_0;
	MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke* ___Boundaries_1;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct MLWorldPlaneBoundaries_t1565814570_marshaled_com
{
	uint64_t ___Id_0;
	MLWorldPlaneBoundary_t1115739400_marshaled_com* ___Boundaries_1;
};
#endif // MLWORLDPLANEBOUNDARIES_T1565814570_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
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
#endif // COLOR_T2555686324_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RENDERTYPE_T3902717122_H
#define RENDERTYPE_T3902717122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer/RenderType
struct  RenderType_t3902717122 
{
public:
	// System.Int32 MagicLeap.PlaneVisualizer/RenderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderType_t3902717122, ___value___1)); }
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
#endif // RENDERTYPE_T3902717122_H
#ifndef U3CDRAWBOUNDARIESU3EC__ANONSTOREY1_T573602156_H
#define U3CDRAWBOUNDARIESU3EC__ANONSTOREY1_T573602156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer/<DrawBoundaries>c__AnonStorey1
struct  U3CDrawBoundariesU3Ec__AnonStorey1_t573602156  : public RuntimeObject
{
public:
	// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries MagicLeap.PlaneVisualizer/<DrawBoundaries>c__AnonStorey1::worldBoundary
	MLWorldPlaneBoundaries_t1565814570  ___worldBoundary_0;

public:
	inline static int32_t get_offset_of_worldBoundary_0() { return static_cast<int32_t>(offsetof(U3CDrawBoundariesU3Ec__AnonStorey1_t573602156, ___worldBoundary_0)); }
	inline MLWorldPlaneBoundaries_t1565814570  get_worldBoundary_0() const { return ___worldBoundary_0; }
	inline MLWorldPlaneBoundaries_t1565814570 * get_address_of_worldBoundary_0() { return &___worldBoundary_0; }
	inline void set_worldBoundary_0(MLWorldPlaneBoundaries_t1565814570  value)
	{
		___worldBoundary_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDRAWBOUNDARIESU3EC__ANONSTOREY1_T573602156_H
#ifndef RENDERMODE_T166288221_H
#define RENDERMODE_T166288221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MeshingVisualizer/RenderMode
struct  RenderMode_t166288221 
{
public:
	// System.Int32 MagicLeap.MeshingVisualizer/RenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderMode_t166288221, ___value___1)); }
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
#endif // RENDERMODE_T166288221_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MLRESULTCODE_T2645639141_H
#define MLRESULTCODE_T2645639141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLResultCode
struct  MLResultCode_t2645639141 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLResultCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLResultCode_t2645639141, ___value___1)); }
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
#endif // MLRESULTCODE_T2645639141_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MLRESULT_T265502022_H
#define MLRESULT_T265502022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLResult
struct  MLResult_t265502022 
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLResult::_message
	String_t* ____message_1;
	// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String> UnityEngine.XR.MagicLeap.MLResult::_resultStringer
	Func_2_t563276670 * ____resultStringer_2;
	// UnityEngine.XR.MagicLeap.MLResultCode UnityEngine.XR.MagicLeap.MLResult::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__resultStringer_2() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ____resultStringer_2)); }
	inline Func_2_t563276670 * get__resultStringer_2() const { return ____resultStringer_2; }
	inline Func_2_t563276670 ** get_address_of__resultStringer_2() { return &____resultStringer_2; }
	inline void set__resultStringer_2(Func_2_t563276670 * value)
	{
		____resultStringer_2 = value;
		Il2CppCodeGenWriteBarrier((&____resultStringer_2), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ___U3CCodeU3Ek__BackingField_3)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_3() const { return ___U3CCodeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_3() { return &___U3CCodeU3Ek__BackingField_3; }
	inline void set_U3CCodeU3Ek__BackingField_3(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_3 = value;
	}
};

struct MLResult_t265502022_StaticFields
{
public:
	// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLResult::ResultOk
	MLResult_t265502022  ___ResultOk_0;

public:
	inline static int32_t get_offset_of_ResultOk_0() { return static_cast<int32_t>(offsetof(MLResult_t265502022_StaticFields, ___ResultOk_0)); }
	inline MLResult_t265502022  get_ResultOk_0() const { return ___ResultOk_0; }
	inline MLResult_t265502022 * get_address_of_ResultOk_0() { return &___ResultOk_0; }
	inline void set_ResultOk_0(MLResult_t265502022  value)
	{
		___ResultOk_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t265502022_marshaled_pinvoke
{
	char* ____message_1;
	Il2CppMethodPointer ____resultStringer_2;
	int32_t ___U3CCodeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t265502022_marshaled_com
{
	Il2CppChar* ____message_1;
	Il2CppMethodPointer ____resultStringer_2;
	int32_t ___U3CCodeU3Ek__BackingField_3;
};
#endif // MLRESULT_T265502022_H
#ifndef U3CFINDALLPCFSU3EC__ITERATOR0_T1197852960_H
#define U3CFINDALLPCFSU3EC__ITERATOR0_T1197852960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0
struct  U3CFindAllPCFsU3Ec__Iterator0_t1197852960  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPCF> MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::<allPCFs>__1
	List_1_t3862267302 * ___U3CallPCFsU3E__1_0;
	// UnityEngine.XR.MagicLeap.MLResult MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::<result>__1
	MLResult_t265502022  ___U3CresultU3E__1_1;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPCF> MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::$locvar0
	Enumerator_t1456543883  ___U24locvar0_2;
	// MagicLeap.PCFVisualizer MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::$this
	PCFVisualizer_t2975549815 * ___U24this_3;
	// System.Object MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 MagicLeap.PCFVisualizer/<FindAllPCFs>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CallPCFsU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U3CallPCFsU3E__1_0)); }
	inline List_1_t3862267302 * get_U3CallPCFsU3E__1_0() const { return ___U3CallPCFsU3E__1_0; }
	inline List_1_t3862267302 ** get_address_of_U3CallPCFsU3E__1_0() { return &___U3CallPCFsU3E__1_0; }
	inline void set_U3CallPCFsU3E__1_0(List_1_t3862267302 * value)
	{
		___U3CallPCFsU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CallPCFsU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U3CresultU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U3CresultU3E__1_1)); }
	inline MLResult_t265502022  get_U3CresultU3E__1_1() const { return ___U3CresultU3E__1_1; }
	inline MLResult_t265502022 * get_address_of_U3CresultU3E__1_1() { return &___U3CresultU3E__1_1; }
	inline void set_U3CresultU3E__1_1(MLResult_t265502022  value)
	{
		___U3CresultU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U24locvar0_2)); }
	inline Enumerator_t1456543883  get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline Enumerator_t1456543883 * get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(Enumerator_t1456543883  value)
	{
		___U24locvar0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U24this_3)); }
	inline PCFVisualizer_t2975549815 * get_U24this_3() const { return ___U24this_3; }
	inline PCFVisualizer_t2975549815 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(PCFVisualizer_t2975549815 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CFindAllPCFsU3Ec__Iterator0_t1197852960, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFINDALLPCFSU3EC__ITERATOR0_T1197852960_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef TARGETTRACKING_T2065669340_H
#define TARGETTRACKING_T2065669340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetTracking
struct  TargetTracking_t2065669340  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TargetTracking::Camera
	GameObject_t1113636619 * ___Camera_2;
	// UnityEngine.Material TargetTracking::NonFocusedMaterial
	Material_t340375123 * ___NonFocusedMaterial_3;
	// UnityEngine.GameObject TargetTracking::TargetPatternSphere
	GameObject_t1113636619 * ___TargetPatternSphere_4;
	// UnityEngine.Transform TargetTracking::CustomPivotPointCube
	Transform_t3600365921 * ___CustomPivotPointCube_5;
	// UnityEngine.Vector3[] TargetTracking::positionsTarget
	Vector3U5BU5D_t1718750761* ___positionsTarget_6;
	// UnityEngine.LineRenderer TargetTracking::lineRendererTarget
	LineRenderer_t3154350270 * ___lineRendererTarget_7;
	// System.Int32 TargetTracking::coordNumber
	int32_t ___coordNumber_8;
	// UnityEngine.Vector3 TargetTracking::newOrgio
	Vector3_t3722313464  ___newOrgio_9;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___Camera_2)); }
	inline GameObject_t1113636619 * get_Camera_2() const { return ___Camera_2; }
	inline GameObject_t1113636619 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(GameObject_t1113636619 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_2), value);
	}

	inline static int32_t get_offset_of_NonFocusedMaterial_3() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___NonFocusedMaterial_3)); }
	inline Material_t340375123 * get_NonFocusedMaterial_3() const { return ___NonFocusedMaterial_3; }
	inline Material_t340375123 ** get_address_of_NonFocusedMaterial_3() { return &___NonFocusedMaterial_3; }
	inline void set_NonFocusedMaterial_3(Material_t340375123 * value)
	{
		___NonFocusedMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&___NonFocusedMaterial_3), value);
	}

	inline static int32_t get_offset_of_TargetPatternSphere_4() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___TargetPatternSphere_4)); }
	inline GameObject_t1113636619 * get_TargetPatternSphere_4() const { return ___TargetPatternSphere_4; }
	inline GameObject_t1113636619 ** get_address_of_TargetPatternSphere_4() { return &___TargetPatternSphere_4; }
	inline void set_TargetPatternSphere_4(GameObject_t1113636619 * value)
	{
		___TargetPatternSphere_4 = value;
		Il2CppCodeGenWriteBarrier((&___TargetPatternSphere_4), value);
	}

	inline static int32_t get_offset_of_CustomPivotPointCube_5() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___CustomPivotPointCube_5)); }
	inline Transform_t3600365921 * get_CustomPivotPointCube_5() const { return ___CustomPivotPointCube_5; }
	inline Transform_t3600365921 ** get_address_of_CustomPivotPointCube_5() { return &___CustomPivotPointCube_5; }
	inline void set_CustomPivotPointCube_5(Transform_t3600365921 * value)
	{
		___CustomPivotPointCube_5 = value;
		Il2CppCodeGenWriteBarrier((&___CustomPivotPointCube_5), value);
	}

	inline static int32_t get_offset_of_positionsTarget_6() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___positionsTarget_6)); }
	inline Vector3U5BU5D_t1718750761* get_positionsTarget_6() const { return ___positionsTarget_6; }
	inline Vector3U5BU5D_t1718750761** get_address_of_positionsTarget_6() { return &___positionsTarget_6; }
	inline void set_positionsTarget_6(Vector3U5BU5D_t1718750761* value)
	{
		___positionsTarget_6 = value;
		Il2CppCodeGenWriteBarrier((&___positionsTarget_6), value);
	}

	inline static int32_t get_offset_of_lineRendererTarget_7() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___lineRendererTarget_7)); }
	inline LineRenderer_t3154350270 * get_lineRendererTarget_7() const { return ___lineRendererTarget_7; }
	inline LineRenderer_t3154350270 ** get_address_of_lineRendererTarget_7() { return &___lineRendererTarget_7; }
	inline void set_lineRendererTarget_7(LineRenderer_t3154350270 * value)
	{
		___lineRendererTarget_7 = value;
		Il2CppCodeGenWriteBarrier((&___lineRendererTarget_7), value);
	}

	inline static int32_t get_offset_of_coordNumber_8() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___coordNumber_8)); }
	inline int32_t get_coordNumber_8() const { return ___coordNumber_8; }
	inline int32_t* get_address_of_coordNumber_8() { return &___coordNumber_8; }
	inline void set_coordNumber_8(int32_t value)
	{
		___coordNumber_8 = value;
	}

	inline static int32_t get_offset_of_newOrgio_9() { return static_cast<int32_t>(offsetof(TargetTracking_t2065669340, ___newOrgio_9)); }
	inline Vector3_t3722313464  get_newOrgio_9() const { return ___newOrgio_9; }
	inline Vector3_t3722313464 * get_address_of_newOrgio_9() { return &___newOrgio_9; }
	inline void set_newOrgio_9(Vector3_t3722313464  value)
	{
		___newOrgio_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETTRACKING_T2065669340_H
#ifndef NEWFIREBASESCRIPT_T3275445975_H
#define NEWFIREBASESCRIPT_T3275445975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewFirebaseScript
struct  NewFirebaseScript_t3275445975  : public MonoBehaviour_t3962482529
{
public:
	// UserDataClass NewFirebaseScript::user
	UserDataClass_t3215840357 * ___user_2;
	// UnityEngine.GameObject NewFirebaseScript::Camera
	GameObject_t1113636619 * ___Camera_3;
	// UnityEngine.Transform NewFirebaseScript::CustomPivotPointCube
	Transform_t3600365921 * ___CustomPivotPointCube_4;
	// UnityEngine.GameObject NewFirebaseScript::EntireScene
	GameObject_t1113636619 * ___EntireScene_5;
	// System.Int32 NewFirebaseScript::CurrentSessionLocal
	int32_t ___CurrentSessionLocal_6;
	// UnityEngine.GameObject NewFirebaseScript::TargetPatternSphere
	GameObject_t1113636619 * ___TargetPatternSphere_7;
	// UnityEngine.Vector3 NewFirebaseScript::newOrgio
	Vector3_t3722313464  ___newOrgio_8;
	// System.String NewFirebaseScript::url
	String_t* ___url_9;

public:
	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___user_2)); }
	inline UserDataClass_t3215840357 * get_user_2() const { return ___user_2; }
	inline UserDataClass_t3215840357 ** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(UserDataClass_t3215840357 * value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_Camera_3() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___Camera_3)); }
	inline GameObject_t1113636619 * get_Camera_3() const { return ___Camera_3; }
	inline GameObject_t1113636619 ** get_address_of_Camera_3() { return &___Camera_3; }
	inline void set_Camera_3(GameObject_t1113636619 * value)
	{
		___Camera_3 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_3), value);
	}

	inline static int32_t get_offset_of_CustomPivotPointCube_4() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___CustomPivotPointCube_4)); }
	inline Transform_t3600365921 * get_CustomPivotPointCube_4() const { return ___CustomPivotPointCube_4; }
	inline Transform_t3600365921 ** get_address_of_CustomPivotPointCube_4() { return &___CustomPivotPointCube_4; }
	inline void set_CustomPivotPointCube_4(Transform_t3600365921 * value)
	{
		___CustomPivotPointCube_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomPivotPointCube_4), value);
	}

	inline static int32_t get_offset_of_EntireScene_5() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___EntireScene_5)); }
	inline GameObject_t1113636619 * get_EntireScene_5() const { return ___EntireScene_5; }
	inline GameObject_t1113636619 ** get_address_of_EntireScene_5() { return &___EntireScene_5; }
	inline void set_EntireScene_5(GameObject_t1113636619 * value)
	{
		___EntireScene_5 = value;
		Il2CppCodeGenWriteBarrier((&___EntireScene_5), value);
	}

	inline static int32_t get_offset_of_CurrentSessionLocal_6() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___CurrentSessionLocal_6)); }
	inline int32_t get_CurrentSessionLocal_6() const { return ___CurrentSessionLocal_6; }
	inline int32_t* get_address_of_CurrentSessionLocal_6() { return &___CurrentSessionLocal_6; }
	inline void set_CurrentSessionLocal_6(int32_t value)
	{
		___CurrentSessionLocal_6 = value;
	}

	inline static int32_t get_offset_of_TargetPatternSphere_7() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___TargetPatternSphere_7)); }
	inline GameObject_t1113636619 * get_TargetPatternSphere_7() const { return ___TargetPatternSphere_7; }
	inline GameObject_t1113636619 ** get_address_of_TargetPatternSphere_7() { return &___TargetPatternSphere_7; }
	inline void set_TargetPatternSphere_7(GameObject_t1113636619 * value)
	{
		___TargetPatternSphere_7 = value;
		Il2CppCodeGenWriteBarrier((&___TargetPatternSphere_7), value);
	}

	inline static int32_t get_offset_of_newOrgio_8() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___newOrgio_8)); }
	inline Vector3_t3722313464  get_newOrgio_8() const { return ___newOrgio_8; }
	inline Vector3_t3722313464 * get_address_of_newOrgio_8() { return &___newOrgio_8; }
	inline void set_newOrgio_8(Vector3_t3722313464  value)
	{
		___newOrgio_8 = value;
	}

	inline static int32_t get_offset_of_url_9() { return static_cast<int32_t>(offsetof(NewFirebaseScript_t3275445975, ___url_9)); }
	inline String_t* get_url_9() const { return ___url_9; }
	inline String_t** get_address_of_url_9() { return &___url_9; }
	inline void set_url_9(String_t* value)
	{
		___url_9 = value;
		Il2CppCodeGenWriteBarrier((&___url_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWFIREBASESCRIPT_T3275445975_H
#ifndef SETBIGSPHEREPOSITION_T451636011_H
#define SETBIGSPHEREPOSITION_T451636011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetBigSpherePosition
struct  SetBigSpherePosition_t451636011  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SetBigSpherePosition::Camera
	GameObject_t1113636619 * ___Camera_2;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(SetBigSpherePosition_t451636011, ___Camera_2)); }
	inline GameObject_t1113636619 * get_Camera_2() const { return ___Camera_2; }
	inline GameObject_t1113636619 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(GameObject_t1113636619 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETBIGSPHEREPOSITION_T451636011_H
#ifndef MATERIALCONTROLLER_T3979786588_H
#define MATERIALCONTROLLER_T3979786588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MaterialController
struct  MaterialController_t3979786588  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material MagicLeap.MaterialController::_material
	Material_t340375123 * ____material_2;
	// UnityEngine.UI.Text MagicLeap.MaterialController::_statusText
	Text_t1901882714 * ____statusText_3;
	// System.String MagicLeap.MaterialController::_textOnView
	String_t* ____textOnView_4;

public:
	inline static int32_t get_offset_of__material_2() { return static_cast<int32_t>(offsetof(MaterialController_t3979786588, ____material_2)); }
	inline Material_t340375123 * get__material_2() const { return ____material_2; }
	inline Material_t340375123 ** get_address_of__material_2() { return &____material_2; }
	inline void set__material_2(Material_t340375123 * value)
	{
		____material_2 = value;
		Il2CppCodeGenWriteBarrier((&____material_2), value);
	}

	inline static int32_t get_offset_of__statusText_3() { return static_cast<int32_t>(offsetof(MaterialController_t3979786588, ____statusText_3)); }
	inline Text_t1901882714 * get__statusText_3() const { return ____statusText_3; }
	inline Text_t1901882714 ** get_address_of__statusText_3() { return &____statusText_3; }
	inline void set__statusText_3(Text_t1901882714 * value)
	{
		____statusText_3 = value;
		Il2CppCodeGenWriteBarrier((&____statusText_3), value);
	}

	inline static int32_t get_offset_of__textOnView_4() { return static_cast<int32_t>(offsetof(MaterialController_t3979786588, ____textOnView_4)); }
	inline String_t* get__textOnView_4() const { return ____textOnView_4; }
	inline String_t** get_address_of__textOnView_4() { return &____textOnView_4; }
	inline void set__textOnView_4(String_t* value)
	{
		____textOnView_4 = value;
		Il2CppCodeGenWriteBarrier((&____textOnView_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALCONTROLLER_T3979786588_H
#ifndef MESHINGVISUALIZER_T2825983296_H
#define MESHINGVISUALIZER_T2825983296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MeshingVisualizer
struct  MeshingVisualizer_t2825983296  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.MagicLeap.MLSpatialMapper MagicLeap.MeshingVisualizer::_mlSpatialMapper
	MLSpatialMapper_t3203873551 * ____mlSpatialMapper_2;
	// UnityEngine.Material MagicLeap.MeshingVisualizer::_occlusionMaterial
	Material_t340375123 * ____occlusionMaterial_3;
	// UnityEngine.Material MagicLeap.MeshingVisualizer::_wireframeMaterial
	Material_t340375123 * ____wireframeMaterial_4;
	// UnityEngine.Material MagicLeap.MeshingVisualizer::_pointCloudMaterial
	Material_t340375123 * ____pointCloudMaterial_5;
	// MagicLeap.MeshingVisualizer/RenderMode MagicLeap.MeshingVisualizer::_renderMode
	int32_t ____renderMode_6;

public:
	inline static int32_t get_offset_of__mlSpatialMapper_2() { return static_cast<int32_t>(offsetof(MeshingVisualizer_t2825983296, ____mlSpatialMapper_2)); }
	inline MLSpatialMapper_t3203873551 * get__mlSpatialMapper_2() const { return ____mlSpatialMapper_2; }
	inline MLSpatialMapper_t3203873551 ** get_address_of__mlSpatialMapper_2() { return &____mlSpatialMapper_2; }
	inline void set__mlSpatialMapper_2(MLSpatialMapper_t3203873551 * value)
	{
		____mlSpatialMapper_2 = value;
		Il2CppCodeGenWriteBarrier((&____mlSpatialMapper_2), value);
	}

	inline static int32_t get_offset_of__occlusionMaterial_3() { return static_cast<int32_t>(offsetof(MeshingVisualizer_t2825983296, ____occlusionMaterial_3)); }
	inline Material_t340375123 * get__occlusionMaterial_3() const { return ____occlusionMaterial_3; }
	inline Material_t340375123 ** get_address_of__occlusionMaterial_3() { return &____occlusionMaterial_3; }
	inline void set__occlusionMaterial_3(Material_t340375123 * value)
	{
		____occlusionMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&____occlusionMaterial_3), value);
	}

	inline static int32_t get_offset_of__wireframeMaterial_4() { return static_cast<int32_t>(offsetof(MeshingVisualizer_t2825983296, ____wireframeMaterial_4)); }
	inline Material_t340375123 * get__wireframeMaterial_4() const { return ____wireframeMaterial_4; }
	inline Material_t340375123 ** get_address_of__wireframeMaterial_4() { return &____wireframeMaterial_4; }
	inline void set__wireframeMaterial_4(Material_t340375123 * value)
	{
		____wireframeMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&____wireframeMaterial_4), value);
	}

	inline static int32_t get_offset_of__pointCloudMaterial_5() { return static_cast<int32_t>(offsetof(MeshingVisualizer_t2825983296, ____pointCloudMaterial_5)); }
	inline Material_t340375123 * get__pointCloudMaterial_5() const { return ____pointCloudMaterial_5; }
	inline Material_t340375123 ** get_address_of__pointCloudMaterial_5() { return &____pointCloudMaterial_5; }
	inline void set__pointCloudMaterial_5(Material_t340375123 * value)
	{
		____pointCloudMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&____pointCloudMaterial_5), value);
	}

	inline static int32_t get_offset_of__renderMode_6() { return static_cast<int32_t>(offsetof(MeshingVisualizer_t2825983296, ____renderMode_6)); }
	inline int32_t get__renderMode_6() const { return ____renderMode_6; }
	inline int32_t* get_address_of__renderMode_6() { return &____renderMode_6; }
	inline void set__renderMode_6(int32_t value)
	{
		____renderMode_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHINGVISUALIZER_T2825983296_H
#ifndef PCFSTATUSTEXT_T1346358685_H
#define PCFSTATUSTEXT_T1346358685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PCFStatusText
struct  PCFStatusText_t1346358685  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh MagicLeap.PCFStatusText::_statusText
	TextMesh_t1536577757 * ____statusText_2;
	// UnityEngine.TextMesh MagicLeap.PCFStatusText::_nameText
	TextMesh_t1536577757 * ____nameText_3;
	// UnityEngine.XR.MagicLeap.MLPCF MagicLeap.PCFStatusText::_pcf
	MLPCF_t2390192560 * ____pcf_4;

public:
	inline static int32_t get_offset_of__statusText_2() { return static_cast<int32_t>(offsetof(PCFStatusText_t1346358685, ____statusText_2)); }
	inline TextMesh_t1536577757 * get__statusText_2() const { return ____statusText_2; }
	inline TextMesh_t1536577757 ** get_address_of__statusText_2() { return &____statusText_2; }
	inline void set__statusText_2(TextMesh_t1536577757 * value)
	{
		____statusText_2 = value;
		Il2CppCodeGenWriteBarrier((&____statusText_2), value);
	}

	inline static int32_t get_offset_of__nameText_3() { return static_cast<int32_t>(offsetof(PCFStatusText_t1346358685, ____nameText_3)); }
	inline TextMesh_t1536577757 * get__nameText_3() const { return ____nameText_3; }
	inline TextMesh_t1536577757 ** get_address_of__nameText_3() { return &____nameText_3; }
	inline void set__nameText_3(TextMesh_t1536577757 * value)
	{
		____nameText_3 = value;
		Il2CppCodeGenWriteBarrier((&____nameText_3), value);
	}

	inline static int32_t get_offset_of__pcf_4() { return static_cast<int32_t>(offsetof(PCFStatusText_t1346358685, ____pcf_4)); }
	inline MLPCF_t2390192560 * get__pcf_4() const { return ____pcf_4; }
	inline MLPCF_t2390192560 ** get_address_of__pcf_4() { return &____pcf_4; }
	inline void set__pcf_4(MLPCF_t2390192560 * value)
	{
		____pcf_4 = value;
		Il2CppCodeGenWriteBarrier((&____pcf_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCFSTATUSTEXT_T1346358685_H
#ifndef PCFVISUALIZER_T2975549815_H
#define PCFVISUALIZER_T2975549815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PCFVisualizer
struct  PCFVisualizer_t2975549815  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MagicLeap.PCFVisualizer::_prefab
	GameObject_t1113636619 * ____prefab_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MagicLeap.PCFVisualizer::_pcfObjs
	List_1_t2585711361 * ____pcfObjs_3;
	// UnityEngine.UI.Text MagicLeap.PCFVisualizer::_pcfCountText
	Text_t1901882714 * ____pcfCountText_4;
	// System.UInt32 MagicLeap.PCFVisualizer::_pcfCount
	uint32_t ____pcfCount_5;
	// System.Int32 MagicLeap.PCFVisualizer::_ongoingQueriesCount
	int32_t ____ongoingQueriesCount_7;
	// System.Collections.IEnumerator MagicLeap.PCFVisualizer::_findAllPCFs
	RuntimeObject* ____findAllPCFs_8;

public:
	inline static int32_t get_offset_of__prefab_2() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____prefab_2)); }
	inline GameObject_t1113636619 * get__prefab_2() const { return ____prefab_2; }
	inline GameObject_t1113636619 ** get_address_of__prefab_2() { return &____prefab_2; }
	inline void set__prefab_2(GameObject_t1113636619 * value)
	{
		____prefab_2 = value;
		Il2CppCodeGenWriteBarrier((&____prefab_2), value);
	}

	inline static int32_t get_offset_of__pcfObjs_3() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____pcfObjs_3)); }
	inline List_1_t2585711361 * get__pcfObjs_3() const { return ____pcfObjs_3; }
	inline List_1_t2585711361 ** get_address_of__pcfObjs_3() { return &____pcfObjs_3; }
	inline void set__pcfObjs_3(List_1_t2585711361 * value)
	{
		____pcfObjs_3 = value;
		Il2CppCodeGenWriteBarrier((&____pcfObjs_3), value);
	}

	inline static int32_t get_offset_of__pcfCountText_4() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____pcfCountText_4)); }
	inline Text_t1901882714 * get__pcfCountText_4() const { return ____pcfCountText_4; }
	inline Text_t1901882714 ** get_address_of__pcfCountText_4() { return &____pcfCountText_4; }
	inline void set__pcfCountText_4(Text_t1901882714 * value)
	{
		____pcfCountText_4 = value;
		Il2CppCodeGenWriteBarrier((&____pcfCountText_4), value);
	}

	inline static int32_t get_offset_of__pcfCount_5() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____pcfCount_5)); }
	inline uint32_t get__pcfCount_5() const { return ____pcfCount_5; }
	inline uint32_t* get_address_of__pcfCount_5() { return &____pcfCount_5; }
	inline void set__pcfCount_5(uint32_t value)
	{
		____pcfCount_5 = value;
	}

	inline static int32_t get_offset_of__ongoingQueriesCount_7() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____ongoingQueriesCount_7)); }
	inline int32_t get__ongoingQueriesCount_7() const { return ____ongoingQueriesCount_7; }
	inline int32_t* get_address_of__ongoingQueriesCount_7() { return &____ongoingQueriesCount_7; }
	inline void set__ongoingQueriesCount_7(int32_t value)
	{
		____ongoingQueriesCount_7 = value;
	}

	inline static int32_t get_offset_of__findAllPCFs_8() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815, ____findAllPCFs_8)); }
	inline RuntimeObject* get__findAllPCFs_8() const { return ____findAllPCFs_8; }
	inline RuntimeObject** get_address_of__findAllPCFs_8() { return &____findAllPCFs_8; }
	inline void set__findAllPCFs_8(RuntimeObject* value)
	{
		____findAllPCFs_8 = value;
		Il2CppCodeGenWriteBarrier((&____findAllPCFs_8), value);
	}
};

struct PCFVisualizer_t2975549815_StaticFields
{
public:
	// System.Boolean MagicLeap.PCFVisualizer::<IsDebugMode>k__BackingField
	bool ___U3CIsDebugModeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CIsDebugModeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PCFVisualizer_t2975549815_StaticFields, ___U3CIsDebugModeU3Ek__BackingField_9)); }
	inline bool get_U3CIsDebugModeU3Ek__BackingField_9() const { return ___U3CIsDebugModeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsDebugModeU3Ek__BackingField_9() { return &___U3CIsDebugModeU3Ek__BackingField_9; }
	inline void set_U3CIsDebugModeU3Ek__BackingField_9(bool value)
	{
		___U3CIsDebugModeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCFVISUALIZER_T2975549815_H
#ifndef STARTAPPLICATION_T2067025336_H
#define STARTAPPLICATION_T2067025336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartApplication
struct  StartApplication_t2067025336  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject StartApplication::Camera
	GameObject_t1113636619 * ___Camera_2;
	// UnityEngine.Material StartApplication::FocusedMaterial
	Material_t340375123 * ___FocusedMaterial_3;
	// UnityEngine.Material StartApplication::NonFocusedMaterial
	Material_t340375123 * ___NonFocusedMaterial_4;
	// UnityEngine.Material StartApplication::lineColorEyes
	Material_t340375123 * ___lineColorEyes_5;
	// UnityEngine.Material StartApplication::lineColorHead
	Material_t340375123 * ___lineColorHead_6;
	// UnityEngine.Vector3 StartApplication::_headingEyes
	Vector3_t3722313464  ____headingEyes_7;
	// UnityEngine.Vector3 StartApplication::_headingHead
	Vector3_t3722313464  ____headingHead_8;
	// UnityEngine.MeshRenderer StartApplication::StartApplicationSphere
	MeshRenderer_t587009260 * ___StartApplicationSphere_9;
	// UnityEngine.GameObject StartApplication::child
	GameObject_t1113636619 * ___child_10;
	// UnityEngine.GameObject StartApplication::Eyes
	GameObject_t1113636619 * ___Eyes_11;
	// UnityEngine.GameObject StartApplication::Head
	GameObject_t1113636619 * ___Head_12;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___Camera_2)); }
	inline GameObject_t1113636619 * get_Camera_2() const { return ___Camera_2; }
	inline GameObject_t1113636619 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(GameObject_t1113636619 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_2), value);
	}

	inline static int32_t get_offset_of_FocusedMaterial_3() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___FocusedMaterial_3)); }
	inline Material_t340375123 * get_FocusedMaterial_3() const { return ___FocusedMaterial_3; }
	inline Material_t340375123 ** get_address_of_FocusedMaterial_3() { return &___FocusedMaterial_3; }
	inline void set_FocusedMaterial_3(Material_t340375123 * value)
	{
		___FocusedMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&___FocusedMaterial_3), value);
	}

	inline static int32_t get_offset_of_NonFocusedMaterial_4() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___NonFocusedMaterial_4)); }
	inline Material_t340375123 * get_NonFocusedMaterial_4() const { return ___NonFocusedMaterial_4; }
	inline Material_t340375123 ** get_address_of_NonFocusedMaterial_4() { return &___NonFocusedMaterial_4; }
	inline void set_NonFocusedMaterial_4(Material_t340375123 * value)
	{
		___NonFocusedMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___NonFocusedMaterial_4), value);
	}

	inline static int32_t get_offset_of_lineColorEyes_5() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___lineColorEyes_5)); }
	inline Material_t340375123 * get_lineColorEyes_5() const { return ___lineColorEyes_5; }
	inline Material_t340375123 ** get_address_of_lineColorEyes_5() { return &___lineColorEyes_5; }
	inline void set_lineColorEyes_5(Material_t340375123 * value)
	{
		___lineColorEyes_5 = value;
		Il2CppCodeGenWriteBarrier((&___lineColorEyes_5), value);
	}

	inline static int32_t get_offset_of_lineColorHead_6() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___lineColorHead_6)); }
	inline Material_t340375123 * get_lineColorHead_6() const { return ___lineColorHead_6; }
	inline Material_t340375123 ** get_address_of_lineColorHead_6() { return &___lineColorHead_6; }
	inline void set_lineColorHead_6(Material_t340375123 * value)
	{
		___lineColorHead_6 = value;
		Il2CppCodeGenWriteBarrier((&___lineColorHead_6), value);
	}

	inline static int32_t get_offset_of__headingEyes_7() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ____headingEyes_7)); }
	inline Vector3_t3722313464  get__headingEyes_7() const { return ____headingEyes_7; }
	inline Vector3_t3722313464 * get_address_of__headingEyes_7() { return &____headingEyes_7; }
	inline void set__headingEyes_7(Vector3_t3722313464  value)
	{
		____headingEyes_7 = value;
	}

	inline static int32_t get_offset_of__headingHead_8() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ____headingHead_8)); }
	inline Vector3_t3722313464  get__headingHead_8() const { return ____headingHead_8; }
	inline Vector3_t3722313464 * get_address_of__headingHead_8() { return &____headingHead_8; }
	inline void set__headingHead_8(Vector3_t3722313464  value)
	{
		____headingHead_8 = value;
	}

	inline static int32_t get_offset_of_StartApplicationSphere_9() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___StartApplicationSphere_9)); }
	inline MeshRenderer_t587009260 * get_StartApplicationSphere_9() const { return ___StartApplicationSphere_9; }
	inline MeshRenderer_t587009260 ** get_address_of_StartApplicationSphere_9() { return &___StartApplicationSphere_9; }
	inline void set_StartApplicationSphere_9(MeshRenderer_t587009260 * value)
	{
		___StartApplicationSphere_9 = value;
		Il2CppCodeGenWriteBarrier((&___StartApplicationSphere_9), value);
	}

	inline static int32_t get_offset_of_child_10() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___child_10)); }
	inline GameObject_t1113636619 * get_child_10() const { return ___child_10; }
	inline GameObject_t1113636619 ** get_address_of_child_10() { return &___child_10; }
	inline void set_child_10(GameObject_t1113636619 * value)
	{
		___child_10 = value;
		Il2CppCodeGenWriteBarrier((&___child_10), value);
	}

	inline static int32_t get_offset_of_Eyes_11() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___Eyes_11)); }
	inline GameObject_t1113636619 * get_Eyes_11() const { return ___Eyes_11; }
	inline GameObject_t1113636619 ** get_address_of_Eyes_11() { return &___Eyes_11; }
	inline void set_Eyes_11(GameObject_t1113636619 * value)
	{
		___Eyes_11 = value;
		Il2CppCodeGenWriteBarrier((&___Eyes_11), value);
	}

	inline static int32_t get_offset_of_Head_12() { return static_cast<int32_t>(offsetof(StartApplication_t2067025336, ___Head_12)); }
	inline GameObject_t1113636619 * get_Head_12() const { return ___Head_12; }
	inline GameObject_t1113636619 ** get_address_of_Head_12() { return &___Head_12; }
	inline void set_Head_12(GameObject_t1113636619 * value)
	{
		___Head_12 = value;
		Il2CppCodeGenWriteBarrier((&___Head_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTAPPLICATION_T2067025336_H
#ifndef PLACEMENTVISUALIZER_T1781617143_H
#define PLACEMENTVISUALIZER_T1781617143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlacementVisualizer
struct  PlacementVisualizer_t1781617143  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MagicLeap.PlacementVisualizer::_willFitVolume
	GameObject_t1113636619 * ____willFitVolume_2;
	// UnityEngine.GameObject MagicLeap.PlacementVisualizer::_willNotFitVolume
	GameObject_t1113636619 * ____willNotFitVolume_3;
	// UnityEngine.XR.MagicLeap.Placement MagicLeap.PlacementVisualizer::_placement
	Placement_t3357082531 * ____placement_4;

public:
	inline static int32_t get_offset_of__willFitVolume_2() { return static_cast<int32_t>(offsetof(PlacementVisualizer_t1781617143, ____willFitVolume_2)); }
	inline GameObject_t1113636619 * get__willFitVolume_2() const { return ____willFitVolume_2; }
	inline GameObject_t1113636619 ** get_address_of__willFitVolume_2() { return &____willFitVolume_2; }
	inline void set__willFitVolume_2(GameObject_t1113636619 * value)
	{
		____willFitVolume_2 = value;
		Il2CppCodeGenWriteBarrier((&____willFitVolume_2), value);
	}

	inline static int32_t get_offset_of__willNotFitVolume_3() { return static_cast<int32_t>(offsetof(PlacementVisualizer_t1781617143, ____willNotFitVolume_3)); }
	inline GameObject_t1113636619 * get__willNotFitVolume_3() const { return ____willNotFitVolume_3; }
	inline GameObject_t1113636619 ** get_address_of__willNotFitVolume_3() { return &____willNotFitVolume_3; }
	inline void set__willNotFitVolume_3(GameObject_t1113636619 * value)
	{
		____willNotFitVolume_3 = value;
		Il2CppCodeGenWriteBarrier((&____willNotFitVolume_3), value);
	}

	inline static int32_t get_offset_of__placement_4() { return static_cast<int32_t>(offsetof(PlacementVisualizer_t1781617143, ____placement_4)); }
	inline Placement_t3357082531 * get__placement_4() const { return ____placement_4; }
	inline Placement_t3357082531 ** get_address_of__placement_4() { return &____placement_4; }
	inline void set__placement_4(Placement_t3357082531 * value)
	{
		____placement_4 = value;
		Il2CppCodeGenWriteBarrier((&____placement_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEMENTVISUALIZER_T1781617143_H
#ifndef PERSISTENTBALL_T336984162_H
#define PERSISTENTBALL_T336984162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PersistentBall
struct  PersistentBall_t336984162  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.MagicLeap.ControllerConnectionHandler MagicLeap.PersistentBall::_controllerConnectionHandler
	ControllerConnectionHandler_t4044881542 * ____controllerConnectionHandler_2;
	// System.Action`1<UnityEngine.GameObject> MagicLeap.PersistentBall::OnContentDestroy
	Action_1_t1286104214 * ___OnContentDestroy_3;

public:
	inline static int32_t get_offset_of__controllerConnectionHandler_2() { return static_cast<int32_t>(offsetof(PersistentBall_t336984162, ____controllerConnectionHandler_2)); }
	inline ControllerConnectionHandler_t4044881542 * get__controllerConnectionHandler_2() const { return ____controllerConnectionHandler_2; }
	inline ControllerConnectionHandler_t4044881542 ** get_address_of__controllerConnectionHandler_2() { return &____controllerConnectionHandler_2; }
	inline void set__controllerConnectionHandler_2(ControllerConnectionHandler_t4044881542 * value)
	{
		____controllerConnectionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&____controllerConnectionHandler_2), value);
	}

	inline static int32_t get_offset_of_OnContentDestroy_3() { return static_cast<int32_t>(offsetof(PersistentBall_t336984162, ___OnContentDestroy_3)); }
	inline Action_1_t1286104214 * get_OnContentDestroy_3() const { return ___OnContentDestroy_3; }
	inline Action_1_t1286104214 ** get_address_of_OnContentDestroy_3() { return &___OnContentDestroy_3; }
	inline void set_OnContentDestroy_3(Action_1_t1286104214 * value)
	{
		___OnContentDestroy_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnContentDestroy_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTBALL_T336984162_H
#ifndef RAYCASTVISUALIZER_T4231285072_H
#define RAYCASTVISUALIZER_T4231285072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.RaycastVisualizer
struct  RaycastVisualizer_t4231285072  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.MagicLeap.BaseRaycast MagicLeap.RaycastVisualizer::_raycast
	BaseRaycast_t2888167065 * ____raycast_2;
	// System.Single MagicLeap.RaycastVisualizer::_defaultDistance
	float ____defaultDistance_3;
	// System.Boolean MagicLeap.RaycastVisualizer::_scaleWhenClose
	bool ____scaleWhenClose_4;
	// UnityEngine.Color MagicLeap.RaycastVisualizer::_color
	Color_t2555686324  ____color_5;
	// System.Boolean MagicLeap.RaycastVisualizer::_hit
	bool ____hit_6;
	// UnityEngine.Renderer MagicLeap.RaycastVisualizer::_render
	Renderer_t2627027031 * ____render_7;

public:
	inline static int32_t get_offset_of__raycast_2() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____raycast_2)); }
	inline BaseRaycast_t2888167065 * get__raycast_2() const { return ____raycast_2; }
	inline BaseRaycast_t2888167065 ** get_address_of__raycast_2() { return &____raycast_2; }
	inline void set__raycast_2(BaseRaycast_t2888167065 * value)
	{
		____raycast_2 = value;
		Il2CppCodeGenWriteBarrier((&____raycast_2), value);
	}

	inline static int32_t get_offset_of__defaultDistance_3() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____defaultDistance_3)); }
	inline float get__defaultDistance_3() const { return ____defaultDistance_3; }
	inline float* get_address_of__defaultDistance_3() { return &____defaultDistance_3; }
	inline void set__defaultDistance_3(float value)
	{
		____defaultDistance_3 = value;
	}

	inline static int32_t get_offset_of__scaleWhenClose_4() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____scaleWhenClose_4)); }
	inline bool get__scaleWhenClose_4() const { return ____scaleWhenClose_4; }
	inline bool* get_address_of__scaleWhenClose_4() { return &____scaleWhenClose_4; }
	inline void set__scaleWhenClose_4(bool value)
	{
		____scaleWhenClose_4 = value;
	}

	inline static int32_t get_offset_of__color_5() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____color_5)); }
	inline Color_t2555686324  get__color_5() const { return ____color_5; }
	inline Color_t2555686324 * get_address_of__color_5() { return &____color_5; }
	inline void set__color_5(Color_t2555686324  value)
	{
		____color_5 = value;
	}

	inline static int32_t get_offset_of__hit_6() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____hit_6)); }
	inline bool get__hit_6() const { return ____hit_6; }
	inline bool* get_address_of__hit_6() { return &____hit_6; }
	inline void set__hit_6(bool value)
	{
		____hit_6 = value;
	}

	inline static int32_t get_offset_of__render_7() { return static_cast<int32_t>(offsetof(RaycastVisualizer_t4231285072, ____render_7)); }
	inline Renderer_t2627027031 * get__render_7() const { return ____render_7; }
	inline Renderer_t2627027031 ** get_address_of__render_7() { return &____render_7; }
	inline void set__render_7(Renderer_t2627027031 * value)
	{
		____render_7 = value;
		Il2CppCodeGenWriteBarrier((&____render_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTVISUALIZER_T4231285072_H
#ifndef VIDEOCAPTUREVISUALIZER_T486332716_H
#define VIDEOCAPTUREVISUALIZER_T486332716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.VideoCaptureVisualizer
struct  VideoCaptureVisualizer_t486332716  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MagicLeap.VideoCaptureVisualizer::_screen
	GameObject_t1113636619 * ____screen_2;
	// UnityEngine.Renderer MagicLeap.VideoCaptureVisualizer::_screenRenderer
	Renderer_t2627027031 * ____screenRenderer_3;
	// UnityEngine.XR.MagicLeap.MLMediaPlayer MagicLeap.VideoCaptureVisualizer::_mediaPlayer
	MLMediaPlayer_t2810777267 * ____mediaPlayer_4;
	// UnityEngine.UI.Text MagicLeap.VideoCaptureVisualizer::_previewText
	Text_t1901882714 * ____previewText_5;
	// UnityEngine.GameObject MagicLeap.VideoCaptureVisualizer::_recordingIndicator
	GameObject_t1113636619 * ____recordingIndicator_6;

public:
	inline static int32_t get_offset_of__screen_2() { return static_cast<int32_t>(offsetof(VideoCaptureVisualizer_t486332716, ____screen_2)); }
	inline GameObject_t1113636619 * get__screen_2() const { return ____screen_2; }
	inline GameObject_t1113636619 ** get_address_of__screen_2() { return &____screen_2; }
	inline void set__screen_2(GameObject_t1113636619 * value)
	{
		____screen_2 = value;
		Il2CppCodeGenWriteBarrier((&____screen_2), value);
	}

	inline static int32_t get_offset_of__screenRenderer_3() { return static_cast<int32_t>(offsetof(VideoCaptureVisualizer_t486332716, ____screenRenderer_3)); }
	inline Renderer_t2627027031 * get__screenRenderer_3() const { return ____screenRenderer_3; }
	inline Renderer_t2627027031 ** get_address_of__screenRenderer_3() { return &____screenRenderer_3; }
	inline void set__screenRenderer_3(Renderer_t2627027031 * value)
	{
		____screenRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&____screenRenderer_3), value);
	}

	inline static int32_t get_offset_of__mediaPlayer_4() { return static_cast<int32_t>(offsetof(VideoCaptureVisualizer_t486332716, ____mediaPlayer_4)); }
	inline MLMediaPlayer_t2810777267 * get__mediaPlayer_4() const { return ____mediaPlayer_4; }
	inline MLMediaPlayer_t2810777267 ** get_address_of__mediaPlayer_4() { return &____mediaPlayer_4; }
	inline void set__mediaPlayer_4(MLMediaPlayer_t2810777267 * value)
	{
		____mediaPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((&____mediaPlayer_4), value);
	}

	inline static int32_t get_offset_of__previewText_5() { return static_cast<int32_t>(offsetof(VideoCaptureVisualizer_t486332716, ____previewText_5)); }
	inline Text_t1901882714 * get__previewText_5() const { return ____previewText_5; }
	inline Text_t1901882714 ** get_address_of__previewText_5() { return &____previewText_5; }
	inline void set__previewText_5(Text_t1901882714 * value)
	{
		____previewText_5 = value;
		Il2CppCodeGenWriteBarrier((&____previewText_5), value);
	}

	inline static int32_t get_offset_of__recordingIndicator_6() { return static_cast<int32_t>(offsetof(VideoCaptureVisualizer_t486332716, ____recordingIndicator_6)); }
	inline GameObject_t1113636619 * get__recordingIndicator_6() const { return ____recordingIndicator_6; }
	inline GameObject_t1113636619 ** get_address_of__recordingIndicator_6() { return &____recordingIndicator_6; }
	inline void set__recordingIndicator_6(GameObject_t1113636619 * value)
	{
		____recordingIndicator_6 = value;
		Il2CppCodeGenWriteBarrier((&____recordingIndicator_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTUREVISUALIZER_T486332716_H
#ifndef WORLDSCALEEXAMPLE_T2376571832_H
#define WORLDSCALEEXAMPLE_T2376571832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.WorldScaleExample
struct  WorldScaleExample_t2376571832  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.MagicLeap.ControllerConnectionHandler MagicLeap.WorldScaleExample::_controllerConnectionHandler
	ControllerConnectionHandler_t4044881542 * ____controllerConnectionHandler_2;
	// UnityEngine.UI.Text MagicLeap.WorldScaleExample::_statusLabel
	Text_t1901882714 * ____statusLabel_3;
	// UnityEngine.Transform MagicLeap.WorldScaleExample::_marker
	Transform_t3600365921 * ____marker_4;
	// WorldScale MagicLeap.WorldScaleExample::_worldScale
	WorldScale_t4260615701 * ____worldScale_5;

public:
	inline static int32_t get_offset_of__controllerConnectionHandler_2() { return static_cast<int32_t>(offsetof(WorldScaleExample_t2376571832, ____controllerConnectionHandler_2)); }
	inline ControllerConnectionHandler_t4044881542 * get__controllerConnectionHandler_2() const { return ____controllerConnectionHandler_2; }
	inline ControllerConnectionHandler_t4044881542 ** get_address_of__controllerConnectionHandler_2() { return &____controllerConnectionHandler_2; }
	inline void set__controllerConnectionHandler_2(ControllerConnectionHandler_t4044881542 * value)
	{
		____controllerConnectionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&____controllerConnectionHandler_2), value);
	}

	inline static int32_t get_offset_of__statusLabel_3() { return static_cast<int32_t>(offsetof(WorldScaleExample_t2376571832, ____statusLabel_3)); }
	inline Text_t1901882714 * get__statusLabel_3() const { return ____statusLabel_3; }
	inline Text_t1901882714 ** get_address_of__statusLabel_3() { return &____statusLabel_3; }
	inline void set__statusLabel_3(Text_t1901882714 * value)
	{
		____statusLabel_3 = value;
		Il2CppCodeGenWriteBarrier((&____statusLabel_3), value);
	}

	inline static int32_t get_offset_of__marker_4() { return static_cast<int32_t>(offsetof(WorldScaleExample_t2376571832, ____marker_4)); }
	inline Transform_t3600365921 * get__marker_4() const { return ____marker_4; }
	inline Transform_t3600365921 ** get_address_of__marker_4() { return &____marker_4; }
	inline void set__marker_4(Transform_t3600365921 * value)
	{
		____marker_4 = value;
		Il2CppCodeGenWriteBarrier((&____marker_4), value);
	}

	inline static int32_t get_offset_of__worldScale_5() { return static_cast<int32_t>(offsetof(WorldScaleExample_t2376571832, ____worldScale_5)); }
	inline WorldScale_t4260615701 * get__worldScale_5() const { return ____worldScale_5; }
	inline WorldScale_t4260615701 ** get_address_of__worldScale_5() { return &____worldScale_5; }
	inline void set__worldScale_5(WorldScale_t4260615701 * value)
	{
		____worldScale_5 = value;
		Il2CppCodeGenWriteBarrier((&____worldScale_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDSCALEEXAMPLE_T2376571832_H
#ifndef RANDOMPOSITION_T1581223862_H
#define RANDOMPOSITION_T1581223862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// randomPosition
struct  randomPosition_t1581223862  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject randomPosition::EntireScene
	GameObject_t1113636619 * ___EntireScene_2;
	// System.Int32 randomPosition::pathIndexNumber
	int32_t ___pathIndexNumber_3;
	// System.Single randomPosition::rotationSpeed
	float ___rotationSpeed_4;
	// UnityEngine.GameObject randomPosition::TargetPatternSphere
	GameObject_t1113636619 * ___TargetPatternSphere_5;
	// UnityEngine.Vector3[] randomPosition::path0
	Vector3U5BU5D_t1718750761* ___path0_6;
	// UnityEngine.Vector3[] randomPosition::path1
	Vector3U5BU5D_t1718750761* ___path1_7;
	// UnityEngine.Vector3[] randomPosition::path2
	Vector3U5BU5D_t1718750761* ___path2_8;
	// System.Int32 randomPosition::selectedSession
	int32_t ___selectedSession_9;

public:
	inline static int32_t get_offset_of_EntireScene_2() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___EntireScene_2)); }
	inline GameObject_t1113636619 * get_EntireScene_2() const { return ___EntireScene_2; }
	inline GameObject_t1113636619 ** get_address_of_EntireScene_2() { return &___EntireScene_2; }
	inline void set_EntireScene_2(GameObject_t1113636619 * value)
	{
		___EntireScene_2 = value;
		Il2CppCodeGenWriteBarrier((&___EntireScene_2), value);
	}

	inline static int32_t get_offset_of_pathIndexNumber_3() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___pathIndexNumber_3)); }
	inline int32_t get_pathIndexNumber_3() const { return ___pathIndexNumber_3; }
	inline int32_t* get_address_of_pathIndexNumber_3() { return &___pathIndexNumber_3; }
	inline void set_pathIndexNumber_3(int32_t value)
	{
		___pathIndexNumber_3 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_TargetPatternSphere_5() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___TargetPatternSphere_5)); }
	inline GameObject_t1113636619 * get_TargetPatternSphere_5() const { return ___TargetPatternSphere_5; }
	inline GameObject_t1113636619 ** get_address_of_TargetPatternSphere_5() { return &___TargetPatternSphere_5; }
	inline void set_TargetPatternSphere_5(GameObject_t1113636619 * value)
	{
		___TargetPatternSphere_5 = value;
		Il2CppCodeGenWriteBarrier((&___TargetPatternSphere_5), value);
	}

	inline static int32_t get_offset_of_path0_6() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___path0_6)); }
	inline Vector3U5BU5D_t1718750761* get_path0_6() const { return ___path0_6; }
	inline Vector3U5BU5D_t1718750761** get_address_of_path0_6() { return &___path0_6; }
	inline void set_path0_6(Vector3U5BU5D_t1718750761* value)
	{
		___path0_6 = value;
		Il2CppCodeGenWriteBarrier((&___path0_6), value);
	}

	inline static int32_t get_offset_of_path1_7() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___path1_7)); }
	inline Vector3U5BU5D_t1718750761* get_path1_7() const { return ___path1_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_path1_7() { return &___path1_7; }
	inline void set_path1_7(Vector3U5BU5D_t1718750761* value)
	{
		___path1_7 = value;
		Il2CppCodeGenWriteBarrier((&___path1_7), value);
	}

	inline static int32_t get_offset_of_path2_8() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___path2_8)); }
	inline Vector3U5BU5D_t1718750761* get_path2_8() const { return ___path2_8; }
	inline Vector3U5BU5D_t1718750761** get_address_of_path2_8() { return &___path2_8; }
	inline void set_path2_8(Vector3U5BU5D_t1718750761* value)
	{
		___path2_8 = value;
		Il2CppCodeGenWriteBarrier((&___path2_8), value);
	}

	inline static int32_t get_offset_of_selectedSession_9() { return static_cast<int32_t>(offsetof(randomPosition_t1581223862, ___selectedSession_9)); }
	inline int32_t get_selectedSession_9() const { return ___selectedSession_9; }
	inline int32_t* get_address_of_selectedSession_9() { return &___selectedSession_9; }
	inline void set_selectedSession_9(int32_t value)
	{
		___selectedSession_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMPOSITION_T1581223862_H
#ifndef ROTATESPHERE_T3108513079_H
#define ROTATESPHERE_T3108513079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateSphere
struct  RotateSphere_t3108513079  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject RotateSphere::RandomPositionDecider
	GameObject_t1113636619 * ___RandomPositionDecider_2;
	// UnityEngine.MeshRenderer RotateSphere::bigSphere
	MeshRenderer_t587009260 * ___bigSphere_3;
	// UnityEngine.Quaternion RotateSphere::_lookRotation
	Quaternion_t2301928331  ____lookRotation_4;
	// UnityEngine.Vector3 RotateSphere::_direction
	Vector3_t3722313464  ____direction_5;
	// UnityEngine.Quaternion RotateSphere::previousFrameRotation
	Quaternion_t2301928331  ___previousFrameRotation_6;
	// System.Single RotateSphere::runTime
	float ___runTime_7;
	// System.Single RotateSphere::firstRotationDelay
	float ___firstRotationDelay_8;

public:
	inline static int32_t get_offset_of_RandomPositionDecider_2() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ___RandomPositionDecider_2)); }
	inline GameObject_t1113636619 * get_RandomPositionDecider_2() const { return ___RandomPositionDecider_2; }
	inline GameObject_t1113636619 ** get_address_of_RandomPositionDecider_2() { return &___RandomPositionDecider_2; }
	inline void set_RandomPositionDecider_2(GameObject_t1113636619 * value)
	{
		___RandomPositionDecider_2 = value;
		Il2CppCodeGenWriteBarrier((&___RandomPositionDecider_2), value);
	}

	inline static int32_t get_offset_of_bigSphere_3() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ___bigSphere_3)); }
	inline MeshRenderer_t587009260 * get_bigSphere_3() const { return ___bigSphere_3; }
	inline MeshRenderer_t587009260 ** get_address_of_bigSphere_3() { return &___bigSphere_3; }
	inline void set_bigSphere_3(MeshRenderer_t587009260 * value)
	{
		___bigSphere_3 = value;
		Il2CppCodeGenWriteBarrier((&___bigSphere_3), value);
	}

	inline static int32_t get_offset_of__lookRotation_4() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ____lookRotation_4)); }
	inline Quaternion_t2301928331  get__lookRotation_4() const { return ____lookRotation_4; }
	inline Quaternion_t2301928331 * get_address_of__lookRotation_4() { return &____lookRotation_4; }
	inline void set__lookRotation_4(Quaternion_t2301928331  value)
	{
		____lookRotation_4 = value;
	}

	inline static int32_t get_offset_of__direction_5() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ____direction_5)); }
	inline Vector3_t3722313464  get__direction_5() const { return ____direction_5; }
	inline Vector3_t3722313464 * get_address_of__direction_5() { return &____direction_5; }
	inline void set__direction_5(Vector3_t3722313464  value)
	{
		____direction_5 = value;
	}

	inline static int32_t get_offset_of_previousFrameRotation_6() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ___previousFrameRotation_6)); }
	inline Quaternion_t2301928331  get_previousFrameRotation_6() const { return ___previousFrameRotation_6; }
	inline Quaternion_t2301928331 * get_address_of_previousFrameRotation_6() { return &___previousFrameRotation_6; }
	inline void set_previousFrameRotation_6(Quaternion_t2301928331  value)
	{
		___previousFrameRotation_6 = value;
	}

	inline static int32_t get_offset_of_runTime_7() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ___runTime_7)); }
	inline float get_runTime_7() const { return ___runTime_7; }
	inline float* get_address_of_runTime_7() { return &___runTime_7; }
	inline void set_runTime_7(float value)
	{
		___runTime_7 = value;
	}

	inline static int32_t get_offset_of_firstRotationDelay_8() { return static_cast<int32_t>(offsetof(RotateSphere_t3108513079, ___firstRotationDelay_8)); }
	inline float get_firstRotationDelay_8() const { return ___firstRotationDelay_8; }
	inline float* get_address_of_firstRotationDelay_8() { return &___firstRotationDelay_8; }
	inline void set_firstRotationDelay_8(float value)
	{
		___firstRotationDelay_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATESPHERE_T3108513079_H
#ifndef PLANEVISUALIZER_T1789429949_H
#define PLANEVISUALIZER_T1789429949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.PlaneVisualizer
struct  PlaneVisualizer_t1789429949  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MagicLeap.PlaneVisualizer::PlaneVisualPrefab
	GameObject_t1113636619 * ___PlaneVisualPrefab_2;
	// UnityEngine.Material MagicLeap.PlaneVisualizer::WallMaterial
	Material_t340375123 * ___WallMaterial_3;
	// UnityEngine.Material MagicLeap.PlaneVisualizer::FloorMaterial
	Material_t340375123 * ___FloorMaterial_4;
	// UnityEngine.Material MagicLeap.PlaneVisualizer::CeilingMaterial
	Material_t340375123 * ___CeilingMaterial_5;
	// UnityEngine.Material MagicLeap.PlaneVisualizer::DefaultMaterial
	Material_t340375123 * ___DefaultMaterial_6;
	// UnityEngine.Material MagicLeap.PlaneVisualizer::BorderMaterial
	Material_t340375123 * ___BorderMaterial_7;
	// UnityEngine.UI.Text MagicLeap.PlaneVisualizer::_renderModeText
	Text_t1901882714 * ____renderModeText_8;
	// UnityEngine.GameObject MagicLeap.PlaneVisualizer::_planesParent
	GameObject_t1113636619 * ____planesParent_9;
	// UnityEngine.GameObject MagicLeap.PlaneVisualizer::_boundariesParent
	GameObject_t1113636619 * ____boundariesParent_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MagicLeap.PlaneVisualizer::_planeCache
	List_1_t2585711361 * ____planeCache_11;
	// System.Collections.Generic.List`1<System.UInt32> MagicLeap.PlaneVisualizer::_planeFlags
	List_1_t4032136720 * ____planeFlags_12;
	// System.Collections.Generic.List`1<MagicLeap.PlaneVisualizer/BoundariesCache> MagicLeap.PlaneVisualizer::_boundariesCache
	List_1_t2880018161 * ____boundariesCache_13;
	// MagicLeap.PlaneVisualizer/RenderType MagicLeap.PlaneVisualizer::_renderType
	int32_t ____renderType_14;

public:
	inline static int32_t get_offset_of_PlaneVisualPrefab_2() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___PlaneVisualPrefab_2)); }
	inline GameObject_t1113636619 * get_PlaneVisualPrefab_2() const { return ___PlaneVisualPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_PlaneVisualPrefab_2() { return &___PlaneVisualPrefab_2; }
	inline void set_PlaneVisualPrefab_2(GameObject_t1113636619 * value)
	{
		___PlaneVisualPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneVisualPrefab_2), value);
	}

	inline static int32_t get_offset_of_WallMaterial_3() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___WallMaterial_3)); }
	inline Material_t340375123 * get_WallMaterial_3() const { return ___WallMaterial_3; }
	inline Material_t340375123 ** get_address_of_WallMaterial_3() { return &___WallMaterial_3; }
	inline void set_WallMaterial_3(Material_t340375123 * value)
	{
		___WallMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&___WallMaterial_3), value);
	}

	inline static int32_t get_offset_of_FloorMaterial_4() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___FloorMaterial_4)); }
	inline Material_t340375123 * get_FloorMaterial_4() const { return ___FloorMaterial_4; }
	inline Material_t340375123 ** get_address_of_FloorMaterial_4() { return &___FloorMaterial_4; }
	inline void set_FloorMaterial_4(Material_t340375123 * value)
	{
		___FloorMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___FloorMaterial_4), value);
	}

	inline static int32_t get_offset_of_CeilingMaterial_5() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___CeilingMaterial_5)); }
	inline Material_t340375123 * get_CeilingMaterial_5() const { return ___CeilingMaterial_5; }
	inline Material_t340375123 ** get_address_of_CeilingMaterial_5() { return &___CeilingMaterial_5; }
	inline void set_CeilingMaterial_5(Material_t340375123 * value)
	{
		___CeilingMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___CeilingMaterial_5), value);
	}

	inline static int32_t get_offset_of_DefaultMaterial_6() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___DefaultMaterial_6)); }
	inline Material_t340375123 * get_DefaultMaterial_6() const { return ___DefaultMaterial_6; }
	inline Material_t340375123 ** get_address_of_DefaultMaterial_6() { return &___DefaultMaterial_6; }
	inline void set_DefaultMaterial_6(Material_t340375123 * value)
	{
		___DefaultMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultMaterial_6), value);
	}

	inline static int32_t get_offset_of_BorderMaterial_7() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ___BorderMaterial_7)); }
	inline Material_t340375123 * get_BorderMaterial_7() const { return ___BorderMaterial_7; }
	inline Material_t340375123 ** get_address_of_BorderMaterial_7() { return &___BorderMaterial_7; }
	inline void set_BorderMaterial_7(Material_t340375123 * value)
	{
		___BorderMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___BorderMaterial_7), value);
	}

	inline static int32_t get_offset_of__renderModeText_8() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____renderModeText_8)); }
	inline Text_t1901882714 * get__renderModeText_8() const { return ____renderModeText_8; }
	inline Text_t1901882714 ** get_address_of__renderModeText_8() { return &____renderModeText_8; }
	inline void set__renderModeText_8(Text_t1901882714 * value)
	{
		____renderModeText_8 = value;
		Il2CppCodeGenWriteBarrier((&____renderModeText_8), value);
	}

	inline static int32_t get_offset_of__planesParent_9() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____planesParent_9)); }
	inline GameObject_t1113636619 * get__planesParent_9() const { return ____planesParent_9; }
	inline GameObject_t1113636619 ** get_address_of__planesParent_9() { return &____planesParent_9; }
	inline void set__planesParent_9(GameObject_t1113636619 * value)
	{
		____planesParent_9 = value;
		Il2CppCodeGenWriteBarrier((&____planesParent_9), value);
	}

	inline static int32_t get_offset_of__boundariesParent_10() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____boundariesParent_10)); }
	inline GameObject_t1113636619 * get__boundariesParent_10() const { return ____boundariesParent_10; }
	inline GameObject_t1113636619 ** get_address_of__boundariesParent_10() { return &____boundariesParent_10; }
	inline void set__boundariesParent_10(GameObject_t1113636619 * value)
	{
		____boundariesParent_10 = value;
		Il2CppCodeGenWriteBarrier((&____boundariesParent_10), value);
	}

	inline static int32_t get_offset_of__planeCache_11() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____planeCache_11)); }
	inline List_1_t2585711361 * get__planeCache_11() const { return ____planeCache_11; }
	inline List_1_t2585711361 ** get_address_of__planeCache_11() { return &____planeCache_11; }
	inline void set__planeCache_11(List_1_t2585711361 * value)
	{
		____planeCache_11 = value;
		Il2CppCodeGenWriteBarrier((&____planeCache_11), value);
	}

	inline static int32_t get_offset_of__planeFlags_12() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____planeFlags_12)); }
	inline List_1_t4032136720 * get__planeFlags_12() const { return ____planeFlags_12; }
	inline List_1_t4032136720 ** get_address_of__planeFlags_12() { return &____planeFlags_12; }
	inline void set__planeFlags_12(List_1_t4032136720 * value)
	{
		____planeFlags_12 = value;
		Il2CppCodeGenWriteBarrier((&____planeFlags_12), value);
	}

	inline static int32_t get_offset_of__boundariesCache_13() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____boundariesCache_13)); }
	inline List_1_t2880018161 * get__boundariesCache_13() const { return ____boundariesCache_13; }
	inline List_1_t2880018161 ** get_address_of__boundariesCache_13() { return &____boundariesCache_13; }
	inline void set__boundariesCache_13(List_1_t2880018161 * value)
	{
		____boundariesCache_13 = value;
		Il2CppCodeGenWriteBarrier((&____boundariesCache_13), value);
	}

	inline static int32_t get_offset_of__renderType_14() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949, ____renderType_14)); }
	inline int32_t get__renderType_14() const { return ____renderType_14; }
	inline int32_t* get_address_of__renderType_14() { return &____renderType_14; }
	inline void set__renderType_14(int32_t value)
	{
		____renderType_14 = value;
	}
};

struct PlaneVisualizer_t1789429949_StaticFields
{
public:
	// System.Action`1<UnityEngine.GameObject> MagicLeap.PlaneVisualizer::<>f__am$cache0
	Action_1_t1286104214 * ___U3CU3Ef__amU24cache0_15;
	// System.Action`1<MagicLeap.PlaneVisualizer/BoundariesCache> MagicLeap.PlaneVisualizer::<>f__am$cache1
	Action_1_t1580411014 * ___U3CU3Ef__amU24cache1_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline Action_1_t1286104214 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline Action_1_t1286104214 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(Action_1_t1286104214 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_16() { return static_cast<int32_t>(offsetof(PlaneVisualizer_t1789429949_StaticFields, ___U3CU3Ef__amU24cache1_16)); }
	inline Action_1_t1580411014 * get_U3CU3Ef__amU24cache1_16() const { return ___U3CU3Ef__amU24cache1_16; }
	inline Action_1_t1580411014 ** get_address_of_U3CU3Ef__amU24cache1_16() { return &___U3CU3Ef__amU24cache1_16; }
	inline void set_U3CU3Ef__amU24cache1_16(Action_1_t1580411014 * value)
	{
		___U3CU3Ef__amU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEVISUALIZER_T1789429949_H
#ifndef MATERIALTILINGCONTROLLER_T1508854693_H
#define MATERIALTILINGCONTROLLER_T1508854693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MaterialTilingController
struct  MaterialTilingController_t1508854693  : public MaterialController_t3979786588
{
public:
	// UnityEngine.Vector2 MagicLeap.MaterialTilingController::_texTiling
	Vector2_t2156229523  ____texTiling_5;

public:
	inline static int32_t get_offset_of__texTiling_5() { return static_cast<int32_t>(offsetof(MaterialTilingController_t1508854693, ____texTiling_5)); }
	inline Vector2_t2156229523  get__texTiling_5() const { return ____texTiling_5; }
	inline Vector2_t2156229523 * get_address_of__texTiling_5() { return &____texTiling_5; }
	inline void set__texTiling_5(Vector2_t2156229523  value)
	{
		____texTiling_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALTILINGCONTROLLER_T1508854693_H
#ifndef MATERIALTHRESHOLDCONTROLLER_T493820427_H
#define MATERIALTHRESHOLDCONTROLLER_T493820427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MaterialThresholdController
struct  MaterialThresholdController_t493820427  : public MaterialController_t3979786588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALTHRESHOLDCONTROLLER_T493820427_H
#ifndef MATERIALFOREGROUNDCOLORCONTROLLER_T1986902163_H
#define MATERIALFOREGROUNDCOLORCONTROLLER_T1986902163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MaterialForegroundColorController
struct  MaterialForegroundColorController_t1986902163  : public MaterialController_t3979786588
{
public:
	// UnityEngine.Gradient MagicLeap.MaterialForegroundColorController::_gradient
	Gradient_t3067099924 * ____gradient_5;
	// System.Single MagicLeap.MaterialForegroundColorController::_t
	float ____t_6;

public:
	inline static int32_t get_offset_of__gradient_5() { return static_cast<int32_t>(offsetof(MaterialForegroundColorController_t1986902163, ____gradient_5)); }
	inline Gradient_t3067099924 * get__gradient_5() const { return ____gradient_5; }
	inline Gradient_t3067099924 ** get_address_of__gradient_5() { return &____gradient_5; }
	inline void set__gradient_5(Gradient_t3067099924 * value)
	{
		____gradient_5 = value;
		Il2CppCodeGenWriteBarrier((&____gradient_5), value);
	}

	inline static int32_t get_offset_of__t_6() { return static_cast<int32_t>(offsetof(MaterialForegroundColorController_t1986902163, ____t_6)); }
	inline float get__t_6() const { return ____t_6; }
	inline float* get_address_of__t_6() { return &____t_6; }
	inline void set__t_6(float value)
	{
		____t_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALFOREGROUNDCOLORCONTROLLER_T1986902163_H
#ifndef MATERIALBLENDOFFSETCONTROLLER_T3024784745_H
#define MATERIALBLENDOFFSETCONTROLLER_T3024784745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeap.MaterialBlendOffsetController
struct  MaterialBlendOffsetController_t3024784745  : public MaterialController_t3979786588
{
public:
	// UnityEngine.Vector2 MagicLeap.MaterialBlendOffsetController::_mainTexOffset
	Vector2_t2156229523  ____mainTexOffset_5;
	// UnityEngine.Vector2 MagicLeap.MaterialBlendOffsetController::_blendTexOffset
	Vector2_t2156229523  ____blendTexOffset_6;
	// System.Single MagicLeap.MaterialBlendOffsetController::_xOffsetSpeed
	float ____xOffsetSpeed_9;

public:
	inline static int32_t get_offset_of__mainTexOffset_5() { return static_cast<int32_t>(offsetof(MaterialBlendOffsetController_t3024784745, ____mainTexOffset_5)); }
	inline Vector2_t2156229523  get__mainTexOffset_5() const { return ____mainTexOffset_5; }
	inline Vector2_t2156229523 * get_address_of__mainTexOffset_5() { return &____mainTexOffset_5; }
	inline void set__mainTexOffset_5(Vector2_t2156229523  value)
	{
		____mainTexOffset_5 = value;
	}

	inline static int32_t get_offset_of__blendTexOffset_6() { return static_cast<int32_t>(offsetof(MaterialBlendOffsetController_t3024784745, ____blendTexOffset_6)); }
	inline Vector2_t2156229523  get__blendTexOffset_6() const { return ____blendTexOffset_6; }
	inline Vector2_t2156229523 * get_address_of__blendTexOffset_6() { return &____blendTexOffset_6; }
	inline void set__blendTexOffset_6(Vector2_t2156229523  value)
	{
		____blendTexOffset_6 = value;
	}

	inline static int32_t get_offset_of__xOffsetSpeed_9() { return static_cast<int32_t>(offsetof(MaterialBlendOffsetController_t3024784745, ____xOffsetSpeed_9)); }
	inline float get__xOffsetSpeed_9() const { return ____xOffsetSpeed_9; }
	inline float* get_address_of__xOffsetSpeed_9() { return &____xOffsetSpeed_9; }
	inline void set__xOffsetSpeed_9(float value)
	{
		____xOffsetSpeed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALBLENDOFFSETCONTROLLER_T3024784745_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (MaterialBlendOffsetController_t3024784745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[5] = 
{
	MaterialBlendOffsetController_t3024784745::get_offset_of__mainTexOffset_5(),
	MaterialBlendOffsetController_t3024784745::get_offset_of__blendTexOffset_6(),
	0,
	0,
	MaterialBlendOffsetController_t3024784745::get_offset_of__xOffsetSpeed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (MaterialController_t3979786588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[3] = 
{
	MaterialController_t3979786588::get_offset_of__material_2(),
	MaterialController_t3979786588::get_offset_of__statusText_3(),
	MaterialController_t3979786588::get_offset_of__textOnView_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (MaterialForegroundColorController_t1986902163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[2] = 
{
	MaterialForegroundColorController_t1986902163::get_offset_of__gradient_5(),
	MaterialForegroundColorController_t1986902163::get_offset_of__t_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (MaterialThresholdController_t493820427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (MaterialTilingController_t1508854693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[3] = 
{
	MaterialTilingController_t1508854693::get_offset_of__texTiling_5(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (MeshingVisualizer_t2825983296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[5] = 
{
	MeshingVisualizer_t2825983296::get_offset_of__mlSpatialMapper_2(),
	MeshingVisualizer_t2825983296::get_offset_of__occlusionMaterial_3(),
	MeshingVisualizer_t2825983296::get_offset_of__wireframeMaterial_4(),
	MeshingVisualizer_t2825983296::get_offset_of__pointCloudMaterial_5(),
	MeshingVisualizer_t2825983296::get_offset_of__renderMode_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (RenderMode_t166288221)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2506[5] = 
{
	RenderMode_t166288221::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (PCFStatusText_t1346358685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[3] = 
{
	PCFStatusText_t1346358685::get_offset_of__statusText_2(),
	PCFStatusText_t1346358685::get_offset_of__nameText_3(),
	PCFStatusText_t1346358685::get_offset_of__pcf_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (PCFVisualizer_t2975549815), -1, sizeof(PCFVisualizer_t2975549815_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2508[8] = 
{
	PCFVisualizer_t2975549815::get_offset_of__prefab_2(),
	PCFVisualizer_t2975549815::get_offset_of__pcfObjs_3(),
	PCFVisualizer_t2975549815::get_offset_of__pcfCountText_4(),
	PCFVisualizer_t2975549815::get_offset_of__pcfCount_5(),
	0,
	PCFVisualizer_t2975549815::get_offset_of__ongoingQueriesCount_7(),
	PCFVisualizer_t2975549815::get_offset_of__findAllPCFs_8(),
	PCFVisualizer_t2975549815_StaticFields::get_offset_of_U3CIsDebugModeU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (U3CFindAllPCFsU3Ec__Iterator0_t1197852960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[7] = 
{
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U3CallPCFsU3E__1_0(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U3CresultU3E__1_1(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U24locvar0_2(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U24this_3(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U24current_4(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U24disposing_5(),
	U3CFindAllPCFsU3Ec__Iterator0_t1197852960::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (PersistentBall_t336984162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[2] = 
{
	PersistentBall_t336984162::get_offset_of__controllerConnectionHandler_2(),
	PersistentBall_t336984162::get_offset_of_OnContentDestroy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (PlacementVisualizer_t1781617143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[3] = 
{
	PlacementVisualizer_t1781617143::get_offset_of__willFitVolume_2(),
	PlacementVisualizer_t1781617143::get_offset_of__willNotFitVolume_3(),
	PlacementVisualizer_t1781617143::get_offset_of__placement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (PlaneVisualizer_t1789429949), -1, sizeof(PlaneVisualizer_t1789429949_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2512[15] = 
{
	PlaneVisualizer_t1789429949::get_offset_of_PlaneVisualPrefab_2(),
	PlaneVisualizer_t1789429949::get_offset_of_WallMaterial_3(),
	PlaneVisualizer_t1789429949::get_offset_of_FloorMaterial_4(),
	PlaneVisualizer_t1789429949::get_offset_of_CeilingMaterial_5(),
	PlaneVisualizer_t1789429949::get_offset_of_DefaultMaterial_6(),
	PlaneVisualizer_t1789429949::get_offset_of_BorderMaterial_7(),
	PlaneVisualizer_t1789429949::get_offset_of__renderModeText_8(),
	PlaneVisualizer_t1789429949::get_offset_of__planesParent_9(),
	PlaneVisualizer_t1789429949::get_offset_of__boundariesParent_10(),
	PlaneVisualizer_t1789429949::get_offset_of__planeCache_11(),
	PlaneVisualizer_t1789429949::get_offset_of__planeFlags_12(),
	PlaneVisualizer_t1789429949::get_offset_of__boundariesCache_13(),
	PlaneVisualizer_t1789429949::get_offset_of__renderType_14(),
	PlaneVisualizer_t1789429949_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_15(),
	PlaneVisualizer_t1789429949_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (BoundariesCache_t1407943419), -1, sizeof(BoundariesCache_t1407943419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2513[4] = 
{
	BoundariesCache_t1407943419::get_offset_of_U3CIdU3Ek__BackingField_0(),
	BoundariesCache_t1407943419::get_offset_of_U3CPlanesU3Ek__BackingField_1(),
	BoundariesCache_t1407943419_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
	BoundariesCache_t1407943419_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (PlanesCache_t3877993568), -1, sizeof(PlanesCache_t3877993568_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2514[4] = 
{
	PlanesCache_t3877993568::get_offset_of_U3CPlaneU3Ek__BackingField_0(),
	PlanesCache_t3877993568::get_offset_of_U3CHolesU3Ek__BackingField_1(),
	PlanesCache_t3877993568_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
	PlanesCache_t3877993568_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (RenderType_t3902717122)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2515[4] = 
{
	RenderType_t3902717122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (U3CDrawBoundariesU3Ec__AnonStorey0_t2912254316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[1] = 
{
	U3CDrawBoundariesU3Ec__AnonStorey0_t2912254316::get_offset_of_cache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (U3CDrawBoundariesU3Ec__AnonStorey1_t573602156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[1] = 
{
	U3CDrawBoundariesU3Ec__AnonStorey1_t573602156::get_offset_of_worldBoundary_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (RaycastVisualizer_t4231285072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[6] = 
{
	RaycastVisualizer_t4231285072::get_offset_of__raycast_2(),
	RaycastVisualizer_t4231285072::get_offset_of__defaultDistance_3(),
	RaycastVisualizer_t4231285072::get_offset_of__scaleWhenClose_4(),
	RaycastVisualizer_t4231285072::get_offset_of__color_5(),
	RaycastVisualizer_t4231285072::get_offset_of__hit_6(),
	RaycastVisualizer_t4231285072::get_offset_of__render_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (VideoCaptureVisualizer_t486332716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2519[6] = 
{
	VideoCaptureVisualizer_t486332716::get_offset_of__screen_2(),
	VideoCaptureVisualizer_t486332716::get_offset_of__screenRenderer_3(),
	VideoCaptureVisualizer_t486332716::get_offset_of__mediaPlayer_4(),
	VideoCaptureVisualizer_t486332716::get_offset_of__previewText_5(),
	VideoCaptureVisualizer_t486332716::get_offset_of__recordingIndicator_6(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (U3CEnablePreviewU3Ec__Iterator0_t1444502860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[4] = 
{
	U3CEnablePreviewU3Ec__Iterator0_t1444502860::get_offset_of_U24this_0(),
	U3CEnablePreviewU3Ec__Iterator0_t1444502860::get_offset_of_U24current_1(),
	U3CEnablePreviewU3Ec__Iterator0_t1444502860::get_offset_of_U24disposing_2(),
	U3CEnablePreviewU3Ec__Iterator0_t1444502860::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (WorldScaleExample_t2376571832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2521[7] = 
{
	WorldScaleExample_t2376571832::get_offset_of__controllerConnectionHandler_2(),
	WorldScaleExample_t2376571832::get_offset_of__statusLabel_3(),
	WorldScaleExample_t2376571832::get_offset_of__marker_4(),
	WorldScaleExample_t2376571832::get_offset_of__worldScale_5(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (MLVersion_t3020039793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (NewFirebaseScript_t3275445975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[8] = 
{
	NewFirebaseScript_t3275445975::get_offset_of_user_2(),
	NewFirebaseScript_t3275445975::get_offset_of_Camera_3(),
	NewFirebaseScript_t3275445975::get_offset_of_CustomPivotPointCube_4(),
	NewFirebaseScript_t3275445975::get_offset_of_EntireScene_5(),
	NewFirebaseScript_t3275445975::get_offset_of_CurrentSessionLocal_6(),
	NewFirebaseScript_t3275445975::get_offset_of_TargetPatternSphere_7(),
	NewFirebaseScript_t3275445975::get_offset_of_newOrgio_8(),
	NewFirebaseScript_t3275445975::get_offset_of_url_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (U3CPutRequestU3Ec__Iterator0_t3457603378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[7] = 
{
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_url_0(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_U3CrequestU3E__0_1(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_bodyJsonString_2(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_U3CbodyRawU3E__0_3(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_U24current_4(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_U24disposing_5(),
	U3CPutRequestU3Ec__Iterator0_t3457603378::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (U3CPostRequestU3Ec__Iterator1_t3604508856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[7] = 
{
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_url_0(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_U3CrequestU3E__0_1(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_bodyJsonString_2(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_U3CbodyRawU3E__0_3(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_U24current_4(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_U24disposing_5(),
	U3CPostRequestU3Ec__Iterator1_t3604508856::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (randomPosition_t1581223862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[8] = 
{
	randomPosition_t1581223862::get_offset_of_EntireScene_2(),
	randomPosition_t1581223862::get_offset_of_pathIndexNumber_3(),
	randomPosition_t1581223862::get_offset_of_rotationSpeed_4(),
	randomPosition_t1581223862::get_offset_of_TargetPatternSphere_5(),
	randomPosition_t1581223862::get_offset_of_path0_6(),
	randomPosition_t1581223862::get_offset_of_path1_7(),
	randomPosition_t1581223862::get_offset_of_path2_8(),
	randomPosition_t1581223862::get_offset_of_selectedSession_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (RotateSphere_t3108513079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2527[7] = 
{
	RotateSphere_t3108513079::get_offset_of_RandomPositionDecider_2(),
	RotateSphere_t3108513079::get_offset_of_bigSphere_3(),
	RotateSphere_t3108513079::get_offset_of__lookRotation_4(),
	RotateSphere_t3108513079::get_offset_of__direction_5(),
	RotateSphere_t3108513079::get_offset_of_previousFrameRotation_6(),
	RotateSphere_t3108513079::get_offset_of_runTime_7(),
	RotateSphere_t3108513079::get_offset_of_firstRotationDelay_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (SetBigSpherePosition_t451636011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[1] = 
{
	SetBigSpherePosition_t451636011::get_offset_of_Camera_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (StartApplication_t2067025336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2529[11] = 
{
	StartApplication_t2067025336::get_offset_of_Camera_2(),
	StartApplication_t2067025336::get_offset_of_FocusedMaterial_3(),
	StartApplication_t2067025336::get_offset_of_NonFocusedMaterial_4(),
	StartApplication_t2067025336::get_offset_of_lineColorEyes_5(),
	StartApplication_t2067025336::get_offset_of_lineColorHead_6(),
	StartApplication_t2067025336::get_offset_of__headingEyes_7(),
	StartApplication_t2067025336::get_offset_of__headingHead_8(),
	StartApplication_t2067025336::get_offset_of_StartApplicationSphere_9(),
	StartApplication_t2067025336::get_offset_of_child_10(),
	StartApplication_t2067025336::get_offset_of_Eyes_11(),
	StartApplication_t2067025336::get_offset_of_Head_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (TargetTracking_t2065669340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2530[8] = 
{
	TargetTracking_t2065669340::get_offset_of_Camera_2(),
	TargetTracking_t2065669340::get_offset_of_NonFocusedMaterial_3(),
	TargetTracking_t2065669340::get_offset_of_TargetPatternSphere_4(),
	TargetTracking_t2065669340::get_offset_of_CustomPivotPointCube_5(),
	TargetTracking_t2065669340::get_offset_of_positionsTarget_6(),
	TargetTracking_t2065669340::get_offset_of_lineRendererTarget_7(),
	TargetTracking_t2065669340::get_offset_of_coordNumber_8(),
	TargetTracking_t2065669340::get_offset_of_newOrgio_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (UserDataClass_t3215840357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2531[13] = 
{
	UserDataClass_t3215840357::get_offset_of_userName_0(),
	UserDataClass_t3215840357::get_offset_of_note_1(),
	UserDataClass_t3215840357::get_offset_of_timeStamp_2(),
	UserDataClass_t3215840357::get_offset_of_FixationConfidence_3(),
	UserDataClass_t3215840357::get_offset_of_targetSession0_4(),
	UserDataClass_t3215840357::get_offset_of_positionsEyeSession0_5(),
	UserDataClass_t3215840357::get_offset_of_positionsHeadSession0_6(),
	UserDataClass_t3215840357::get_offset_of_targetSession1_7(),
	UserDataClass_t3215840357::get_offset_of_positionsEyeSession1_8(),
	UserDataClass_t3215840357::get_offset_of_positionsHeadSession1_9(),
	UserDataClass_t3215840357::get_offset_of_targetSession2_10(),
	UserDataClass_t3215840357::get_offset_of_positionsEyeSession2_11(),
	UserDataClass_t3215840357::get_offset_of_positionsHeadSession2_12(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

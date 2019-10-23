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

// System.String
struct String_t;
// System.Action`1<OpcionButton>
struct Action_1_t2191926384;
// OpcionButton
struct OpcionButton_t2390127002;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t1976155184;
// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t3928470916;
// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t3435657708;
// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_t2260664863;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t2213949596;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t3246763936;
// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_t1074830945;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct ObjectPool_1_t701624289;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t2020713228;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t2262346586;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t890994926;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t243638650;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;
// Nodo[]
struct NodoU5BU5D_t694973991;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<OpcionButton>
struct List_1_t1759248134;
// System.Collections.Generic.List`1<Opcion>
struct List_1_t2552034614;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Collections.Generic.List`1<Pregunta>
struct List_1_t3886703426;
// DBPreguntas
struct DBPreguntas_t353734273;
// PreguntaUI
struct PreguntaUI_t2220025660;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Image
struct Image_t2042527209;
// Opcion
struct Opcion_t3182913482;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;




#ifndef U3CMODULEU3E_T3783534231_H
#define U3CMODULEU3E_T3783534231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534231 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534231_H
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
#ifndef OPCION_T3182913482_H
#define OPCION_T3182913482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Opcion
struct  Opcion_t3182913482  : public RuntimeObject
{
public:
	// System.String Opcion::texto
	String_t* ___texto_0;
	// System.Boolean Opcion::correcto
	bool ___correcto_1;

public:
	inline static int32_t get_offset_of_texto_0() { return static_cast<int32_t>(offsetof(Opcion_t3182913482, ___texto_0)); }
	inline String_t* get_texto_0() const { return ___texto_0; }
	inline String_t** get_address_of_texto_0() { return &___texto_0; }
	inline void set_texto_0(String_t* value)
	{
		___texto_0 = value;
		Il2CppCodeGenWriteBarrier((&___texto_0), value);
	}

	inline static int32_t get_offset_of_correcto_1() { return static_cast<int32_t>(offsetof(Opcion_t3182913482, ___correcto_1)); }
	inline bool get_correcto_1() const { return ___correcto_1; }
	inline bool* get_address_of_correcto_1() { return &___correcto_1; }
	inline void set_correcto_1(bool value)
	{
		___correcto_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCION_T3182913482_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef BASEVERTEXEFFECT_T2504093552_H
#define BASEVERTEXEFFECT_T2504093552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseVertexEffect
struct  BaseVertexEffect_t2504093552  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVERTEXEFFECT_T2504093552_H
#ifndef U3CCONSTRUIRBUTTONU3EC__ANONSTOREY0_T169507817_H
#define U3CCONSTRUIRBUTTONU3EC__ANONSTOREY0_T169507817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpcionButton/<construirButton>c__AnonStorey0
struct  U3CconstruirButtonU3Ec__AnonStorey0_t169507817  : public RuntimeObject
{
public:
	// System.Action`1<OpcionButton> OpcionButton/<construirButton>c__AnonStorey0::callback
	Action_1_t2191926384 * ___callback_0;
	// OpcionButton OpcionButton/<construirButton>c__AnonStorey0::$this
	OpcionButton_t2390127002 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CconstruirButtonU3Ec__AnonStorey0_t169507817, ___callback_0)); }
	inline Action_1_t2191926384 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2191926384 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2191926384 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CconstruirButtonU3Ec__AnonStorey0_t169507817, ___U24this_1)); }
	inline OpcionButton_t2390127002 * get_U24this_1() const { return ___U24this_1; }
	inline OpcionButton_t2390127002 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(OpcionButton_t2390127002 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCONSTRUIRBUTTONU3EC__ANONSTOREY0_T169507817_H
#ifndef LAYOUTUTILITY_T4076838048_H
#define LAYOUTUTILITY_T4076838048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutUtility
struct  LayoutUtility_t4076838048  : public RuntimeObject
{
public:

public:
};

struct LayoutUtility_t4076838048_StaticFields
{
public:
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache0
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache1
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache2
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache3
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache3_3;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache4
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache5
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache6
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache7
	Func_2_t1976155184 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(LayoutUtility_t4076838048_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t1976155184 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t1976155184 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t1976155184 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTUTILITY_T4076838048_H
#ifndef REFLECTIONMETHODSCACHE_T3343836395_H
#define REFLECTIONMETHODSCACHE_T3343836395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache
struct  ReflectionMethodsCache_t3343836395  : public RuntimeObject
{
public:
	// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback UnityEngine.UI.ReflectionMethodsCache::raycast3D
	Raycast3DCallback_t3928470916 * ___raycast3D_0;
	// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback UnityEngine.UI.ReflectionMethodsCache::raycast3DAll
	RaycastAllCallback_t3435657708 * ___raycast3DAll_1;
	// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback UnityEngine.UI.ReflectionMethodsCache::raycast2D
	Raycast2DCallback_t2260664863 * ___raycast2D_2;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAll
	GetRayIntersectionAllCallback_t2213949596 * ___getRayIntersectionAll_3;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAllNonAlloc
	GetRayIntersectionAllNonAllocCallback_t3246763936 * ___getRayIntersectionAllNonAlloc_4;
	// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRaycastNonAlloc
	GetRaycastNonAllocCallback_t1074830945 * ___getRaycastNonAlloc_5;

public:
	inline static int32_t get_offset_of_raycast3D_0() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___raycast3D_0)); }
	inline Raycast3DCallback_t3928470916 * get_raycast3D_0() const { return ___raycast3D_0; }
	inline Raycast3DCallback_t3928470916 ** get_address_of_raycast3D_0() { return &___raycast3D_0; }
	inline void set_raycast3D_0(Raycast3DCallback_t3928470916 * value)
	{
		___raycast3D_0 = value;
		Il2CppCodeGenWriteBarrier((&___raycast3D_0), value);
	}

	inline static int32_t get_offset_of_raycast3DAll_1() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___raycast3DAll_1)); }
	inline RaycastAllCallback_t3435657708 * get_raycast3DAll_1() const { return ___raycast3DAll_1; }
	inline RaycastAllCallback_t3435657708 ** get_address_of_raycast3DAll_1() { return &___raycast3DAll_1; }
	inline void set_raycast3DAll_1(RaycastAllCallback_t3435657708 * value)
	{
		___raycast3DAll_1 = value;
		Il2CppCodeGenWriteBarrier((&___raycast3DAll_1), value);
	}

	inline static int32_t get_offset_of_raycast2D_2() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___raycast2D_2)); }
	inline Raycast2DCallback_t2260664863 * get_raycast2D_2() const { return ___raycast2D_2; }
	inline Raycast2DCallback_t2260664863 ** get_address_of_raycast2D_2() { return &___raycast2D_2; }
	inline void set_raycast2D_2(Raycast2DCallback_t2260664863 * value)
	{
		___raycast2D_2 = value;
		Il2CppCodeGenWriteBarrier((&___raycast2D_2), value);
	}

	inline static int32_t get_offset_of_getRayIntersectionAll_3() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___getRayIntersectionAll_3)); }
	inline GetRayIntersectionAllCallback_t2213949596 * get_getRayIntersectionAll_3() const { return ___getRayIntersectionAll_3; }
	inline GetRayIntersectionAllCallback_t2213949596 ** get_address_of_getRayIntersectionAll_3() { return &___getRayIntersectionAll_3; }
	inline void set_getRayIntersectionAll_3(GetRayIntersectionAllCallback_t2213949596 * value)
	{
		___getRayIntersectionAll_3 = value;
		Il2CppCodeGenWriteBarrier((&___getRayIntersectionAll_3), value);
	}

	inline static int32_t get_offset_of_getRayIntersectionAllNonAlloc_4() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___getRayIntersectionAllNonAlloc_4)); }
	inline GetRayIntersectionAllNonAllocCallback_t3246763936 * get_getRayIntersectionAllNonAlloc_4() const { return ___getRayIntersectionAllNonAlloc_4; }
	inline GetRayIntersectionAllNonAllocCallback_t3246763936 ** get_address_of_getRayIntersectionAllNonAlloc_4() { return &___getRayIntersectionAllNonAlloc_4; }
	inline void set_getRayIntersectionAllNonAlloc_4(GetRayIntersectionAllNonAllocCallback_t3246763936 * value)
	{
		___getRayIntersectionAllNonAlloc_4 = value;
		Il2CppCodeGenWriteBarrier((&___getRayIntersectionAllNonAlloc_4), value);
	}

	inline static int32_t get_offset_of_getRaycastNonAlloc_5() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395, ___getRaycastNonAlloc_5)); }
	inline GetRaycastNonAllocCallback_t1074830945 * get_getRaycastNonAlloc_5() const { return ___getRaycastNonAlloc_5; }
	inline GetRaycastNonAllocCallback_t1074830945 ** get_address_of_getRaycastNonAlloc_5() { return &___getRaycastNonAlloc_5; }
	inline void set_getRaycastNonAlloc_5(GetRaycastNonAllocCallback_t1074830945 * value)
	{
		___getRaycastNonAlloc_5 = value;
		Il2CppCodeGenWriteBarrier((&___getRaycastNonAlloc_5), value);
	}
};

struct ReflectionMethodsCache_t3343836395_StaticFields
{
public:
	// UnityEngine.UI.ReflectionMethodsCache UnityEngine.UI.ReflectionMethodsCache::s_ReflectionMethodsCache
	ReflectionMethodsCache_t3343836395 * ___s_ReflectionMethodsCache_6;

public:
	inline static int32_t get_offset_of_s_ReflectionMethodsCache_6() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t3343836395_StaticFields, ___s_ReflectionMethodsCache_6)); }
	inline ReflectionMethodsCache_t3343836395 * get_s_ReflectionMethodsCache_6() const { return ___s_ReflectionMethodsCache_6; }
	inline ReflectionMethodsCache_t3343836395 ** get_address_of_s_ReflectionMethodsCache_6() { return &___s_ReflectionMethodsCache_6; }
	inline void set_s_ReflectionMethodsCache_6(ReflectionMethodsCache_t3343836395 * value)
	{
		___s_ReflectionMethodsCache_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_ReflectionMethodsCache_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONMETHODSCACHE_T3343836395_H
#ifndef LAYOUTREBUILDER_T2155218138_H
#define LAYOUTREBUILDER_T2155218138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutRebuilder
struct  LayoutRebuilder_t2155218138  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.LayoutRebuilder::m_ToRebuild
	RectTransform_t3349966182 * ___m_ToRebuild_0;
	// System.Int32 UnityEngine.UI.LayoutRebuilder::m_CachedHashFromTransform
	int32_t ___m_CachedHashFromTransform_1;

public:
	inline static int32_t get_offset_of_m_ToRebuild_0() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138, ___m_ToRebuild_0)); }
	inline RectTransform_t3349966182 * get_m_ToRebuild_0() const { return ___m_ToRebuild_0; }
	inline RectTransform_t3349966182 ** get_address_of_m_ToRebuild_0() { return &___m_ToRebuild_0; }
	inline void set_m_ToRebuild_0(RectTransform_t3349966182 * value)
	{
		___m_ToRebuild_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToRebuild_0), value);
	}

	inline static int32_t get_offset_of_m_CachedHashFromTransform_1() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138, ___m_CachedHashFromTransform_1)); }
	inline int32_t get_m_CachedHashFromTransform_1() const { return ___m_CachedHashFromTransform_1; }
	inline int32_t* get_address_of_m_CachedHashFromTransform_1() { return &___m_CachedHashFromTransform_1; }
	inline void set_m_CachedHashFromTransform_1(int32_t value)
	{
		___m_CachedHashFromTransform_1 = value;
	}
};

struct LayoutRebuilder_t2155218138_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::s_Rebuilders
	ObjectPool_1_t701624289 * ___s_Rebuilders_2;
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.UI.LayoutRebuilder::<>f__mg$cache0
	ReapplyDrivenProperties_t2020713228 * ___U3CU3Ef__mgU24cache0_3;
	// System.Predicate`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache0
	Predicate_1_t2262346586 * ___U3CU3Ef__amU24cache0_4;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache1
	UnityAction_1_t890994926 * ___U3CU3Ef__amU24cache1_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache2
	UnityAction_1_t890994926 * ___U3CU3Ef__amU24cache2_6;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache3
	UnityAction_1_t890994926 * ___U3CU3Ef__amU24cache3_7;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache4
	UnityAction_1_t890994926 * ___U3CU3Ef__amU24cache4_8;

public:
	inline static int32_t get_offset_of_s_Rebuilders_2() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___s_Rebuilders_2)); }
	inline ObjectPool_1_t701624289 * get_s_Rebuilders_2() const { return ___s_Rebuilders_2; }
	inline ObjectPool_1_t701624289 ** get_address_of_s_Rebuilders_2() { return &___s_Rebuilders_2; }
	inline void set_s_Rebuilders_2(ObjectPool_1_t701624289 * value)
	{
		___s_Rebuilders_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Rebuilders_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline ReapplyDrivenProperties_t2020713228 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline ReapplyDrivenProperties_t2020713228 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(ReapplyDrivenProperties_t2020713228 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t2262346586 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t2262346586 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t2262346586 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline UnityAction_1_t890994926 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline UnityAction_1_t890994926 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(UnityAction_1_t890994926 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline UnityAction_1_t890994926 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline UnityAction_1_t890994926 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(UnityAction_1_t890994926 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline UnityAction_1_t890994926 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline UnityAction_1_t890994926 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(UnityAction_1_t890994926 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_8() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t2155218138_StaticFields, ___U3CU3Ef__amU24cache4_8)); }
	inline UnityAction_1_t890994926 * get_U3CU3Ef__amU24cache4_8() const { return ___U3CU3Ef__amU24cache4_8; }
	inline UnityAction_1_t890994926 ** get_address_of_U3CU3Ef__amU24cache4_8() { return &___U3CU3Ef__amU24cache4_8; }
	inline void set_U3CU3Ef__amU24cache4_8(UnityAction_1_t890994926 * value)
	{
		___U3CU3Ef__amU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTREBUILDER_T2155218138_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
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
#endif // INT32_T2071877448_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef U24ARRAYTYPEU3D12_T1568637717_H
#define U24ARRAYTYPEU3D12_T1568637717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t1568637717 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t1568637717__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T1568637717_H
#ifndef VECTOR4_T2243707581_H
#define VECTOR4_T2243707581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2243707581 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2243707581_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2243707581  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2243707581  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2243707581  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2243707581  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2243707581  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2243707581 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2243707581  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___oneVector_6)); }
	inline Vector4_t2243707581  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2243707581 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2243707581  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2243707581  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2243707581 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2243707581  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2243707581  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2243707581 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2243707581  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2243707581_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
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
#ifndef DRIVENRECTTRANSFORMTRACKER_T154385424_H
#define DRIVENRECTTRANSFORMTRACKER_T154385424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t154385424 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T154385424_H
#ifndef LAYERMASK_T3188175821_H
#define LAYERMASK_T3188175821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3188175821 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3188175821, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3188175821_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
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
#endif // COLOR_T2020392075_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef RAYCASTHIT2D_T4063908774_H
#define RAYCASTHIT2D_T4063908774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t4063908774 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2243707579  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2243707579  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2243707579  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t646061738 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Centroid_0)); }
	inline Vector2_t2243707579  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2243707579 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2243707579  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Point_1)); }
	inline Vector2_t2243707579  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2243707579 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2243707579  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Normal_2)); }
	inline Vector2_t2243707579  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2243707579 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2243707579  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Collider_5)); }
	inline Collider2D_t646061738 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t646061738 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t646061738 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_pinvoke
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_com
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T4063908774_H
#ifndef RAYCASTHIT_T87180320_H
#define RAYCASTHIT_T87180320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t87180320 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2243707580  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2243707580  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2243707579  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3497673348 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Point_0)); }
	inline Vector3_t2243707580  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2243707580 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2243707580  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Normal_1)); }
	inline Vector3_t2243707580  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2243707580  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_UV_4)); }
	inline Vector2_t2243707579  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2243707579 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2243707579  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Collider_5)); }
	inline Collider_t3497673348 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3497673348 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_pinvoke
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_com
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T87180320_H
#ifndef TEXTANCHOR_T112990806_H
#define TEXTANCHOR_T112990806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t112990806 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t112990806, ___value___1)); }
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
#endif // TEXTANCHOR_T112990806_H
#ifndef VERTEXHELPER_T385374196_H
#define VERTEXHELPER_T385374196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t385374196  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t1612828712 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t243638650 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t1612828711 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t1612828711 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t1612828711 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t1612828711 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t1612828712 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t1612828713 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t1440998580 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Positions_0)); }
	inline List_1_t1612828712 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t1612828712 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t1612828712 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Colors_1)); }
	inline List_1_t243638650 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t243638650 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t243638650 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv0S_2)); }
	inline List_1_t1612828711 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t1612828711 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t1612828711 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv1S_3)); }
	inline List_1_t1612828711 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t1612828711 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t1612828711 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv2S_4)); }
	inline List_1_t1612828711 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t1612828711 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t1612828711 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv3S_5)); }
	inline List_1_t1612828711 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t1612828711 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t1612828711 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Normals_6)); }
	inline List_1_t1612828712 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t1612828712 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t1612828712 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Tangents_7)); }
	inline List_1_t1612828713 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t1612828713 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t1612828713 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Indices_8)); }
	inline List_1_t1440998580 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t1440998580 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t1440998580 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t385374196_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t2243707581  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t2243707580  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t2243707581  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t2243707581 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t2243707581  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t2243707580  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t2243707580 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t2243707580  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T385374196_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305141  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t1568637717  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t1568637717  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t1568637717 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t1568637717  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef RAYCAST2DCALLBACK_T2260664863_H
#define RAYCAST2DCALLBACK_T2260664863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct  Raycast2DCallback_t2260664863  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCAST2DCALLBACK_T2260664863_H
#ifndef GETRAYCASTNONALLOCCALLBACK_T1074830945_H
#define GETRAYCASTNONALLOCCALLBACK_T1074830945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct  GetRaycastNonAllocCallback_t1074830945  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYCASTNONALLOCCALLBACK_T1074830945_H
#ifndef GETRAYINTERSECTIONALLNONALLOCCALLBACK_T3246763936_H
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_T3246763936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct  GetRayIntersectionAllNonAllocCallback_t3246763936  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLNONALLOCCALLBACK_T3246763936_H
#ifndef RAYCAST3DCALLBACK_T3928470916_H
#define RAYCAST3DCALLBACK_T3928470916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct  Raycast3DCallback_t3928470916  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCAST3DCALLBACK_T3928470916_H
#ifndef GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#define GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct  GetRayIntersectionAllCallback_t2213949596  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#ifndef RAYCASTALLCALLBACK_T3435657708_H
#define RAYCASTALLCALLBACK_T3435657708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct  RaycastAllCallback_t3435657708  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTALLCALLBACK_T3435657708_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef UIBEHAVIOUR_T3960014691_H
#define UIBEHAVIOUR_T3960014691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3960014691  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3960014691_H
#ifndef COMPONENTES_T2663655339_H
#define COMPONENTES_T2663655339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Componentes
struct  Componentes_t2663655339  : public MonoBehaviour_t1158329972
{
public:
	// System.String Componentes::Nombre
	String_t* ___Nombre_2;

public:
	inline static int32_t get_offset_of_Nombre_2() { return static_cast<int32_t>(offsetof(Componentes_t2663655339, ___Nombre_2)); }
	inline String_t* get_Nombre_2() const { return ___Nombre_2; }
	inline String_t** get_address_of_Nombre_2() { return &___Nombre_2; }
	inline void set_Nombre_2(String_t* value)
	{
		___Nombre_2 = value;
		Il2CppCodeGenWriteBarrier((&___Nombre_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTES_T2663655339_H
#ifndef MENU_T4261767481_H
#define MENU_T4261767481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t4261767481  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENU_T4261767481_H
#ifndef CONTROLADORPUZZLE_T1338892433_H
#define CONTROLADORPUZZLE_T1338892433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControladorPuzzle
struct  ControladorPuzzle_t1338892433  : public MonoBehaviour_t1158329972
{
public:
	// Nodo[] ControladorPuzzle::nodos
	NodoU5BU5D_t694973991* ___nodos_3;
	// UnityEngine.GameObject ControladorPuzzle::panelError
	GameObject_t1756533147 * ___panelError_4;
	// UnityEngine.GameObject ControladorPuzzle::panelOk
	GameObject_t1756533147 * ___panelOk_5;

public:
	inline static int32_t get_offset_of_nodos_3() { return static_cast<int32_t>(offsetof(ControladorPuzzle_t1338892433, ___nodos_3)); }
	inline NodoU5BU5D_t694973991* get_nodos_3() const { return ___nodos_3; }
	inline NodoU5BU5D_t694973991** get_address_of_nodos_3() { return &___nodos_3; }
	inline void set_nodos_3(NodoU5BU5D_t694973991* value)
	{
		___nodos_3 = value;
		Il2CppCodeGenWriteBarrier((&___nodos_3), value);
	}

	inline static int32_t get_offset_of_panelError_4() { return static_cast<int32_t>(offsetof(ControladorPuzzle_t1338892433, ___panelError_4)); }
	inline GameObject_t1756533147 * get_panelError_4() const { return ___panelError_4; }
	inline GameObject_t1756533147 ** get_address_of_panelError_4() { return &___panelError_4; }
	inline void set_panelError_4(GameObject_t1756533147 * value)
	{
		___panelError_4 = value;
		Il2CppCodeGenWriteBarrier((&___panelError_4), value);
	}

	inline static int32_t get_offset_of_panelOk_5() { return static_cast<int32_t>(offsetof(ControladorPuzzle_t1338892433, ___panelOk_5)); }
	inline GameObject_t1756533147 * get_panelOk_5() const { return ___panelOk_5; }
	inline GameObject_t1756533147 ** get_address_of_panelOk_5() { return &___panelOk_5; }
	inline void set_panelOk_5(GameObject_t1756533147 * value)
	{
		___panelOk_5 = value;
		Il2CppCodeGenWriteBarrier((&___panelOk_5), value);
	}
};

struct ControladorPuzzle_t1338892433_StaticFields
{
public:
	// ControladorPuzzle ControladorPuzzle::instance
	ControladorPuzzle_t1338892433 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ControladorPuzzle_t1338892433_StaticFields, ___instance_2)); }
	inline ControladorPuzzle_t1338892433 * get_instance_2() const { return ___instance_2; }
	inline ControladorPuzzle_t1338892433 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ControladorPuzzle_t1338892433 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLADORPUZZLE_T1338892433_H
#ifndef CONECTAR_T859773857_H
#define CONECTAR_T859773857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Conectar
struct  Conectar_t859773857  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask Conectar::conector
	LayerMask_t3188175821  ___conector_2;
	// UnityEngine.Transform Conectar::cable
	Transform_t3275118058 * ___cable_3;
	// UnityEngine.Vector3 Conectar::nuevaPosicion
	Vector3_t2243707580  ___nuevaPosicion_4;

public:
	inline static int32_t get_offset_of_conector_2() { return static_cast<int32_t>(offsetof(Conectar_t859773857, ___conector_2)); }
	inline LayerMask_t3188175821  get_conector_2() const { return ___conector_2; }
	inline LayerMask_t3188175821 * get_address_of_conector_2() { return &___conector_2; }
	inline void set_conector_2(LayerMask_t3188175821  value)
	{
		___conector_2 = value;
	}

	inline static int32_t get_offset_of_cable_3() { return static_cast<int32_t>(offsetof(Conectar_t859773857, ___cable_3)); }
	inline Transform_t3275118058 * get_cable_3() const { return ___cable_3; }
	inline Transform_t3275118058 ** get_address_of_cable_3() { return &___cable_3; }
	inline void set_cable_3(Transform_t3275118058 * value)
	{
		___cable_3 = value;
		Il2CppCodeGenWriteBarrier((&___cable_3), value);
	}

	inline static int32_t get_offset_of_nuevaPosicion_4() { return static_cast<int32_t>(offsetof(Conectar_t859773857, ___nuevaPosicion_4)); }
	inline Vector3_t2243707580  get_nuevaPosicion_4() const { return ___nuevaPosicion_4; }
	inline Vector3_t2243707580 * get_address_of_nuevaPosicion_4() { return &___nuevaPosicion_4; }
	inline void set_nuevaPosicion_4(Vector3_t2243707580  value)
	{
		___nuevaPosicion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONECTAR_T859773857_H
#ifndef NODO_T2205197394_H
#define NODO_T2205197394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nodo
struct  Nodo_t2205197394  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Nodo::objetoCorrecto
	GameObject_t1756533147 * ___objetoCorrecto_2;
	// UnityEngine.GameObject Nodo::objetoAsignado
	GameObject_t1756533147 * ___objetoAsignado_3;
	// System.String Nodo::tagCorrecto
	String_t* ___tagCorrecto_4;
	// UnityEngine.LayerMask Nodo::componente
	LayerMask_t3188175821  ___componente_5;

public:
	inline static int32_t get_offset_of_objetoCorrecto_2() { return static_cast<int32_t>(offsetof(Nodo_t2205197394, ___objetoCorrecto_2)); }
	inline GameObject_t1756533147 * get_objetoCorrecto_2() const { return ___objetoCorrecto_2; }
	inline GameObject_t1756533147 ** get_address_of_objetoCorrecto_2() { return &___objetoCorrecto_2; }
	inline void set_objetoCorrecto_2(GameObject_t1756533147 * value)
	{
		___objetoCorrecto_2 = value;
		Il2CppCodeGenWriteBarrier((&___objetoCorrecto_2), value);
	}

	inline static int32_t get_offset_of_objetoAsignado_3() { return static_cast<int32_t>(offsetof(Nodo_t2205197394, ___objetoAsignado_3)); }
	inline GameObject_t1756533147 * get_objetoAsignado_3() const { return ___objetoAsignado_3; }
	inline GameObject_t1756533147 ** get_address_of_objetoAsignado_3() { return &___objetoAsignado_3; }
	inline void set_objetoAsignado_3(GameObject_t1756533147 * value)
	{
		___objetoAsignado_3 = value;
		Il2CppCodeGenWriteBarrier((&___objetoAsignado_3), value);
	}

	inline static int32_t get_offset_of_tagCorrecto_4() { return static_cast<int32_t>(offsetof(Nodo_t2205197394, ___tagCorrecto_4)); }
	inline String_t* get_tagCorrecto_4() const { return ___tagCorrecto_4; }
	inline String_t** get_address_of_tagCorrecto_4() { return &___tagCorrecto_4; }
	inline void set_tagCorrecto_4(String_t* value)
	{
		___tagCorrecto_4 = value;
		Il2CppCodeGenWriteBarrier((&___tagCorrecto_4), value);
	}

	inline static int32_t get_offset_of_componente_5() { return static_cast<int32_t>(offsetof(Nodo_t2205197394, ___componente_5)); }
	inline LayerMask_t3188175821  get_componente_5() const { return ___componente_5; }
	inline LayerMask_t3188175821 * get_address_of_componente_5() { return &___componente_5; }
	inline void set_componente_5(LayerMask_t3188175821  value)
	{
		___componente_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODO_T2205197394_H
#ifndef ELIMINAR_T2827770659_H
#define ELIMINAR_T2827770659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Eliminar
struct  Eliminar_t2827770659  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELIMINAR_T2827770659_H
#ifndef ARRASTRAR_T3794172702_H
#define ARRASTRAR_T3794172702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Arrastrar
struct  Arrastrar_t3794172702  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Arrastrar::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Arrastrar_t3794172702, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRASTRAR_T3794172702_H
#ifndef PREGUNTAUI_T2220025660_H
#define PREGUNTAUI_T2220025660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PreguntaUI
struct  PreguntaUI_t2220025660  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PreguntaUI::pregunta
	Text_t356221433 * ___pregunta_2;
	// System.Collections.Generic.List`1<OpcionButton> PreguntaUI::botonesList
	List_1_t1759248134 * ___botonesList_3;

public:
	inline static int32_t get_offset_of_pregunta_2() { return static_cast<int32_t>(offsetof(PreguntaUI_t2220025660, ___pregunta_2)); }
	inline Text_t356221433 * get_pregunta_2() const { return ___pregunta_2; }
	inline Text_t356221433 ** get_address_of_pregunta_2() { return &___pregunta_2; }
	inline void set_pregunta_2(Text_t356221433 * value)
	{
		___pregunta_2 = value;
		Il2CppCodeGenWriteBarrier((&___pregunta_2), value);
	}

	inline static int32_t get_offset_of_botonesList_3() { return static_cast<int32_t>(offsetof(PreguntaUI_t2220025660, ___botonesList_3)); }
	inline List_1_t1759248134 * get_botonesList_3() const { return ___botonesList_3; }
	inline List_1_t1759248134 ** get_address_of_botonesList_3() { return &___botonesList_3; }
	inline void set_botonesList_3(List_1_t1759248134 * value)
	{
		___botonesList_3 = value;
		Il2CppCodeGenWriteBarrier((&___botonesList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREGUNTAUI_T2220025660_H
#ifndef PREGUNTA_T222614998_H
#define PREGUNTA_T222614998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pregunta
struct  Pregunta_t222614998  : public MonoBehaviour_t1158329972
{
public:
	// System.String Pregunta::texto
	String_t* ___texto_2;
	// System.Collections.Generic.List`1<Opcion> Pregunta::opciones
	List_1_t2552034614 * ___opciones_3;

public:
	inline static int32_t get_offset_of_texto_2() { return static_cast<int32_t>(offsetof(Pregunta_t222614998, ___texto_2)); }
	inline String_t* get_texto_2() const { return ___texto_2; }
	inline String_t** get_address_of_texto_2() { return &___texto_2; }
	inline void set_texto_2(String_t* value)
	{
		___texto_2 = value;
		Il2CppCodeGenWriteBarrier((&___texto_2), value);
	}

	inline static int32_t get_offset_of_opciones_3() { return static_cast<int32_t>(offsetof(Pregunta_t222614998, ___opciones_3)); }
	inline List_1_t2552034614 * get_opciones_3() const { return ___opciones_3; }
	inline List_1_t2552034614 ** get_address_of_opciones_3() { return &___opciones_3; }
	inline void set_opciones_3(List_1_t2552034614 * value)
	{
		___opciones_3 = value;
		Il2CppCodeGenWriteBarrier((&___opciones_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREGUNTA_T222614998_H
#ifndef CABLE_T4160380979_H
#define CABLE_T4160380979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cable
struct  Cable_t4160380979  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer Cable::cable
	LineRenderer_t849157671 * ___cable_2;
	// UnityEngine.Transform Cable::extremoIzq
	Transform_t3275118058 * ___extremoIzq_3;
	// UnityEngine.Transform Cable::extremoDer
	Transform_t3275118058 * ___extremoDer_4;

public:
	inline static int32_t get_offset_of_cable_2() { return static_cast<int32_t>(offsetof(Cable_t4160380979, ___cable_2)); }
	inline LineRenderer_t849157671 * get_cable_2() const { return ___cable_2; }
	inline LineRenderer_t849157671 ** get_address_of_cable_2() { return &___cable_2; }
	inline void set_cable_2(LineRenderer_t849157671 * value)
	{
		___cable_2 = value;
		Il2CppCodeGenWriteBarrier((&___cable_2), value);
	}

	inline static int32_t get_offset_of_extremoIzq_3() { return static_cast<int32_t>(offsetof(Cable_t4160380979, ___extremoIzq_3)); }
	inline Transform_t3275118058 * get_extremoIzq_3() const { return ___extremoIzq_3; }
	inline Transform_t3275118058 ** get_address_of_extremoIzq_3() { return &___extremoIzq_3; }
	inline void set_extremoIzq_3(Transform_t3275118058 * value)
	{
		___extremoIzq_3 = value;
		Il2CppCodeGenWriteBarrier((&___extremoIzq_3), value);
	}

	inline static int32_t get_offset_of_extremoDer_4() { return static_cast<int32_t>(offsetof(Cable_t4160380979, ___extremoDer_4)); }
	inline Transform_t3275118058 * get_extremoDer_4() const { return ___extremoDer_4; }
	inline Transform_t3275118058 ** get_address_of_extremoDer_4() { return &___extremoDer_4; }
	inline void set_extremoDer_4(Transform_t3275118058 * value)
	{
		___extremoDer_4 = value;
		Il2CppCodeGenWriteBarrier((&___extremoDer_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CABLE_T4160380979_H
#ifndef DBPREGUNTAS_T353734273_H
#define DBPREGUNTAS_T353734273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBPreguntas
struct  DBPreguntas_t353734273  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<Pregunta> DBPreguntas::listaPreguntas
	List_1_t3886703426 * ___listaPreguntas_2;
	// System.Collections.Generic.List`1<Pregunta> DBPreguntas::backoup
	List_1_t3886703426 * ___backoup_3;

public:
	inline static int32_t get_offset_of_listaPreguntas_2() { return static_cast<int32_t>(offsetof(DBPreguntas_t353734273, ___listaPreguntas_2)); }
	inline List_1_t3886703426 * get_listaPreguntas_2() const { return ___listaPreguntas_2; }
	inline List_1_t3886703426 ** get_address_of_listaPreguntas_2() { return &___listaPreguntas_2; }
	inline void set_listaPreguntas_2(List_1_t3886703426 * value)
	{
		___listaPreguntas_2 = value;
		Il2CppCodeGenWriteBarrier((&___listaPreguntas_2), value);
	}

	inline static int32_t get_offset_of_backoup_3() { return static_cast<int32_t>(offsetof(DBPreguntas_t353734273, ___backoup_3)); }
	inline List_1_t3886703426 * get_backoup_3() const { return ___backoup_3; }
	inline List_1_t3886703426 ** get_address_of_backoup_3() { return &___backoup_3; }
	inline void set_backoup_3(List_1_t3886703426 * value)
	{
		___backoup_3 = value;
		Il2CppCodeGenWriteBarrier((&___backoup_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPREGUNTAS_T353734273_H
#ifndef CONTROLADOR_T2222129253_H
#define CONTROLADOR_T2222129253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controlador
struct  Controlador_t2222129253  : public MonoBehaviour_t1158329972
{
public:
	// DBPreguntas Controlador::dbPreguntas
	DBPreguntas_t353734273 * ___dbPreguntas_2;
	// PreguntaUI Controlador::preguntasUI
	PreguntaUI_t2220025660 * ___preguntasUI_3;

public:
	inline static int32_t get_offset_of_dbPreguntas_2() { return static_cast<int32_t>(offsetof(Controlador_t2222129253, ___dbPreguntas_2)); }
	inline DBPreguntas_t353734273 * get_dbPreguntas_2() const { return ___dbPreguntas_2; }
	inline DBPreguntas_t353734273 ** get_address_of_dbPreguntas_2() { return &___dbPreguntas_2; }
	inline void set_dbPreguntas_2(DBPreguntas_t353734273 * value)
	{
		___dbPreguntas_2 = value;
		Il2CppCodeGenWriteBarrier((&___dbPreguntas_2), value);
	}

	inline static int32_t get_offset_of_preguntasUI_3() { return static_cast<int32_t>(offsetof(Controlador_t2222129253, ___preguntasUI_3)); }
	inline PreguntaUI_t2220025660 * get_preguntasUI_3() const { return ___preguntasUI_3; }
	inline PreguntaUI_t2220025660 ** get_address_of_preguntasUI_3() { return &___preguntasUI_3; }
	inline void set_preguntasUI_3(PreguntaUI_t2220025660 * value)
	{
		___preguntasUI_3 = value;
		Il2CppCodeGenWriteBarrier((&___preguntasUI_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLADOR_T2222129253_H
#ifndef SPAWNER_T534830648_H
#define SPAWNER_T534830648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t534830648  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNER_T534830648_H
#ifndef OPCIONBUTTON_T2390127002_H
#define OPCIONBUTTON_T2390127002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpcionButton
struct  OpcionButton_t2390127002  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text OpcionButton::texto
	Text_t356221433 * ___texto_2;
	// UnityEngine.UI.Button OpcionButton::button
	Button_t2872111280 * ___button_3;
	// UnityEngine.UI.Image OpcionButton::imagen
	Image_t2042527209 * ___imagen_4;
	// UnityEngine.Color OpcionButton::originalColor
	Color_t2020392075  ___originalColor_5;
	// Opcion OpcionButton::<opcion>k__BackingField
	Opcion_t3182913482 * ___U3CopcionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_texto_2() { return static_cast<int32_t>(offsetof(OpcionButton_t2390127002, ___texto_2)); }
	inline Text_t356221433 * get_texto_2() const { return ___texto_2; }
	inline Text_t356221433 ** get_address_of_texto_2() { return &___texto_2; }
	inline void set_texto_2(Text_t356221433 * value)
	{
		___texto_2 = value;
		Il2CppCodeGenWriteBarrier((&___texto_2), value);
	}

	inline static int32_t get_offset_of_button_3() { return static_cast<int32_t>(offsetof(OpcionButton_t2390127002, ___button_3)); }
	inline Button_t2872111280 * get_button_3() const { return ___button_3; }
	inline Button_t2872111280 ** get_address_of_button_3() { return &___button_3; }
	inline void set_button_3(Button_t2872111280 * value)
	{
		___button_3 = value;
		Il2CppCodeGenWriteBarrier((&___button_3), value);
	}

	inline static int32_t get_offset_of_imagen_4() { return static_cast<int32_t>(offsetof(OpcionButton_t2390127002, ___imagen_4)); }
	inline Image_t2042527209 * get_imagen_4() const { return ___imagen_4; }
	inline Image_t2042527209 ** get_address_of_imagen_4() { return &___imagen_4; }
	inline void set_imagen_4(Image_t2042527209 * value)
	{
		___imagen_4 = value;
		Il2CppCodeGenWriteBarrier((&___imagen_4), value);
	}

	inline static int32_t get_offset_of_originalColor_5() { return static_cast<int32_t>(offsetof(OpcionButton_t2390127002, ___originalColor_5)); }
	inline Color_t2020392075  get_originalColor_5() const { return ___originalColor_5; }
	inline Color_t2020392075 * get_address_of_originalColor_5() { return &___originalColor_5; }
	inline void set_originalColor_5(Color_t2020392075  value)
	{
		___originalColor_5 = value;
	}

	inline static int32_t get_offset_of_U3CopcionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpcionButton_t2390127002, ___U3CopcionU3Ek__BackingField_6)); }
	inline Opcion_t3182913482 * get_U3CopcionU3Ek__BackingField_6() const { return ___U3CopcionU3Ek__BackingField_6; }
	inline Opcion_t3182913482 ** get_address_of_U3CopcionU3Ek__BackingField_6() { return &___U3CopcionU3Ek__BackingField_6; }
	inline void set_U3CopcionU3Ek__BackingField_6(Opcion_t3182913482 * value)
	{
		___U3CopcionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CopcionU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCIONBUTTON_T2390127002_H
#ifndef LAYOUTGROUP_T3962498969_H
#define LAYOUTGROUP_T3962498969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t3962498969  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t3387826427 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3349966182 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t154385424  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2243707579  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2243707579  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2243707579  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t2719087314 * ___m_RectChildren_9;

public:
	inline static int32_t get_offset_of_m_Padding_2() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_Padding_2)); }
	inline RectOffset_t3387826427 * get_m_Padding_2() const { return ___m_Padding_2; }
	inline RectOffset_t3387826427 ** get_address_of_m_Padding_2() { return &___m_Padding_2; }
	inline void set_m_Padding_2(RectOffset_t3387826427 * value)
	{
		___m_Padding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_2), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_3() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_ChildAlignment_3)); }
	inline int32_t get_m_ChildAlignment_3() const { return ___m_ChildAlignment_3; }
	inline int32_t* get_address_of_m_ChildAlignment_3() { return &___m_ChildAlignment_3; }
	inline void set_m_ChildAlignment_3(int32_t value)
	{
		___m_ChildAlignment_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_Rect_4)); }
	inline RectTransform_t3349966182 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3349966182 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3349966182 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_4), value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t154385424  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t154385424 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t154385424  value)
	{
		___m_Tracker_5 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_TotalMinSize_6)); }
	inline Vector2_t2243707579  get_m_TotalMinSize_6() const { return ___m_TotalMinSize_6; }
	inline Vector2_t2243707579 * get_address_of_m_TotalMinSize_6() { return &___m_TotalMinSize_6; }
	inline void set_m_TotalMinSize_6(Vector2_t2243707579  value)
	{
		___m_TotalMinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_TotalPreferredSize_7)); }
	inline Vector2_t2243707579  get_m_TotalPreferredSize_7() const { return ___m_TotalPreferredSize_7; }
	inline Vector2_t2243707579 * get_address_of_m_TotalPreferredSize_7() { return &___m_TotalPreferredSize_7; }
	inline void set_m_TotalPreferredSize_7(Vector2_t2243707579  value)
	{
		___m_TotalPreferredSize_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_TotalFlexibleSize_8)); }
	inline Vector2_t2243707579  get_m_TotalFlexibleSize_8() const { return ___m_TotalFlexibleSize_8; }
	inline Vector2_t2243707579 * get_address_of_m_TotalFlexibleSize_8() { return &___m_TotalFlexibleSize_8; }
	inline void set_m_TotalFlexibleSize_8(Vector2_t2243707579  value)
	{
		___m_TotalFlexibleSize_8 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t3962498969, ___m_RectChildren_9)); }
	inline List_1_t2719087314 * get_m_RectChildren_9() const { return ___m_RectChildren_9; }
	inline List_1_t2719087314 ** get_address_of_m_RectChildren_9() { return &___m_RectChildren_9; }
	inline void set_m_RectChildren_9(List_1_t2719087314 * value)
	{
		___m_RectChildren_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T3962498969_H
#ifndef BASEMESHEFFECT_T1728560551_H
#define BASEMESHEFFECT_T1728560551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t1728560551  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t2426225576 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t1728560551, ___m_Graphic_2)); }
	inline Graphic_t2426225576 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t2426225576 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t2426225576 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T1728560551_H
#ifndef POSITIONASUV1_T1102546563_H
#define POSITIONASUV1_T1102546563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.PositionAsUV1
struct  PositionAsUV1_t1102546563  : public BaseMeshEffect_t1728560551
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASUV1_T1102546563_H
#ifndef HORIZONTALORVERTICALLAYOUTGROUP_T1968298610_H
#define HORIZONTALORVERTICALLAYOUTGROUP_T1968298610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct  HorizontalOrVerticalLayoutGroup_t1968298610  : public LayoutGroup_t3962498969
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_10;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_11;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_14;

public:
	inline static int32_t get_offset_of_m_Spacing_10() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t1968298610, ___m_Spacing_10)); }
	inline float get_m_Spacing_10() const { return ___m_Spacing_10; }
	inline float* get_address_of_m_Spacing_10() { return &___m_Spacing_10; }
	inline void set_m_Spacing_10(float value)
	{
		___m_Spacing_10 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_11() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t1968298610, ___m_ChildForceExpandWidth_11)); }
	inline bool get_m_ChildForceExpandWidth_11() const { return ___m_ChildForceExpandWidth_11; }
	inline bool* get_address_of_m_ChildForceExpandWidth_11() { return &___m_ChildForceExpandWidth_11; }
	inline void set_m_ChildForceExpandWidth_11(bool value)
	{
		___m_ChildForceExpandWidth_11 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t1968298610, ___m_ChildForceExpandHeight_12)); }
	inline bool get_m_ChildForceExpandHeight_12() const { return ___m_ChildForceExpandHeight_12; }
	inline bool* get_address_of_m_ChildForceExpandHeight_12() { return &___m_ChildForceExpandHeight_12; }
	inline void set_m_ChildForceExpandHeight_12(bool value)
	{
		___m_ChildForceExpandHeight_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t1968298610, ___m_ChildControlWidth_13)); }
	inline bool get_m_ChildControlWidth_13() const { return ___m_ChildControlWidth_13; }
	inline bool* get_address_of_m_ChildControlWidth_13() { return &___m_ChildControlWidth_13; }
	inline void set_m_ChildControlWidth_13(bool value)
	{
		___m_ChildControlWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t1968298610, ___m_ChildControlHeight_14)); }
	inline bool get_m_ChildControlHeight_14() const { return ___m_ChildControlHeight_14; }
	inline bool* get_address_of_m_ChildControlHeight_14() { return &___m_ChildControlHeight_14; }
	inline void set_m_ChildControlHeight_14(bool value)
	{
		___m_ChildControlHeight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALORVERTICALLAYOUTGROUP_T1968298610_H
#ifndef SHADOW_T4269599528_H
#define SHADOW_T4269599528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t4269599528  : public BaseMeshEffect_t1728560551
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2020392075  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2243707579  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectColor_3)); }
	inline Color_t2020392075  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2020392075 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2020392075  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectDistance_4)); }
	inline Vector2_t2243707579  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2243707579 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2243707579  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T4269599528_H
#ifndef OUTLINE_T1417504278_H
#define OUTLINE_T1417504278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Outline
struct  Outline_t1417504278  : public Shadow_t4269599528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINE_T1417504278_H
#ifndef VERTICALLAYOUTGROUP_T2468316403_H
#define VERTICALLAYOUTGROUP_T2468316403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VerticalLayoutGroup
struct  VerticalLayoutGroup_t2468316403  : public HorizontalOrVerticalLayoutGroup_t1968298610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALLAYOUTGROUP_T2468316403_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (LayoutRebuilder_t2155218138), -1, sizeof(LayoutRebuilder_t2155218138_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1700[9] = 
{
	LayoutRebuilder_t2155218138::get_offset_of_m_ToRebuild_0(),
	LayoutRebuilder_t2155218138::get_offset_of_m_CachedHashFromTransform_1(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_s_Rebuilders_2(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_5(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_6(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_7(),
	LayoutRebuilder_t2155218138_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (LayoutUtility_t4076838048), -1, sizeof(LayoutUtility_t4076838048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1701[8] = 
{
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_4(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache6_6(),
	LayoutUtility_t4076838048_StaticFields::get_offset_of_U3CU3Ef__amU24cache7_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (VerticalLayoutGroup_t2468316403), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (ReflectionMethodsCache_t3343836395), -1, sizeof(ReflectionMethodsCache_t3343836395_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1707[7] = 
{
	ReflectionMethodsCache_t3343836395::get_offset_of_raycast3D_0(),
	ReflectionMethodsCache_t3343836395::get_offset_of_raycast3DAll_1(),
	ReflectionMethodsCache_t3343836395::get_offset_of_raycast2D_2(),
	ReflectionMethodsCache_t3343836395::get_offset_of_getRayIntersectionAll_3(),
	ReflectionMethodsCache_t3343836395::get_offset_of_getRayIntersectionAllNonAlloc_4(),
	ReflectionMethodsCache_t3343836395::get_offset_of_getRaycastNonAlloc_5(),
	ReflectionMethodsCache_t3343836395_StaticFields::get_offset_of_s_ReflectionMethodsCache_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (Raycast3DCallback_t3928470916), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (Raycast2DCallback_t2260664863), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (RaycastAllCallback_t3435657708), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (GetRayIntersectionAllCallback_t2213949596), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (GetRayIntersectionAllNonAllocCallback_t3246763936), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (GetRaycastNonAllocCallback_t1074830945), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (VertexHelper_t385374196), -1, sizeof(VertexHelper_t385374196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1714[11] = 
{
	VertexHelper_t385374196::get_offset_of_m_Positions_0(),
	VertexHelper_t385374196::get_offset_of_m_Colors_1(),
	VertexHelper_t385374196::get_offset_of_m_Uv0S_2(),
	VertexHelper_t385374196::get_offset_of_m_Uv1S_3(),
	VertexHelper_t385374196::get_offset_of_m_Uv2S_4(),
	VertexHelper_t385374196::get_offset_of_m_Uv3S_5(),
	VertexHelper_t385374196::get_offset_of_m_Normals_6(),
	VertexHelper_t385374196::get_offset_of_m_Tangents_7(),
	VertexHelper_t385374196::get_offset_of_m_Indices_8(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultTangent_9(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultNormal_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (BaseVertexEffect_t2504093552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (BaseMeshEffect_t1728560551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[1] = 
{
	BaseMeshEffect_t1728560551::get_offset_of_m_Graphic_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (Outline_t1417504278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (PositionAsUV1_t1102546563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (Shadow_t4269599528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[4] = 
{
	Shadow_t4269599528::get_offset_of_m_EffectColor_3(),
	Shadow_t4269599528::get_offset_of_m_EffectDistance_4(),
	Shadow_t4269599528::get_offset_of_m_UseGraphicAlpha_5(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305141), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1722[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (U24ArrayTypeU3D12_t1568637717)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t1568637717 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (U3CModuleU3E_t3783534231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (Menu_t4261767481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (Controlador_t2222129253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[2] = 
{
	Controlador_t2222129253::get_offset_of_dbPreguntas_2(),
	Controlador_t2222129253::get_offset_of_preguntasUI_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (DBPreguntas_t353734273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1727[2] = 
{
	DBPreguntas_t353734273::get_offset_of_listaPreguntas_2(),
	DBPreguntas_t353734273::get_offset_of_backoup_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (Opcion_t3182913482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1728[2] = 
{
	Opcion_t3182913482::get_offset_of_texto_0(),
	Opcion_t3182913482::get_offset_of_correcto_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (OpcionButton_t2390127002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[5] = 
{
	OpcionButton_t2390127002::get_offset_of_texto_2(),
	OpcionButton_t2390127002::get_offset_of_button_3(),
	OpcionButton_t2390127002::get_offset_of_imagen_4(),
	OpcionButton_t2390127002::get_offset_of_originalColor_5(),
	OpcionButton_t2390127002::get_offset_of_U3CopcionU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (U3CconstruirButtonU3Ec__AnonStorey0_t169507817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1730[2] = 
{
	U3CconstruirButtonU3Ec__AnonStorey0_t169507817::get_offset_of_callback_0(),
	U3CconstruirButtonU3Ec__AnonStorey0_t169507817::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (Pregunta_t222614998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1731[2] = 
{
	Pregunta_t222614998::get_offset_of_texto_2(),
	Pregunta_t222614998::get_offset_of_opciones_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (PreguntaUI_t2220025660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1732[2] = 
{
	PreguntaUI_t2220025660::get_offset_of_pregunta_2(),
	PreguntaUI_t2220025660::get_offset_of_botonesList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (Arrastrar_t3794172702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1733[1] = 
{
	Arrastrar_t3794172702::get_offset_of_z_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (Cable_t4160380979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1734[3] = 
{
	Cable_t4160380979::get_offset_of_cable_2(),
	Cable_t4160380979::get_offset_of_extremoIzq_3(),
	Cable_t4160380979::get_offset_of_extremoDer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (Componentes_t2663655339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1735[1] = 
{
	Componentes_t2663655339::get_offset_of_Nombre_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (Conectar_t859773857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[3] = 
{
	Conectar_t859773857::get_offset_of_conector_2(),
	Conectar_t859773857::get_offset_of_cable_3(),
	Conectar_t859773857::get_offset_of_nuevaPosicion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (ControladorPuzzle_t1338892433), -1, sizeof(ControladorPuzzle_t1338892433_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1737[4] = 
{
	ControladorPuzzle_t1338892433_StaticFields::get_offset_of_instance_2(),
	ControladorPuzzle_t1338892433::get_offset_of_nodos_3(),
	ControladorPuzzle_t1338892433::get_offset_of_panelError_4(),
	ControladorPuzzle_t1338892433::get_offset_of_panelOk_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (Eliminar_t2827770659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (Nodo_t2205197394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1739[4] = 
{
	Nodo_t2205197394::get_offset_of_objetoCorrecto_2(),
	Nodo_t2205197394::get_offset_of_objetoAsignado_3(),
	Nodo_t2205197394::get_offset_of_tagCorrecto_4(),
	Nodo_t2205197394::get_offset_of_componente_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (Spawner_t534830648), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

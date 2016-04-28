#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct Transform_1_t2986;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21665_gshared (Transform_1_t2986 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21665(__this, ___object, ___method, method) (( void (*) (Transform_1_t2986 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21665_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2976  Transform_1_Invoke_m21666_gshared (Transform_1_t2986 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21666(__this, ___key, ___value, method) (( KeyValuePair_2_t2976  (*) (Transform_1_t2986 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m21666_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21667_gshared (Transform_1_t2986 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21667(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2986 *, uint64_t, Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21667_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2976  Transform_1_EndInvoke_m21668_gshared (Transform_1_t2986 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21668(__this, ___result, method) (( KeyValuePair_2_t2976  (*) (Transform_1_t2986 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21668_gshared)(__this, ___result, method)

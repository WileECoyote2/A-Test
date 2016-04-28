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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m6596(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1246 *, UnityAction_1_t1247 *, UnityAction_1_t1247 *, const MethodInfo*))ObjectPool_1__ctor_m24433_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m26390(__this, method) (( int32_t (*) (ObjectPool_1_t1246 *, const MethodInfo*))ObjectPool_1_get_countAll_m24435_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m26391(__this, ___value, method) (( void (*) (ObjectPool_1_t1246 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m24437_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m6597(__this, method) (( List_1_t820 * (*) (ObjectPool_1_t1246 *, const MethodInfo*))ObjectPool_1_Get_m24439_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m6598(__this, ___element, method) (( void (*) (ObjectPool_1_t1246 *, List_1_t820 *, const MethodInfo*))ObjectPool_1_Release_m24441_gshared)(__this, ___element, method)

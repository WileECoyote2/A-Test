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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2987;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2974;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21669_gshared (ShimEnumerator_t2987 * __this, Dictionary_2_t2974 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21669(__this, ___host, method) (( void (*) (ShimEnumerator_t2987 *, Dictionary_2_t2974 *, const MethodInfo*))ShimEnumerator__ctor_m21669_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21670_gshared (ShimEnumerator_t2987 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21670(__this, method) (( bool (*) (ShimEnumerator_t2987 *, const MethodInfo*))ShimEnumerator_MoveNext_m21670_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m21671_gshared (ShimEnumerator_t2987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21671(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2987 *, const MethodInfo*))ShimEnumerator_get_Entry_m21671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21672_gshared (ShimEnumerator_t2987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21672(__this, method) (( Object_t * (*) (ShimEnumerator_t2987 *, const MethodInfo*))ShimEnumerator_get_Key_m21672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21673_gshared (ShimEnumerator_t2987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21673(__this, method) (( Object_t * (*) (ShimEnumerator_t2987 *, const MethodInfo*))ShimEnumerator_get_Value_m21673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21674_gshared (ShimEnumerator_t2987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21674(__this, method) (( Object_t * (*) (ShimEnumerator_t2987 *, const MethodInfo*))ShimEnumerator_get_Current_m21674_gshared)(__this, method)

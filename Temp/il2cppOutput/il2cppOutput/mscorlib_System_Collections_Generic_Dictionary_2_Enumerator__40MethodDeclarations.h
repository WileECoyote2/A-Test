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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3358;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26954_gshared (Enumerator_t3364 * __this, Dictionary_2_t3358 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26954(__this, ___dictionary, method) (( void (*) (Enumerator_t3364 *, Dictionary_2_t3358 *, const MethodInfo*))Enumerator__ctor_m26954_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26955_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26955(__this, method) (( Object_t * (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26955_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26956_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26956(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26956_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26957_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26957(__this, method) (( Object_t * (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26957_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26958_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26958(__this, method) (( Object_t * (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26959_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26959(__this, method) (( bool (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_MoveNext_m26959_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t3360  Enumerator_get_Current_m26960_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26960(__this, method) (( KeyValuePair_2_t3360  (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_get_Current_m26960_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26961_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26961(__this, method) (( Object_t * (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_get_CurrentKey_m26961_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m26962_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26962(__this, method) (( bool (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_get_CurrentValue_m26962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m26963_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26963(__this, method) (( void (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_VerifyState_m26963_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26964_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26964(__this, method) (( void (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_VerifyCurrent_m26964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m26965_gshared (Enumerator_t3364 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26965(__this, method) (( void (*) (Enumerator_t3364 *, const MethodInfo*))Enumerator_Dispose_m26965_gshared)(__this, method)

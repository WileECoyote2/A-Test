﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3018;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22245_gshared (Enumerator_t3023 * __this, Dictionary_2_t3018 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m22245(__this, ___dictionary, method) (( void (*) (Enumerator_t3023 *, Dictionary_2_t3018 *, const MethodInfo*))Enumerator__ctor_m22245_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22246_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22246(__this, method) (( Object_t * (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22247_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22247(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22247_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22248_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22248(__this, method) (( Object_t * (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22249_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22249(__this, method) (( Object_t * (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22250_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m22250(__this, method) (( bool (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_MoveNext_m22250_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2995  Enumerator_get_Current_m22251_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m22251(__this, method) (( KeyValuePair_2_t2995  (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_get_Current_m22251_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m22252_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m22252(__this, method) (( Object_t * (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_get_CurrentKey_m22252_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2529  Enumerator_get_CurrentValue_m22253_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m22253(__this, method) (( KeyValuePair_2_t2529  (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_get_CurrentValue_m22253_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m22254_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m22254(__this, method) (( void (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_VerifyState_m22254_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22255_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m22255(__this, method) (( void (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_VerifyCurrent_m22255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m22256_gshared (Enumerator_t3023 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m22256(__this, method) (( void (*) (Enumerator_t3023 *, const MethodInfo*))Enumerator_Dispose_m22256_gshared)(__this, method)

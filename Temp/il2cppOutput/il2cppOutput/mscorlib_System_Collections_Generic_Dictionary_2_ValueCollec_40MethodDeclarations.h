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

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3018;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22275_gshared (Enumerator_t3026 * __this, Dictionary_2_t3018 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m22275(__this, ___host, method) (( void (*) (Enumerator_t3026 *, Dictionary_2_t3018 *, const MethodInfo*))Enumerator__ctor_m22275_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22276_gshared (Enumerator_t3026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22276(__this, method) (( Object_t * (*) (Enumerator_t3026 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m22277_gshared (Enumerator_t3026 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m22277(__this, method) (( void (*) (Enumerator_t3026 *, const MethodInfo*))Enumerator_Dispose_m22277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22278_gshared (Enumerator_t3026 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m22278(__this, method) (( bool (*) (Enumerator_t3026 *, const MethodInfo*))Enumerator_MoveNext_m22278_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2529  Enumerator_get_Current_m22279_gshared (Enumerator_t3026 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m22279(__this, method) (( KeyValuePair_2_t2529  (*) (Enumerator_t3026 *, const MethodInfo*))Enumerator_get_Current_m22279_gshared)(__this, method)

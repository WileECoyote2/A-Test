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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2486;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m15081_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1__ctor_m15081(__this, method) (( void (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1__ctor_m15081_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
extern "C" void Stack_1__ctor_m15082_gshared (Stack_1_t2486 * __this, int32_t ___count, const MethodInfo* method);
#define Stack_1__ctor_m15082(__this, ___count, method) (( void (*) (Stack_1_t2486 *, int32_t, const MethodInfo*))Stack_1__ctor_m15082_gshared)(__this, ___count, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m15084_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m15084(__this, method) (( bool (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m15084_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m15086_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m15086(__this, method) (( Object_t * (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m15086_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m15088_gshared (Stack_1_t2486 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m15088(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2486 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m15088_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15090_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15090(__this, method) (( Object_t* (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15090_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m15092_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m15092(__this, method) (( Object_t * (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m15092_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C" void Stack_1_Clear_m15093_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_Clear_m15093(__this, method) (( void (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_Clear_m15093_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m15095_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_Peek_m15095(__this, method) (( Object_t * (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_Peek_m15095_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m15096_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_Pop_m15096(__this, method) (( Object_t * (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_Pop_m15096_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m15097_gshared (Stack_1_t2486 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m15097(__this, ___t, method) (( void (*) (Stack_1_t2486 *, Object_t *, const MethodInfo*))Stack_1_Push_m15097_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m15099_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m15099(__this, method) (( int32_t (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_get_Count_m15099_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2487  Stack_1_GetEnumerator_m15101_gshared (Stack_1_t2486 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m15101(__this, method) (( Enumerator_t2487  (*) (Stack_1_t2486 *, const MethodInfo*))Stack_1_GetEnumerator_m15101_gshared)(__this, method)

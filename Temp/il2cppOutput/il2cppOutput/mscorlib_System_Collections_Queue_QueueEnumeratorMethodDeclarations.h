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

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t1846;
// System.Collections.Queue
struct Queue_t1847;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m10631 (QueueEnumerator_t1846 * __this, Queue_t1847 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m10632 (QueueEnumerator_t1846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m10633 (QueueEnumerator_t1846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

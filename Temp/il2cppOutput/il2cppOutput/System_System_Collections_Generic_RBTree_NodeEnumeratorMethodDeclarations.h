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

// System.Collections.Generic.RBTree
struct RBTree_t1478;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1476;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree/NodeEnumerator::.ctor(System.Collections.Generic.RBTree)
extern "C" void NodeEnumerator__ctor_m7575 (NodeEnumerator_t1477 * __this, RBTree_t1478 * ___tree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.RBTree/NodeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * NodeEnumerator_System_Collections_IEnumerator_get_Current_m7576 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/NodeEnumerator::get_Current()
extern "C" Node_t1476 * NodeEnumerator_get_Current_m7577 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.RBTree/NodeEnumerator::MoveNext()
extern "C" bool NodeEnumerator_MoveNext_m7578 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Dispose()
extern "C" void NodeEnumerator_Dispose_m7579 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_version()
extern "C" void NodeEnumerator_check_version_m7580 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_current()
extern "C" void NodeEnumerator_check_current_m7581 (NodeEnumerator_t1477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

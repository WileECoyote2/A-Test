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

// Pathfinding.ThreadControlQueue
struct ThreadControlQueue_t65;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.ThreadControlQueue::.ctor(System.Int32)
extern "C" void ThreadControlQueue__ctor_m554 (ThreadControlQueue_t65 * __this, int32_t ___numReceivers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_IsEmpty()
extern "C" bool ThreadControlQueue_get_IsEmpty_m555 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_IsTerminating()
extern "C" bool ThreadControlQueue_get_IsTerminating_m556 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Block()
extern "C" void ThreadControlQueue_Block_m557 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Unblock()
extern "C" void ThreadControlQueue_Unblock_m558 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Lock()
extern "C" void ThreadControlQueue_Lock_m559 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Unlock()
extern "C" void ThreadControlQueue_Unlock_m560 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_AllReceiversBlocked()
extern "C" bool ThreadControlQueue_get_AllReceiversBlocked_m561 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::PushFront(Pathfinding.Path)
extern "C" void ThreadControlQueue_PushFront_m562 (ThreadControlQueue_t65 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Push(Pathfinding.Path)
extern "C" void ThreadControlQueue_Push_m563 (ThreadControlQueue_t65 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Starving()
extern "C" void ThreadControlQueue_Starving_m564 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::TerminateReceivers()
extern "C" void ThreadControlQueue_TerminateReceivers_m565 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.ThreadControlQueue::Pop()
extern "C" Path_t10 * ThreadControlQueue_Pop_m566 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::ReceiverTerminated()
extern "C" void ThreadControlQueue_ReceiverTerminated_m567 (ThreadControlQueue_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.ThreadControlQueue::PopNoBlock(System.Boolean)
extern "C" Path_t10 * ThreadControlQueue_PopNoBlock_m568 (ThreadControlQueue_t65 * __this, bool ___blockedBefore, const MethodInfo* method) IL2CPP_METHOD_ATTR;

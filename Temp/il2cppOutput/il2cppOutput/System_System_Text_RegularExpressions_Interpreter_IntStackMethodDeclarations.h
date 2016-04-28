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
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m8641 (IntStack_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m8642 (IntStack_t1647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m8643 (IntStack_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m8644 (IntStack_t1647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void IntStack_t1647_marshal(const IntStack_t1647& unmarshaled, IntStack_t1647_marshaled& marshaled);
extern "C" void IntStack_t1647_marshal_back(const IntStack_t1647_marshaled& marshaled, IntStack_t1647& unmarshaled);
extern "C" void IntStack_t1647_marshal_cleanup(IntStack_t1647_marshaled& marshaled);

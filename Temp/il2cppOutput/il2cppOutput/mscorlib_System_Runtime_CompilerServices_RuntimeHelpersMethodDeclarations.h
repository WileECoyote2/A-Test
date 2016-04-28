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

// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.IntPtr)
extern "C" void RuntimeHelpers_InitializeArray_m9901 (Object_t * __this /* static, unused */, Array_t * ___array, IntPtr_t ___fldHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" void RuntimeHelpers_InitializeArray_m1939 (Object_t * __this /* static, unused */, Array_t * ___array, RuntimeFieldHandle_t1734  ___fldHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C" int32_t RuntimeHelpers_get_OffsetToStringData_m9902 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::RunClassConstructor(System.IntPtr)
extern "C" void RuntimeHelpers_RunClassConstructor_m9903 (Object_t * __this /* static, unused */, IntPtr_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::RunClassConstructor(System.RuntimeTypeHandle)
extern "C" void RuntimeHelpers_RunClassConstructor_m9020 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t1717  ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;

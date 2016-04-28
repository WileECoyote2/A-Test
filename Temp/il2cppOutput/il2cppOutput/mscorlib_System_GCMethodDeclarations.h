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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Int32 System.GC::get_MaxGeneration()
extern "C" int32_t GC_get_MaxGeneration_m13709 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::InternalCollect(System.Int32)
extern "C" void GC_InternalCollect_m13710 (Object_t * __this /* static, unused */, int32_t ___generation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::Collect()
extern "C" void GC_Collect_m1852 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.GC::GetTotalMemory(System.Boolean)
extern "C" int64_t GC_GetTotalMemory_m1902 (Object_t * __this /* static, unused */, bool ___forceFullCollection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" void GC_SuppressFinalize_m4329 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.GC::CollectionCount(System.Int32)
extern "C" int32_t GC_CollectionCount_m1901 (Object_t * __this /* static, unused */, int32_t ___generation, const MethodInfo* method) IL2CPP_METHOD_ATTR;

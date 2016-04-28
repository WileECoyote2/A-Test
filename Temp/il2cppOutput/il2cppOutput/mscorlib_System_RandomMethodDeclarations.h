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

// System.Random
struct Random_t194;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m2175 (Random_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C" void Random__ctor_m2058 (Random_t194 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m13977 (Random_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next()
extern "C" int32_t Random_Next_m13978 (Random_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32)
extern "C" int32_t Random_Next_m13979 (Random_t194 * __this, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C" int32_t Random_Next_m13980 (Random_t194 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::NextBytes(System.Byte[])
extern "C" void Random_NextBytes_m13981 (Random_t194 * __this, ByteU5BU5D_t29* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::NextDouble()
extern "C" double Random_NextDouble_m13982 (Random_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

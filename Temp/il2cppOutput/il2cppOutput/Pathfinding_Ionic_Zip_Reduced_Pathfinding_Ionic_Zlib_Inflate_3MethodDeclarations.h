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

// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t1046;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_FlushTy.h"

// System.Void Pathfinding.Ionic.Zlib.InflateManager::.ctor(System.Boolean)
extern "C" void InflateManager__ctor_m5028 (InflateManager_t1046 * __this, bool ___expectRfc1950HeaderBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.cctor()
extern "C" void InflateManager__cctor_m5029 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C" bool InflateManager_get_HandleRfc1950HeaderBytes_m5030 (InflateManager_t1046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
extern "C" int32_t InflateManager_Reset_m5031 (InflateManager_t1046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
extern "C" int32_t InflateManager_End_m5032 (InflateManager_t1046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,System.Int32)
extern "C" int32_t InflateManager_Initialize_m5033 (InflateManager_t1046 * __this, ZlibCodec_t1032 * ___codec, int32_t ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t InflateManager_Inflate_m5034 (InflateManager_t1046 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;

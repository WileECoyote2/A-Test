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

// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_t1029;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Deflate.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.DeflateFlavor)
extern "C" void Config__ctor_m4937 (Config_t1029 * __this, int32_t ___goodLength, int32_t ___maxLazy, int32_t ___niceLength, int32_t ___maxChainLength, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.cctor()
extern "C" void Config__cctor_m4938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager/Config::Lookup(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C" Config_t1029 * Config_Lookup_m4939 (Object_t * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;

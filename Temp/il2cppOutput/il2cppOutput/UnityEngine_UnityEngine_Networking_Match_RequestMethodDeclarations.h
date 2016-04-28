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

// UnityEngine.Networking.Match.Request
struct Request_t685;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"

// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m3664 (Request_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m3665 (Request_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m3666 (Request_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m3667 (Request_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C" String_t* Request_ToString_m3668 (Request_t685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t1028;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_BlockSt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_FlushTy.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
extern "C" void CompressFunc__ctor_m4933 (CompressFunc_t1028 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t CompressFunc_Invoke_m4934 (CompressFunc_t1028 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_CompressFunc_t1028(Il2CppObject* delegate, int32_t ___flush);
// System.IAsyncResult Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::BeginInvoke(Pathfinding.Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
extern "C" Object_t * CompressFunc_BeginInvoke_m4935 (CompressFunc_t1028 * __this, int32_t ___flush, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompressFunc_EndInvoke_m4936 (CompressFunc_t1028 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

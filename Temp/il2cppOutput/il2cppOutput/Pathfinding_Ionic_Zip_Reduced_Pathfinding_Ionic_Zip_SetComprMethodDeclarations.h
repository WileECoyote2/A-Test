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

// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t978;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "mscorlib_System_String.h"

// System.Void Pathfinding.Ionic.Zip.SetCompressionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SetCompressionCallback__ctor_m4536 (SetCompressionCallback_t978 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.SetCompressionCallback::Invoke(System.String,System.String)
extern "C" int32_t SetCompressionCallback_Invoke_m4537 (SetCompressionCallback_t978 * __this, String_t* ___localFileName, String_t* ___fileNameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_SetCompressionCallback_t978(Il2CppObject* delegate, String_t* ___localFileName, String_t* ___fileNameInArchive);
// System.IAsyncResult Pathfinding.Ionic.Zip.SetCompressionCallback::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * SetCompressionCallback_BeginInvoke_m4538 (SetCompressionCallback_t978 * __this, String_t* ___localFileName, String_t* ___fileNameInArchive, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.SetCompressionCallback::EndInvoke(System.IAsyncResult)
extern "C" int32_t SetCompressionCallback_EndInvoke_m4539 (SetCompressionCallback_t978 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

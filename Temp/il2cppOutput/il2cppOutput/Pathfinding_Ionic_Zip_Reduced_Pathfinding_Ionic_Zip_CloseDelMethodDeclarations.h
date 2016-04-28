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

// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t977;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Pathfinding.Ionic.Zip.CloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CloseDelegate__ctor_m4532 (CloseDelegate_t977 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CloseDelegate::Invoke(System.String,System.IO.Stream)
extern "C" void CloseDelegate_Invoke_m4533 (CloseDelegate_t977 * __this, String_t* ___entryName, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CloseDelegate_t977(Il2CppObject* delegate, String_t* ___entryName, Stream_t448 * ___stream);
// System.IAsyncResult Pathfinding.Ionic.Zip.CloseDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * CloseDelegate_BeginInvoke_m4534 (CloseDelegate_t977 * __this, String_t* ___entryName, Stream_t448 * ___stream, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CloseDelegate::EndInvoke(System.IAsyncResult)
extern "C" void CloseDelegate_EndInvoke_m4535 (CloseDelegate_t977 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

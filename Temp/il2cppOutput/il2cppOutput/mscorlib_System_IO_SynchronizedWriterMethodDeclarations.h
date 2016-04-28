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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1907;
// System.IO.TextWriter
struct TextWriter_t949;
// System.Char[]
struct CharU5BU5D_t469;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m11245 (SynchronizedWriter_t1907 * __this, TextWriter_t949 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m11246 (SynchronizedWriter_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m11247 (SynchronizedWriter_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m11248 (SynchronizedWriter_t1907 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m11249 (SynchronizedWriter_t1907 * __this, CharU5BU5D_t469* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m11250 (SynchronizedWriter_t1907 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C" void SynchronizedWriter_Write_m11251 (SynchronizedWriter_t1907 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object[])
extern "C" void SynchronizedWriter_Write_m11252 (SynchronizedWriter_t1907 * __this, String_t* ___format, ObjectU5BU5D_t408* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m11253 (SynchronizedWriter_t1907 * __this, CharU5BU5D_t469* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m11254 (SynchronizedWriter_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m11255 (SynchronizedWriter_t1907 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m11256 (SynchronizedWriter_t1907 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object[])
extern "C" void SynchronizedWriter_WriteLine_m11257 (SynchronizedWriter_t1907 * __this, String_t* ___format, ObjectU5BU5D_t408* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::set_NewLine(System.String)
extern "C" void SynchronizedWriter_set_NewLine_m11258 (SynchronizedWriter_t1907 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

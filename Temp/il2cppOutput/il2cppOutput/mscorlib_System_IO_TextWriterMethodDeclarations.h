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

// System.IO.TextWriter
struct TextWriter_t949;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t469;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m11227 (TextWriter_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m11228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::set_NewLine(System.String)
extern "C" void TextWriter_set_NewLine_m11229 (TextWriter_t949 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m11230 (TextWriter_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m11231 (TextWriter_t949 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m11232 (TextWriter_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m11233 (TextWriter_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t949 * TextWriter_Synchronized_m11234 (Object_t * __this /* static, unused */, TextWriter_t949 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m11235 (TextWriter_t949 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m11236 (TextWriter_t949 * __this, CharU5BU5D_t469* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m11237 (TextWriter_t949 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object)
extern "C" void TextWriter_Write_m11238 (TextWriter_t949 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object[])
extern "C" void TextWriter_Write_m11239 (TextWriter_t949 * __this, String_t* ___format, ObjectU5BU5D_t408* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m11240 (TextWriter_t949 * __this, CharU5BU5D_t469* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m11241 (TextWriter_t949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m11242 (TextWriter_t949 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object)
extern "C" void TextWriter_WriteLine_m11243 (TextWriter_t949 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object[])
extern "C" void TextWriter_WriteLine_m11244 (TextWriter_t949 * __this, String_t* ___format, ObjectU5BU5D_t408* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;

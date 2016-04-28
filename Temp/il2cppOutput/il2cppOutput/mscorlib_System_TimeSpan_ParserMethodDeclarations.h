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

// System.TimeSpan/Parser
struct Parser_t2326;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m14010 (Parser_t2326 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C" bool Parser_get_AtEnd_m14011 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C" void Parser_ParseWhiteSpace_m14012 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C" bool Parser_ParseSign_m14013 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C" int32_t Parser_ParseInt_m14014 (Parser_t2326 * __this, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C" bool Parser_ParseOptDot_m14015 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C" void Parser_ParseOptColon_m14016 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C" int64_t Parser_ParseTicks_m14017 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C" TimeSpan_t422  Parser_Execute_m14018 (Parser_t2326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.SecurityParser
struct SecurityParser_t1822;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1824;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1823;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t2364;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C" void SecurityParser__ctor_m10355 (SecurityParser_t1822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C" void SecurityParser_LoadXml_m10356 (SecurityParser_t1822 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C" SecurityElement_t1824 * SecurityParser_ToXml_m10357 (SecurityParser_t1822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnStartParsing_m10358 (SecurityParser_t1822 * __this, SmallXmlParser_t1823 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C" void SecurityParser_OnProcessingInstruction_m10359 (SecurityParser_t1822 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C" void SecurityParser_OnIgnorableWhitespace_m10360 (SecurityParser_t1822 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void SecurityParser_OnStartElement_m10361 (SecurityParser_t1822 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C" void SecurityParser_OnEndElement_m10362 (SecurityParser_t1822 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C" void SecurityParser_OnChars_m10363 (SecurityParser_t1822 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnEndParsing_m10364 (SecurityParser_t1822 * __this, SmallXmlParser_t1823 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.WWW
struct WWW_t619;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t620;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.String[]
struct StringU5BU5D_t63;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t818;
// System.Text.Encoding
struct Encoding_t442;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3181 (WWW_t619 * __this, String_t* ___url, WWWForm_t620 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3182 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m3183 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m3184 (WWW_t619 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m3185 (WWW_t619 * __this, String_t* ___url, ByteU5BU5D_t29* ___postData, StringU5BU5D_t63* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t818 * WWW_get_responseHeaders_m3186 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m3187 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3188 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t442 * WWW_get_DefaultEncoding_m3189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t442 * WWW_GetTextEncoder_m3190 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t29* WWW_get_bytes_m3191 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3192 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m3193 (WWW_t619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t63* WWW_FlattenedHeadersFrom_m3194 (Object_t * __this /* static, unused */, Dictionary_2_t818 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t818 * WWW_ParseHTTPHeaderString_m3195 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Uri
struct Uri_t710;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Object
struct Object_t;
// System.UriParser
struct UriParser_t1681;
// System.UriFormatException
struct UriFormatException_t1685;
// System.Collections.Hashtable
struct Hashtable_t1377;
// System.UriTypeConverter
struct UriTypeConverter_t1689;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1551;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t1538;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1462;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1409;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1464;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1690;
// System.Text.RegularExpressions.Match
struct Match_t1079;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "System_System_Uri.h"
#include "System_System_UriMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
#include "System_System_UriKind.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "System_System_UriFormatExceptionMethodDeclarations.h"
#include "System_LocaleMethodDeclarations.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "System_System_UriFormatException.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_ArgumentException.h"
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
#include "System_ArrayTypes.h"
#include "System_System_Uri_UriScheme.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_System_ArgumentOutOfRangeException.h"
#include "mscorlib_System_Char.h"
#include "System_System_UriPartial.h"
#include "System_System_Net_IPAddressMethodDeclarations.h"
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
#include "System_System_Net_IPAddress.h"
#include "System_System_Net_IPv6Address.h"
#include "System_System_UriHostNameType.h"
#include "mscorlib_System_UInt32MethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "mscorlib_System_CharMethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
#include "mscorlib_System_Byte.h"
#include "mscorlib_System_Text_Encoding.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_IO_Path.h"
#include "mscorlib_System_IO_PathMethodDeclarations.h"
#include "mscorlib_System_Globalization_NumberStyles.h"
#include "System_System_UriParser.h"
#include "System_System_DefaultUriParser.h"
#include "System_System_UriParserMethodDeclarations.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Exception.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "System_System_DefaultUriParserMethodDeclarations.h"
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException.h"
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
#include "System_System_UriHostNameTypeMethodDeclarations.h"
#include "System_System_UriKindMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex.h"
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
#include "mscorlib_System_Collections_Hashtable.h"
#include "System_System_GenericUriParser.h"
#include "System_System_UriPartialMethodDeclarations.h"
#include "System_System_UriTypeConverter.h"
#include "System_System_UriTypeConverterMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "System_System_ComponentModel_TypeConverterMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "System_System_ComponentModel_TypeConverter.h"
#include "System_System_ComponentModel_RefreshEventHandler.h"
#include "System_System_ComponentModel_RefreshEventHandlerMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_ComponentModel_RefreshEventArgs.h"
#include "mscorlib_System_AsyncCallback.h"
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
#include "System_System_Net_Security_SslPolicyErrors.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Match.h"
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"
#include "System_U3CPrivateImplementationDetailsU3E.h"
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m4183 (Uri_t710 * __this, String_t* ___uriString, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m8871(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral1653;
extern "C" void Uri__ctor_m8868 (Uri_t710 * __this, SerializationInfo_t845 * ___serializationInfo, StreamingContext_t846  ___streamingContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1653 = il2cpp_codegen_string_literal_from_index(1653);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t845 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m9037(L_0, _stringLiteral1653, /*hidden argument*/NULL);
		Uri__ctor_m8871(__this, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1685_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t408_il2cpp_TypeInfo_var;
extern TypeInfo* UriKind_t1687_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t414_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1654;
extern Il2CppCodeGenString* _stringLiteral1655;
extern Il2CppCodeGenString* _stringLiteral1656;
extern "C" void Uri__ctor_m8869 (Uri_t710 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		UriFormatException_t1685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		ObjectU5BU5D_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		UriKind_t1687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1177);
		ArgumentException_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral1654 = il2cpp_codegen_string_literal_from_index(1654);
		_stringLiteral1655 = il2cpp_codegen_string_literal_from_index(1655);
		_stringLiteral1656 = il2cpp_codegen_string_literal_from_index(1656);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___uriString;
		__this->___source_2 = L_6;
		int32_t L_7 = ___uriKind;
		Uri_ParseUri_m8899(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___uriKind;
		V_1 = L_8;
		int32_t L_9 = V_1;
		if (L_9 == 0)
		{
			goto IL_00b3;
		}
		if (L_9 == 1)
		{
			goto IL_007d;
		}
		if (L_9 == 2)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00b8;
	}

IL_007d:
	{
		bool L_10 = Uri_get_IsAbsoluteUri_m8881(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		UriFormatException_t1685 * L_11 = (UriFormatException_t1685 *)il2cpp_codegen_object_new (UriFormatException_t1685_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m8919(L_11, _stringLiteral1654, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0093:
	{
		goto IL_00d9;
	}

IL_0098:
	{
		bool L_12 = Uri_get_IsAbsoluteUri_m8881(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		UriFormatException_t1685 * L_13 = (UriFormatException_t1685 *)il2cpp_codegen_object_new (UriFormatException_t1685_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m8919(L_13, _stringLiteral1655, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
	}

IL_00ae:
	{
		goto IL_00d9;
	}

IL_00b3:
	{
		goto IL_00d9;
	}

IL_00b8:
	{
		ObjectU5BU5D_t408* L_14 = ((ObjectU5BU5D_t408*)SZArrayNew(ObjectU5BU5D_t408_il2cpp_TypeInfo_var, 1));
		int32_t L_15 = ___uriKind;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UriKind_t1687_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0, sizeof(Object_t *))) = (Object_t *)L_17;
		String_t* L_18 = Locale_GetText_m7564(NULL /*static, unused*/, _stringLiteral1656, L_14, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		ArgumentException_t414 * L_20 = (ArgumentException_t414 *)il2cpp_codegen_object_new (ArgumentException_t414_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1950(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t408_il2cpp_TypeInfo_var;
extern TypeInfo* UriKind_t1687_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t414_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1656;
extern "C" void Uri__ctor_m8870 (Uri_t710 * __this, String_t* ___uriString, int32_t ___uriKind, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		ObjectU5BU5D_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		UriKind_t1687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1177);
		ArgumentException_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral1656 = il2cpp_codegen_string_literal_from_index(1656);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___uriString;
		if (L_6)
		{
			goto IL_0060;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return;
	}

IL_0060:
	{
		int32_t L_8 = ___uriKind;
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_9 = ___uriKind;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_10 = ___uriKind;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0095;
		}
	}
	{
		ObjectU5BU5D_t408* L_11 = ((ObjectU5BU5D_t408*)SZArrayNew(ObjectU5BU5D_t408_il2cpp_TypeInfo_var, 1));
		int32_t L_12 = ___uriKind;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UriKind_t1687_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0, sizeof(Object_t *))) = (Object_t *)L_14;
		String_t* L_15 = Locale_GetText_m7564(NULL /*static, unused*/, _stringLiteral1656, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		ArgumentException_t414 * L_17 = (ArgumentException_t414 *)il2cpp_codegen_object_new (ArgumentException_t414_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1950(L_17, L_16, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0095:
	{
		String_t* L_18 = ___uriString;
		__this->___source_2 = L_18;
		int32_t L_19 = ___uriKind;
		String_t* L_20 = ___uriString;
		String_t* L_21 = Uri_ParseNoExceptions_m8906(__this, L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		bool* L_22 = ___success;
		*((int8_t*)(L_22)) = (int8_t)0;
		goto IL_0100;
	}

IL_00b1:
	{
		bool* L_23 = ___success;
		*((int8_t*)(L_23)) = (int8_t)1;
		int32_t L_24 = ___uriKind;
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (L_25 == 0)
		{
			goto IL_00f3;
		}
		if (L_25 == 1)
		{
			goto IL_00cd;
		}
		if (L_25 == 2)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_00f8;
	}

IL_00cd:
	{
		bool L_26 = Uri_get_IsAbsoluteUri_m8881(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00db;
		}
	}
	{
		bool* L_27 = ___success;
		*((int8_t*)(L_27)) = (int8_t)0;
	}

IL_00db:
	{
		goto IL_0100;
	}

IL_00e0:
	{
		bool L_28 = Uri_get_IsAbsoluteUri_m8881(__this, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ee;
		}
	}
	{
		bool* L_29 = ___success;
		*((int8_t*)(L_29)) = (int8_t)0;
	}

IL_00ee:
	{
		goto IL_0100;
	}

IL_00f3:
	{
		goto IL_0100;
	}

IL_00f8:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		goto IL_0100;
	}

IL_0100:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1685_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1657;
extern "C" void Uri__ctor_m8871 (Uri_t710 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		UriFormatException_t1685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		_stringLiteral1657 = il2cpp_codegen_string_literal_from_index(1657);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape;
		__this->___userEscaped_14 = L_6;
		String_t* L_7 = ___uriString;
		__this->___source_2 = L_7;
		Uri_ParseUri_m8899(__this, 1, /*hidden argument*/NULL);
		bool L_8 = (__this->___isAbsoluteUri_12);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1780(NULL /*static, unused*/, _stringLiteral1657, L_9, /*hidden argument*/NULL);
		UriFormatException_t1685 * L_11 = (UriFormatException_t1685 *)il2cpp_codegen_object_new (UriFormatException_t1685_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m8919(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m4185 (Uri_t710 * __this, Uri_t710 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		Uri_t710 * L_6 = ___baseUri;
		String_t* L_7 = ___relativeUri;
		Uri_Merge_m8874(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.cctor()
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* UriSchemeU5BU5D_t1684_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral335;
extern Il2CppCodeGenString* _stringLiteral1453;
extern Il2CppCodeGenString* _stringLiteral1506;
extern Il2CppCodeGenString* _stringLiteral1508;
extern Il2CppCodeGenString* _stringLiteral1658;
extern Il2CppCodeGenString* _stringLiteral1451;
extern Il2CppCodeGenString* _stringLiteral1450;
extern Il2CppCodeGenString* _stringLiteral1659;
extern Il2CppCodeGenString* _stringLiteral1660;
extern Il2CppCodeGenString* _stringLiteral1661;
extern Il2CppCodeGenString* _stringLiteral1662;
extern Il2CppCodeGenString* _stringLiteral1663;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" void Uri__cctor_m8872 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		UriSchemeU5BU5D_t1684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1178);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		_stringLiteral1453 = il2cpp_codegen_string_literal_from_index(1453);
		_stringLiteral1506 = il2cpp_codegen_string_literal_from_index(1506);
		_stringLiteral1508 = il2cpp_codegen_string_literal_from_index(1508);
		_stringLiteral1658 = il2cpp_codegen_string_literal_from_index(1658);
		_stringLiteral1451 = il2cpp_codegen_string_literal_from_index(1451);
		_stringLiteral1450 = il2cpp_codegen_string_literal_from_index(1450);
		_stringLiteral1659 = il2cpp_codegen_string_literal_from_index(1659);
		_stringLiteral1660 = il2cpp_codegen_string_literal_from_index(1660);
		_stringLiteral1661 = il2cpp_codegen_string_literal_from_index(1661);
		_stringLiteral1662 = il2cpp_codegen_string_literal_from_index(1662);
		_stringLiteral1663 = il2cpp_codegen_string_literal_from_index(1663);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19 = _stringLiteral335;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20 = _stringLiteral1453;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21 = _stringLiteral1506;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22 = _stringLiteral1508;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23 = _stringLiteral1658;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24 = _stringLiteral1451;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25 = _stringLiteral1450;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26 = _stringLiteral1659;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27 = _stringLiteral1660;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28 = _stringLiteral1661;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29 = _stringLiteral1662;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30 = _stringLiteral1663;
		UriSchemeU5BU5D_t1684* L_0 = ((UriSchemeU5BU5D_t1684*)SZArrayNew(UriSchemeU5BU5D_t1684_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		String_t* L_2 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_3 = {0};
		UriScheme__ctor_m8867(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_0, 0, sizeof(UriScheme_t1683 ))) = L_3;
		UriSchemeU5BU5D_t1684* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		String_t* L_6 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_7 = {0};
		UriScheme__ctor_m8867(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_4, 1, sizeof(UriScheme_t1683 ))) = L_7;
		UriSchemeU5BU5D_t1684* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		String_t* L_10 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_11 = {0};
		UriScheme__ctor_m8867(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_8, 2, sizeof(UriScheme_t1683 ))) = L_11;
		UriSchemeU5BU5D_t1684* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_14 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_15 = {0};
		UriScheme__ctor_m8867(&L_15, L_13, L_14, (-1), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_12, 3, sizeof(UriScheme_t1683 ))) = L_15;
		UriSchemeU5BU5D_t1684* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriScheme_t1683  L_18 = {0};
		UriScheme__ctor_m8867(&L_18, L_17, _stringLiteral128, ((int32_t)25), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_16, 4, sizeof(UriScheme_t1683 ))) = L_18;
		UriSchemeU5BU5D_t1684* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriScheme_t1683  L_21 = {0};
		UriScheme__ctor_m8867(&L_21, L_20, _stringLiteral128, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_19, 5, sizeof(UriScheme_t1683 ))) = L_21;
		UriSchemeU5BU5D_t1684* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		String_t* L_24 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_25 = {0};
		UriScheme__ctor_m8867(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_22, 6, sizeof(UriScheme_t1683 ))) = L_25;
		UriSchemeU5BU5D_t1684* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		String_t* L_28 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t1683  L_29 = {0};
		UriScheme__ctor_m8867(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/NULL);
		*((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_26, 7, sizeof(UriScheme_t1683 ))) = L_29;
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___schemes_31 = L_26;
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral1653;
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m8873 (Uri_t710 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1653 = il2cpp_codegen_string_literal_from_index(1653);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t845 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m8875(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m7513(L_0, _stringLiteral1653, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::Merge(System.Uri,System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t404_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t469_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1664;
extern Il2CppCodeGenString* _stringLiteral1665;
extern Il2CppCodeGenString* _stringLiteral738;
extern Il2CppCodeGenString* _stringLiteral1666;
extern Il2CppCodeGenString* _stringLiteral1667;
extern Il2CppCodeGenString* _stringLiteral1668;
extern "C" void Uri_Merge_m8874 (Uri_t710 * __this, Uri_t710 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		ArgumentNullException_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		CharU5BU5D_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		_stringLiteral1664 = il2cpp_codegen_string_literal_from_index(1664);
		_stringLiteral1665 = il2cpp_codegen_string_literal_from_index(1665);
		_stringLiteral738 = il2cpp_codegen_string_literal_from_index(738);
		_stringLiteral1666 = il2cpp_codegen_string_literal_from_index(1666);
		_stringLiteral1667 = il2cpp_codegen_string_literal_from_index(1667);
		_stringLiteral1668 = il2cpp_codegen_string_literal_from_index(1668);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Uri_t710 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m8916(NULL /*static, unused*/, L_0, (Uri_t710 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t404 * L_2 = (ArgumentNullException_t404 *)il2cpp_codegen_object_new (ArgumentNullException_t404_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1754(L_2, _stringLiteral1664, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		Uri_t710 * L_3 = ___baseUri;
		NullCheck(L_3);
		bool L_4 = Uri_get_IsAbsoluteUri_m8881(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t868 * L_5 = (ArgumentOutOfRangeException_t868 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5214(L_5, _stringLiteral1664, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002d:
	{
		String_t* L_6 = ___relativeUri;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___relativeUri = L_7;
	}

IL_003a:
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2174(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m2204(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___relativeUri;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m2204(L_12, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___relativeUri;
		__this->___source_2 = L_14;
		Uri_ParseUri_m8899(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___relativeUri;
		NullCheck(L_15);
		int32_t L_16 = String_IndexOf_m2206(L_15, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_18 = ___relativeUri;
		CharU5BU5D_t469* L_19 = ((CharU5BU5D_t469*)SZArrayNew(CharU5BU5D_t469_il2cpp_TypeInfo_var, 3));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		CharU5BU5D_t469* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 1, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		CharU5BU5D_t469* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, 2, sizeof(uint16_t))) = (uint16_t)((int32_t)63);
		NullCheck(L_18);
		int32_t L_22 = String_IndexOfAny_m9081(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		Uri_t710 * L_26 = ___baseUri;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m8880(L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___relativeUri;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_30 = String_CompareOrdinal_m9082(NULL /*static, unused*/, L_27, 0, L_28, 0, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ed;
		}
	}
	{
		Uri_t710 * L_31 = ___baseUri;
		NullCheck(L_31);
		String_t* L_32 = Uri_get_Scheme_m8880(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_33 = Uri_IsPredefinedScheme_m8913(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_34 = ___relativeUri;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m2174(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)((int32_t)L_36+(int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_37 = ___relativeUri;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m2204(L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		String_t* L_40 = ___relativeUri;
		__this->___source_2 = L_40;
		Uri_ParseUri_m8899(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		String_t* L_41 = ___relativeUri;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m4148(L_41, ((int32_t)((int32_t)L_42+(int32_t)1)), /*hidden argument*/NULL);
		___relativeUri = L_43;
	}

IL_0107:
	{
		Uri_t710 * L_44 = ___baseUri;
		NullCheck(L_44);
		String_t* L_45 = (L_44->___scheme_3);
		__this->___scheme_3 = L_45;
		Uri_t710 * L_46 = ___baseUri;
		NullCheck(L_46);
		String_t* L_47 = (L_46->___host_4);
		__this->___host_4 = L_47;
		Uri_t710 * L_48 = ___baseUri;
		NullCheck(L_48);
		int32_t L_49 = (L_48->___port_5);
		__this->___port_5 = L_49;
		Uri_t710 * L_50 = ___baseUri;
		NullCheck(L_50);
		String_t* L_51 = (L_50->___userinfo_9);
		__this->___userinfo_9 = L_51;
		Uri_t710 * L_52 = ___baseUri;
		NullCheck(L_52);
		bool L_53 = (L_52->___isUnc_10);
		__this->___isUnc_10 = L_53;
		Uri_t710 * L_54 = ___baseUri;
		NullCheck(L_54);
		bool L_55 = (L_54->___isUnixFilePath_1);
		__this->___isUnixFilePath_1 = L_55;
		Uri_t710 * L_56 = ___baseUri;
		NullCheck(L_56);
		bool L_57 = (L_56->___isOpaquePart_11);
		__this->___isOpaquePart_11 = L_57;
		String_t* L_58 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_60 = String_op_Equality_m1763(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0190;
		}
	}
	{
		Uri_t710 * L_61 = ___baseUri;
		NullCheck(L_61);
		String_t* L_62 = (L_61->___path_6);
		__this->___path_6 = L_62;
		Uri_t710 * L_63 = ___baseUri;
		NullCheck(L_63);
		String_t* L_64 = (L_63->___query_7);
		__this->___query_7 = L_64;
		Uri_t710 * L_65 = ___baseUri;
		NullCheck(L_65);
		String_t* L_66 = (L_65->___fragment_8);
		__this->___fragment_8 = L_66;
		return;
	}

IL_0190:
	{
		String_t* L_67 = ___relativeUri;
		NullCheck(L_67);
		int32_t L_68 = String_IndexOf_m2206(L_67, ((int32_t)35), /*hidden argument*/NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_70 = (__this->___userEscaped_14);
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		String_t* L_71 = ___relativeUri;
		int32_t L_72 = V_0;
		NullCheck(L_71);
		String_t* L_73 = String_Substring_m4148(L_71, L_72, /*hidden argument*/NULL);
		__this->___fragment_8 = L_73;
		goto IL_01db;
	}

IL_01bd:
	{
		String_t* L_74 = ___relativeUri;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		String_t* L_76 = String_Substring_m4148(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_77 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m1780(NULL /*static, unused*/, _stringLiteral1665, L_77, /*hidden argument*/NULL);
		__this->___fragment_8 = L_78;
	}

IL_01db:
	{
		String_t* L_79 = ___relativeUri;
		int32_t L_80 = V_0;
		NullCheck(L_79);
		String_t* L_81 = String_Substring_m4150(L_79, 0, L_80, /*hidden argument*/NULL);
		___relativeUri = L_81;
	}

IL_01e5:
	{
		String_t* L_82 = ___relativeUri;
		NullCheck(L_82);
		int32_t L_83 = String_IndexOf_m2206(L_82, ((int32_t)63), /*hidden argument*/NULL);
		V_0 = L_83;
		int32_t L_84 = V_0;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		String_t* L_85 = ___relativeUri;
		int32_t L_86 = V_0;
		NullCheck(L_85);
		String_t* L_87 = String_Substring_m4148(L_85, L_86, /*hidden argument*/NULL);
		__this->___query_7 = L_87;
		bool L_88 = (__this->___userEscaped_14);
		if (L_88)
		{
			goto IL_021e;
		}
	}
	{
		String_t* L_89 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_90 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		__this->___query_7 = L_90;
	}

IL_021e:
	{
		String_t* L_91 = ___relativeUri;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		String_t* L_93 = String_Substring_m4150(L_91, 0, L_92, /*hidden argument*/NULL);
		___relativeUri = L_93;
	}

IL_0228:
	{
		String_t* L_94 = ___relativeUri;
		NullCheck(L_94);
		int32_t L_95 = String_get_Length_m2174(L_94, /*hidden argument*/NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_96 = ___relativeUri;
		NullCheck(L_96);
		uint16_t L_97 = String_get_Chars_m2204(L_96, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_98 = ___relativeUri;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_m2174(L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_99) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_100 = ___relativeUri;
		NullCheck(L_100);
		uint16_t L_101 = String_get_Chars_m2204(L_100, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_102 = (__this->___scheme_3);
		uint16_t L_103 = ((int32_t)58);
		Object_t * L_104 = Box(Char_t476_il2cpp_TypeInfo_var, &L_103);
		String_t* L_105 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_106 = String_Concat_m1767(NULL /*static, unused*/, L_102, L_104, L_105, /*hidden argument*/NULL);
		__this->___source_2 = L_106;
		Uri_ParseUri_m8899(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		String_t* L_107 = ___relativeUri;
		__this->___path_6 = L_107;
		bool L_108 = (__this->___userEscaped_14);
		if (L_108)
		{
			goto IL_02a0;
		}
	}
	{
		String_t* L_109 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_110 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		__this->___path_6 = L_110;
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		Uri_t710 * L_111 = ___baseUri;
		NullCheck(L_111);
		String_t* L_112 = (L_111->___path_6);
		__this->___path_6 = L_112;
		String_t* L_113 = ___relativeUri;
		NullCheck(L_113);
		int32_t L_114 = String_get_Length_m2174(L_113, /*hidden argument*/NULL);
		if ((((int32_t)L_114) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		String_t* L_115 = (__this->___query_7);
		NullCheck(L_115);
		int32_t L_116 = String_get_Length_m2174(L_115, /*hidden argument*/NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		String_t* L_117 = (__this->___path_6);
		NullCheck(L_117);
		int32_t L_118 = String_LastIndexOf_m9043(L_117, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_118;
		int32_t L_119 = V_0;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_120 = (__this->___path_6);
		int32_t L_121 = V_0;
		NullCheck(L_120);
		String_t* L_122 = String_Substring_m4150(L_120, 0, ((int32_t)((int32_t)L_121+(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_122;
	}

IL_02f4:
	{
		String_t* L_123 = ___relativeUri;
		NullCheck(L_123);
		int32_t L_124 = String_get_Length_m2174(L_123, /*hidden argument*/NULL);
		if (L_124)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		String_t* L_125 = (__this->___path_6);
		String_t* L_126 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_127 = String_Concat_m1780(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		__this->___path_6 = L_127;
		V_2 = 0;
	}

IL_0314:
	{
		String_t* L_128 = (__this->___path_6);
		int32_t L_129 = V_2;
		NullCheck(L_128);
		int32_t L_130 = String_IndexOf_m4239(L_128, _stringLiteral738, L_129, /*hidden argument*/NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_132 = V_0;
		if (L_132)
		{
			goto IL_0350;
		}
	}
	{
		String_t* L_133 = (__this->___path_6);
		NullCheck(L_133);
		String_t* L_134 = String_Remove_m4238(L_133, 0, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_134;
		goto IL_0381;
	}

IL_0350:
	{
		String_t* L_135 = (__this->___path_6);
		int32_t L_136 = V_0;
		NullCheck(L_135);
		uint16_t L_137 = String_get_Chars_m2204(L_135, ((int32_t)((int32_t)L_136-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		String_t* L_138 = (__this->___path_6);
		int32_t L_139 = V_0;
		NullCheck(L_138);
		String_t* L_140 = String_Remove_m4238(L_138, L_139, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_140;
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_141 = V_0;
		V_2 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		String_t* L_142 = (__this->___path_6);
		NullCheck(L_142);
		int32_t L_143 = String_get_Length_m2174(L_142, /*hidden argument*/NULL);
		if ((((int32_t)L_143) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_144 = (__this->___path_6);
		String_t* L_145 = (__this->___path_6);
		NullCheck(L_145);
		int32_t L_146 = String_get_Length_m2174(L_145, /*hidden argument*/NULL);
		NullCheck(L_144);
		uint16_t L_147 = String_get_Chars_m2204(L_144, ((int32_t)((int32_t)L_146-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_148 = (__this->___path_6);
		String_t* L_149 = (__this->___path_6);
		NullCheck(L_149);
		int32_t L_150 = String_get_Length_m2174(L_149, /*hidden argument*/NULL);
		NullCheck(L_148);
		uint16_t L_151 = String_get_Chars_m2204(L_148, ((int32_t)((int32_t)L_150-(int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_152 = (__this->___path_6);
		String_t* L_153 = (__this->___path_6);
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_m2174(L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		String_t* L_155 = String_Remove_m4238(L_152, ((int32_t)((int32_t)L_154-(int32_t)1)), 1, /*hidden argument*/NULL);
		__this->___path_6 = L_155;
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		String_t* L_156 = (__this->___path_6);
		int32_t L_157 = V_2;
		NullCheck(L_156);
		int32_t L_158 = String_IndexOf_m4239(L_156, _stringLiteral1666, L_157, /*hidden argument*/NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_160 = V_0;
		if (L_160)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		String_t* L_161 = (__this->___path_6);
		int32_t L_162 = V_0;
		NullCheck(L_161);
		int32_t L_163 = String_LastIndexOf_m9083(L_161, ((int32_t)47), ((int32_t)((int32_t)L_162-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_163;
		int32_t L_164 = V_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_165 = V_0;
		V_2 = ((int32_t)((int32_t)L_165+(int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		String_t* L_166 = (__this->___path_6);
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_3;
		NullCheck(L_166);
		String_t* L_170 = String_Substring_m4150(L_166, ((int32_t)((int32_t)L_167+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_168-(int32_t)L_169))-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_171 = String_op_Inequality_m1807(NULL /*static, unused*/, L_170, _stringLiteral1667, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0482;
		}
	}
	{
		String_t* L_172 = (__this->___path_6);
		int32_t L_173 = V_3;
		int32_t L_174 = V_0;
		int32_t L_175 = V_3;
		NullCheck(L_172);
		String_t* L_176 = String_Remove_m4238(L_172, ((int32_t)((int32_t)L_173+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_174-(int32_t)L_175))+(int32_t)3)), /*hidden argument*/NULL);
		__this->___path_6 = L_176;
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_177 = V_0;
		V_2 = ((int32_t)((int32_t)L_177+(int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		String_t* L_178 = (__this->___path_6);
		NullCheck(L_178);
		int32_t L_179 = String_get_Length_m2174(L_178, /*hidden argument*/NULL);
		if ((((int32_t)L_179) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_180 = (__this->___path_6);
		NullCheck(L_180);
		bool L_181 = String_EndsWith_m4237(L_180, _stringLiteral1668, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_182 = (__this->___path_6);
		String_t* L_183 = (__this->___path_6);
		NullCheck(L_183);
		int32_t L_184 = String_get_Length_m2174(L_183, /*hidden argument*/NULL);
		NullCheck(L_182);
		int32_t L_185 = String_LastIndexOf_m9083(L_182, ((int32_t)47), ((int32_t)((int32_t)L_184-(int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_185;
		int32_t L_186 = V_0;
		if ((((int32_t)L_186) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_187 = (__this->___path_6);
		int32_t L_188 = V_0;
		String_t* L_189 = (__this->___path_6);
		NullCheck(L_189);
		int32_t L_190 = String_get_Length_m2174(L_189, /*hidden argument*/NULL);
		int32_t L_191 = V_0;
		NullCheck(L_187);
		String_t* L_192 = String_Substring_m4150(L_187, ((int32_t)((int32_t)L_188+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_190-(int32_t)L_191))-(int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_193 = String_op_Inequality_m1807(NULL /*static, unused*/, L_192, _stringLiteral1667, /*hidden argument*/NULL);
		if (!L_193)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_194 = (__this->___path_6);
		int32_t L_195 = V_0;
		String_t* L_196 = (__this->___path_6);
		NullCheck(L_196);
		int32_t L_197 = String_get_Length_m2174(L_196, /*hidden argument*/NULL);
		int32_t L_198 = V_0;
		NullCheck(L_194);
		String_t* L_199 = String_Remove_m4238(L_194, ((int32_t)((int32_t)L_195+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_197-(int32_t)L_198))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_199;
	}

IL_0522:
	{
		bool L_200 = (__this->___userEscaped_14);
		if (L_200)
		{
			goto IL_053e;
		}
	}
	{
		String_t* L_201 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_202 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_201, /*hidden argument*/NULL);
		__this->___path_6 = L_202;
	}

IL_053e:
	{
		return;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_AbsoluteUri_m8875 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedAbsoluteUri_15);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m8890(__this, 2, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_1;
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2174(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = (__this->___cachedAbsoluteUri_15);
		String_t* L_5 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1780(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_6;
	}

IL_0046:
	{
		String_t* L_7 = (__this->___fragment_8);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m2174(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = (__this->___cachedAbsoluteUri_15);
		String_t* L_10 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1780(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_11;
	}

IL_006e:
	{
		String_t* L_12 = (__this->___cachedAbsoluteUri_15);
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t409_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" String_t* Uri_get_Authority_m8876 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Int32_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m8880(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m8911(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_5);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___host_4);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = (__this->___host_4);
		int32_t L_5 = (__this->___port_5);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t409_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1767(NULL /*static, unused*/, L_4, _stringLiteral128, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m7537 (Uri_t710 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___host_4);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsFile()
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsFile_m8877 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m8880(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1763(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPAddress_t1577_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1579_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1504;
extern Il2CppCodeGenString* _stringLiteral1503;
extern "C" bool Uri_get_IsLoopback_m8878 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IPAddress_t1577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		IPv6Address_t1579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		_stringLiteral1504 = il2cpp_codegen_string_literal_from_index(1504);
		_stringLiteral1503 = il2cpp_codegen_string_literal_from_index(1503);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1577 * V_0 = {0};
	IPv6Address_t1579 * V_1 = {0};
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m7537(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2174(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m8877(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1763(NULL /*static, unused*/, L_3, _stringLiteral1504, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1763(NULL /*static, unused*/, L_5, _stringLiteral1503, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		String_t* L_7 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1577_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_m8184(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1577_il2cpp_TypeInfo_var);
		IPAddress_t1577 * L_9 = ((IPAddress_t1577_StaticFields*)IPAddress_t1577_il2cpp_TypeInfo_var->static_fields)->___Loopback_6;
		IPAddress_t1577 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		String_t* L_12 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1579_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m8203(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t1579 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1579_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m8207(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m8879 (Uri_t710 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___isUnc_10);
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m8880 (Uri_t710 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___scheme_3);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m8881 (Uri_t710 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1579_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_CheckHostName_m8882 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		IPv6Address_t1579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		s_Il2CppMethodIntialized = true;
	}
	IPv6Address_t1579 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2174(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_m8883(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m8884(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1579_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m8203(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern TypeInfo* CharU5BU5D_t469_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsIPv4Address_m8883 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t63* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t469* L_1 = ((CharU5BU5D_t469*)SZArrayNew(CharU5BU5D_t469_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)46);
		NullCheck(L_0);
		StringU5BU5D_t63* L_2 = String_Split_m4236(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t63* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t63* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))));
		int32_t L_7 = String_get_Length_m2174((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*))), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		StringU5BU5D_t63* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m9084(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11, sizeof(String_t*))), (&V_3), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsDomainAddress_m8884 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2174(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2204(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t476_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m9072(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t476_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m9072(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern "C" bool Uri_CheckSchemeName_m8885 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2174(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m2204(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m8886(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2174(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m2204(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t476_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m4454(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m8886(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m8886 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_Equals_m8887 (Uri_t710 * __this, Object_t * ___comparant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t710 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___comparant;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___comparant;
		V_0 = ((Uri_t710 *)IsInstClass(L_1, Uri_t710_il2cpp_TypeInfo_var));
		Uri_t710 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_3 = ___comparant;
		V_1 = ((String_t*)IsInstSealed(L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_t710 * L_6 = (Uri_t710 *)il2cpp_codegen_object_new (Uri_t710_il2cpp_TypeInfo_var);
		Uri__ctor_m4183(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t710 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m8888(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t867_il2cpp_TypeInfo_var;
extern "C" bool Uri_InternalEquals_m8888 (Uri_t710 * __this, Uri_t710 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		CultureInfo_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t867 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		Uri_t710 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = (L_1->___isAbsoluteUri_12);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->___isAbsoluteUri_12);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = (__this->___source_2);
		Uri_t710 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___source_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1763(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_8 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___scheme_3);
		CultureInfo_t867 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m9085(L_9, L_10, /*hidden argument*/NULL);
		Uri_t710 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___scheme_3);
		CultureInfo_t867 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m9085(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m1763(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = (__this->___host_4);
		CultureInfo_t867 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m9085(L_17, L_18, /*hidden argument*/NULL);
		Uri_t710 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___host_4);
		CultureInfo_t867 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m9085(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m1763(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->___port_5);
		Uri_t710 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___port_5);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = (__this->___query_7);
		Uri_t710 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1763(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = (__this->___path_6);
		Uri_t710 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = (L_33->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m1763(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern TypeInfo* CultureInfo_t867_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetHashCode_m8889 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t867 * V_0 = {0};
	{
		int32_t L_0 = (__this->___cachedHashCode_18);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_1 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_3);
		CultureInfo_t867 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m9085(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_m4128(L_5, /*hidden argument*/NULL);
		String_t* L_7 = (__this->___host_4);
		CultureInfo_t867 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m9085(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_GetHashCode_m4128(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___port_5);
		String_t* L_12 = (__this->___query_7);
		NullCheck(L_12);
		int32_t L_13 = String_GetHashCode_m4128(L_12, /*hidden argument*/NULL);
		String_t* L_14 = (__this->___path_6);
		NullCheck(L_14);
		int32_t L_15 = String_GetHashCode_m4128(L_14, /*hidden argument*/NULL);
		__this->___cachedHashCode_18 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = (__this->___source_2);
		NullCheck(L_16);
		int32_t L_17 = String_GetHashCode_m4128(L_16, /*hidden argument*/NULL);
		__this->___cachedHashCode_18 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->___cachedHashCode_18);
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2171_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1659;
extern Il2CppCodeGenString* _stringLiteral1660;
extern "C" String_t* Uri_GetLeftPart_m8890 (Uri_t710 * __this, int32_t ___part, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		StringBuilder_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Dictionary_2_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		Dictionary_2__ctor_m2171_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483801);
		_stringLiteral1659 = il2cpp_codegen_string_literal_from_index(1659);
		_stringLiteral1660 = il2cpp_codegen_string_literal_from_index(1660);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t95 * V_1 = {0};
	StringBuilder_t95 * V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t239 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m8915(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = (__this->___scheme_3);
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m8912(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1780(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1763(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1763(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t95 * L_12 = (StringBuilder_t95 *)il2cpp_codegen_object_new (StringBuilder_t95_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1897(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t95 * L_13 = V_1;
		String_t* L_14 = (__this->___scheme_3);
		NullCheck(L_13);
		StringBuilder_Append_m1894(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t95 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m8912(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m1894(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m2174(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = (__this->___path_6);
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m2204(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_22 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m1763(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t95 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m2209(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = (__this->___userinfo_9);
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m2174(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t95 * L_27 = V_1;
		String_t* L_28 = (__this->___userinfo_9);
		NullCheck(L_27);
		StringBuilder_t95 * L_29 = StringBuilder_Append_m1894(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m2209(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t95 * L_30 = V_1;
		String_t* L_31 = (__this->___host_4);
		NullCheck(L_30);
		StringBuilder_Append_m1894(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m8911(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = (__this->___port_5);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->___port_5);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t95 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t95 * L_38 = StringBuilder_Append_m2209(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = (__this->___port_5);
		NullCheck(L_38);
		StringBuilder_Append_m1896(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t95 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = StringBuilder_ToString_m1927(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t95 * L_42 = (StringBuilder_t95 *)il2cpp_codegen_object_new (StringBuilder_t95_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1897(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t95 * L_43 = V_2;
		String_t* L_44 = (__this->___scheme_3);
		NullCheck(L_43);
		StringBuilder_Append_m1894(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t95 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m8912(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m1894(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = (__this->___path_6);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m2174(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = (__this->___path_6);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m2204(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_52 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m1763(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t95 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m2209(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = (__this->___userinfo_9);
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m2174(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t95 * L_57 = V_2;
		String_t* L_58 = (__this->___userinfo_9);
		NullCheck(L_57);
		StringBuilder_t95 * L_59 = StringBuilder_Append_m1894(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m2209(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t95 * L_60 = V_2;
		String_t* L_61 = (__this->___host_4);
		NullCheck(L_60);
		StringBuilder_Append_m1894(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m8911(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = (__this->___port_5);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->___port_5);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t95 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t95 * L_68 = StringBuilder_Append_m2209(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = (__this->___port_5);
		NullCheck(L_68);
		StringBuilder_Append_m1896(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = (__this->___path_6);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m2174(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m8880(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_74 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t239 * L_75 = (Dictionary_2_t239 *)il2cpp_codegen_object_new (Dictionary_2_t239_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2171(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m2171_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t239 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral1659, 0);
		Dictionary_2_t239 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral1660, 0);
		Dictionary_2_t239 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_79 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map14_35;
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t95 * L_83 = V_2;
		String_t* L_84 = (__this->___path_6);
		NullCheck(L_83);
		StringBuilder_Append_m1894(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t95 * L_85 = V_2;
		String_t* L_86 = (__this->___path_6);
		String_t* L_87 = Uri_get_Scheme_m8880(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m8907(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m8908(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m1894(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t95 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = StringBuilder_ToString_m1927(L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern TypeInfo* ArgumentException_t414_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1669;
extern "C" int32_t Uri_FromHex_m8891 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral1669 = il2cpp_codegen_string_literal_from_index(1669);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t414 * L_9 = (ArgumentException_t414 *)il2cpp_codegen_object_new (ArgumentException_t414_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1950(L_9, _stringLiteral1669, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern TypeInfo* ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1670;
extern Il2CppCodeGenString* _stringLiteral1671;
extern "C" String_t* Uri_HexEscape_m8892 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral1670 = il2cpp_codegen_string_literal_from_index(1670);
		_stringLiteral1671 = il2cpp_codegen_string_literal_from_index(1671);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t868 * L_1 = (ArgumentOutOfRangeException_t868 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5214(L_1, _stringLiteral1670, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2204(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(Char_t476_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m2204(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(Char_t476_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1767(NULL /*static, unused*/, _stringLiteral1671, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m8893 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsHexEncoding_m8894 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2174(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m2204(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m2204(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m8893(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m2204(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m8893(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri_AppendQueryAndFragment_m8895 (Uri_t710 * __this, String_t** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = (__this->___query_7);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2174(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m2204(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		Object_t * L_5 = Box(Char_t476_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = (__this->___query_7);
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m4148(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_m8901(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1755(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_m8901(NULL /*static, unused*/, L_10, 0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1780(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_12)) = (Object_t *)L_15;
	}

IL_005e:
	{
		String_t* L_16 = (__this->___fragment_8);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m2174(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1780(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/NULL);
		*((Object_t **)(L_18)) = (Object_t *)L_21;
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ToString_m8896 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___cachedToString_16);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___cachedToString_16);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m8890(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_m8901(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		__this->___cachedToString_16 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = (__this->___path_6);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->___cachedToString_16 = L_6;
	}

IL_0047:
	{
		String_t** L_7 = &(__this->___cachedToString_16);
		Uri_AppendQueryAndFragment_m8895(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = (__this->___cachedToString_16);
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m8897 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m8898(NULL /*static, unused*/, L_0, 0, 1, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t442_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t469_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1672;
extern Il2CppCodeGenString* _stringLiteral1673;
extern "C" String_t* Uri_EscapeString_m8898 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		StringBuilder_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Encoding_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		CharU5BU5D_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		_stringLiteral1672 = il2cpp_codegen_string_literal_from_index(1672);
		_stringLiteral1673 = il2cpp_codegen_string_literal_from_index(1673);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t95 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t29* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t95 * L_2 = (StringBuilder_t95 *)il2cpp_codegen_object_new (StringBuilder_t95_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1897(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2174(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m8894(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t95 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m4150(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m1894(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t442_il2cpp_TypeInfo_var);
		Encoding_t442 * L_13 = Encoding_get_UTF8_m2000(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t469* L_14 = ((CharU5BU5D_t469*)SZArrayNew(CharU5BU5D_t469_il2cpp_TypeInfo_var, 1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2204(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0, sizeof(uint16_t))) = (uint16_t)L_17;
		NullCheck(L_13);
		ByteU5BU5D_t29* L_18 = (ByteU5BU5D_t29*)VirtFuncInvoker1< ByteU5BU5D_t29*, CharU5BU5D_t469* >::Invoke(11 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t29* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t29* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22, sizeof(uint8_t)))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck(_stringLiteral1672);
		int32_t L_26 = String_IndexOf_m2206(_stringLiteral1672, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck(_stringLiteral1673);
		int32_t L_34 = String_IndexOf_m2206(_stringLiteral1673, L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t95 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_37 = Uri_HexEscape_m8892(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_Append_m1894(L_35, L_37, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t95 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m2209(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t95 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = StringBuilder_ToString_m1927(L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t867_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseUri_m8899 (Uri_t710 * __this, int32_t ___kind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		CultureInfo_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = (__this->___source_2);
		Uri_Parse_m8905(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___userEscaped_14);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m8898(NULL /*static, unused*/, L_3, 0, 1, 0, /*hidden argument*/NULL);
		__this->___host_4 = L_4;
		String_t* L_5 = (__this->___host_4);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2174(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = (__this->___host_4);
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m2204(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = (__this->___host_4);
		String_t* L_10 = (__this->___host_4);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2174(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m2204(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_14 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m9085(L_13, L_14, /*hidden argument*/NULL);
		__this->___host_4 = L_15;
	}

IL_0086:
	{
		String_t* L_16 = (__this->___path_6);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m2174(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->___path_6 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Unescape_m8900 (Uri_t710 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_m8901(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1674;
extern Il2CppCodeGenString* _stringLiteral1675;
extern Il2CppCodeGenString* _stringLiteral1676;
extern "C" String_t* Uri_Unescape_m8901 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		StringBuilder_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		_stringLiteral1674 = il2cpp_codegen_string_literal_from_index(1674);
		_stringLiteral1675 = il2cpp_codegen_string_literal_from_index(1675);
		_stringLiteral1676 = il2cpp_codegen_string_literal_from_index(1676);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t95 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t95 * L_2 = (StringBuilder_t95 *)il2cpp_codegen_object_new (StringBuilder_t95_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1897(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2174(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m2204(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m8909(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t95 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m1894(L_13, _stringLiteral1674, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t95 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m1894(L_16, _stringLiteral1675, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t95 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m1894(L_19, _stringLiteral1676, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t95 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m2209(L_20, L_21, /*hidden argument*/NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t95 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m2209(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t95 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m2209(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t95 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = StringBuilder_ToString_m1927(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t469_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral798;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" void Uri_ParseAsWindowsUNC_m8902 (Uri_t710 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		CharU5BU5D_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		_stringLiteral798 = il2cpp_codegen_string_literal_from_index(798);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		__this->___isUnc_10 = 1;
		String_t* L_3 = ___uriString;
		CharU5BU5D_t469* L_4 = ((CharU5BU5D_t469*)SZArrayNew(CharU5BU5D_t469_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m9086(L_3, L_4, /*hidden argument*/NULL);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m2206(L_6, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m4148(L_9, L_10, /*hidden argument*/NULL);
		__this->___path_6 = L_11;
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m4150(L_12, 0, L_13, /*hidden argument*/NULL);
		__this->___host_4 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->___host_4 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_16;
	}

IL_0084:
	{
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m2168(L_17, _stringLiteral798, _stringLiteral103, /*hidden argument*/NULL);
		__this->___path_6 = L_18;
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1677;
extern Il2CppCodeGenString* _stringLiteral798;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m8903 (Uri_t710 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral1677 = il2cpp_codegen_string_literal_from_index(1677);
		_stringLiteral798 = il2cpp_codegen_string_literal_from_index(798);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2174(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m2204(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m2204(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return _stringLiteral1677;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_7;
		__this->___port_5 = (-1);
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m2168(L_8, _stringLiteral798, _stringLiteral103, /*hidden argument*/NULL);
		__this->___path_6 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_11;
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t469_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m8904 (Uri_t710 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		CharU5BU5D_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isUnixFilePath_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_3;
		__this->___path_6 = (String_t*)NULL;
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2174(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m2204(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m2204(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t469* L_11 = ((CharU5BU5D_t469*)SZArrayNew(CharU5BU5D_t469_il2cpp_TypeInfo_var, 1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)47);
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m9086(L_10, L_11, /*hidden argument*/NULL);
		___uriString = L_12;
		uint16_t L_13 = ((int32_t)47);
		Object_t * L_14 = Box(Char_t476_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1755(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->___path_6 = L_16;
	}

IL_008f:
	{
		String_t* L_17 = (__this->___path_6);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->___path_6 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern TypeInfo* ArgumentNullException_t404_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1685_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1678;
extern "C" void Uri_Parse_m8905 (Uri_t710 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		UriFormatException_t1685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		_stringLiteral1678 = il2cpp_codegen_string_literal_from_index(1678);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t404 * L_1 = (ArgumentNullException_t404 *)il2cpp_codegen_object_new (ArgumentNullException_t404_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1754(L_1, _stringLiteral1678, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m8906(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t1685 * L_7 = (UriFormatException_t1685 *)il2cpp_codegen_object_new (UriFormatException_t1685_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m8919(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern TypeInfo* Path_t1077_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t867_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t1579_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1680_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1679;
extern Il2CppCodeGenString* _stringLiteral1654;
extern Il2CppCodeGenString* _stringLiteral1680;
extern Il2CppCodeGenString* _stringLiteral1681;
extern Il2CppCodeGenString* _stringLiteral1665;
extern Il2CppCodeGenString* _stringLiteral1682;
extern Il2CppCodeGenString* _stringLiteral1683;
extern Il2CppCodeGenString* _stringLiteral103;
extern Il2CppCodeGenString* _stringLiteral1684;
extern Il2CppCodeGenString* _stringLiteral701;
extern Il2CppCodeGenString* _stringLiteral1685;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral229;
extern Il2CppCodeGenString* _stringLiteral1686;
extern Il2CppCodeGenString* _stringLiteral119;
extern "C" String_t* Uri_ParseNoExceptions_m8906 (Uri_t710 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t1077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(620);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		CultureInfo_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		IPv6Address_t1579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		DefaultUriParser_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1180);
		_stringLiteral1679 = il2cpp_codegen_string_literal_from_index(1679);
		_stringLiteral1654 = il2cpp_codegen_string_literal_from_index(1654);
		_stringLiteral1680 = il2cpp_codegen_string_literal_from_index(1680);
		_stringLiteral1681 = il2cpp_codegen_string_literal_from_index(1681);
		_stringLiteral1665 = il2cpp_codegen_string_literal_from_index(1665);
		_stringLiteral1682 = il2cpp_codegen_string_literal_from_index(1682);
		_stringLiteral1683 = il2cpp_codegen_string_literal_from_index(1683);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		_stringLiteral1684 = il2cpp_codegen_string_literal_from_index(1684);
		_stringLiteral701 = il2cpp_codegen_string_literal_from_index(701);
		_stringLiteral1685 = il2cpp_codegen_string_literal_from_index(1685);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		_stringLiteral1686 = il2cpp_codegen_string_literal_from_index(1686);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	bool V_11 = false;
	IPv6Address_t1579 * V_12 = {0};
	UriFormatException_t1685 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m2169(L_0, /*hidden argument*/NULL);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2174(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->___isAbsoluteUri_12 = 0;
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return _stringLiteral1679;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2206(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return _stringLiteral1654;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m2204(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1077_il2cpp_TypeInfo_var);
		uint16_t L_15 = ((Path_t1077_StaticFields*)Path_t1077_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m8904(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___isAbsoluteUri_12 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m2174(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m2204(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m2204(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m8902(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->___isAbsoluteUri_12 = 0;
		String_t* L_25 = ___uriString;
		__this->___path_6 = L_25;
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m2204(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m8886(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return _stringLiteral1680;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m8903(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m4150(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_37 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m9085(L_36, L_37, /*hidden argument*/NULL);
		__this->___scheme_3 = L_38;
		String_t* L_39 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m8885(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m7563(NULL /*static, unused*/, _stringLiteral1681, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m2174(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m4147(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m8879(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->___userEscaped_14);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m4148(L_51, L_52, /*hidden argument*/NULL);
		__this->___fragment_8 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m4148(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m1780(NULL /*static, unused*/, _stringLiteral1665, L_57, /*hidden argument*/NULL);
		__this->___fragment_8 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m9087(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m4150(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/NULL);
		__this->___query_7 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->___userEscaped_14);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m8897(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		__this->___query_7 = L_74;
	}

IL_01e3:
	{
		String_t* L_75 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m8913(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_m1807(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_m1807(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m2204(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m2204(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return _stringLiteral1682;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m2204(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m2204(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		String_t* L_101 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m1763(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m2204(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return _stringLiteral1683;
	}

IL_02d1:
	{
		String_t* L_112 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_m1807(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_m1807(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m1763(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m2204(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m2204(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m2204(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m8913(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m4150(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/NULL);
		__this->___path_6 = L_150;
		__this->___isOpaquePart_11 = 1;
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m9087(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m9087(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_m1807(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_m1807(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->___path_6 = _stringLiteral103;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m4150(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/NULL);
		__this->___path_6 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m9087(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m4150(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/NULL);
		__this->___userinfo_9 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->___port_5 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m9088(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m4150(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m2174(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m2174(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m2204(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_211 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_212 = &(__this->___port_5);
		bool L_213 = Int32_TryParse_m4452(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->___port_5);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->___port_5);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return _stringLiteral1684;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->___port_5);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m8911(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		__this->___port_5 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->___port_5);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m8911(NULL /*static, unused*/, L_221, /*hidden argument*/NULL);
		__this->___port_5 = L_222;
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m4150(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/NULL);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->___host_4 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		Object_t * L_231 = Box(Char_t476_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m1755(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m8908(NULL /*static, unused*/, L_233, 1, /*hidden argument*/NULL);
		__this->___path_6 = L_234;
		String_t* L_235 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = (__this->___host_4);
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m2174(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = (__this->___host_4);
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m2204(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = (__this->___host_4);
		String_t* L_241 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m1780(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/NULL);
		__this->___path_6 = L_242;
		String_t* L_243 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->___isUnixFilePath_1);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m1780(NULL /*static, unused*/, _stringLiteral701, L_245, /*hidden argument*/NULL);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m1763(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->___isUnc_10 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m1763(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = (__this->___host_4);
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m2174(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = (__this->___host_4);
		__this->___path_6 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = (__this->___host_4);
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m2174(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m1763(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m1763(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m1763(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m1763(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m1763(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return _stringLiteral1685;
	}

IL_071c:
	{
		String_t* L_275 = (__this->___host_4);
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m2174(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_m8882(NULL /*static, unused*/, L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = (__this->___host_4);
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m2174(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = (__this->___host_4);
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m2204(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = (__this->___host_4);
		String_t* L_285 = (__this->___host_4);
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m2174(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m2204(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t1579_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m8203(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t1579 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m8213(L_290, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_m1764(NULL /*static, unused*/, _stringLiteral586, L_291, _stringLiteral229, /*hidden argument*/NULL);
		__this->___host_4 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t1681 * L_294 = Uri_get_Parser_m8914(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t1680 *)IsInstClass(L_294, DefaultUriParser_t1680_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t1681 * L_295 = Uri_get_Parser_m8914(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_m1764(NULL /*static, unused*/, _stringLiteral1686, L_296, _stringLiteral119, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m7563(NULL /*static, unused*/, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t1685 *)NULL;
		UriParser_t1681 * L_299 = Uri_get_Parser_m8914(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t1681 * L_300 = Uri_get_Parser_m8914(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t710 *, UriFormatException_t1685 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t1685 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t1685 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_m1807(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_m1807(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_m1807(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = (__this->___path_6);
		String_t* L_314 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m8907(NULL /*static, unused*/, L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m8908(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/NULL);
		__this->___path_6 = L_316;
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2171_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1506;
extern Il2CppCodeGenString* _stringLiteral1451;
extern Il2CppCodeGenString* _stringLiteral1450;
extern Il2CppCodeGenString* _stringLiteral1662;
extern Il2CppCodeGenString* _stringLiteral1663;
extern "C" bool Uri_CompactEscaped_m8907 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Dictionary_2_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		Dictionary_2__ctor_m2171_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483801);
		_stringLiteral1506 = il2cpp_codegen_string_literal_from_index(1506);
		_stringLiteral1451 = il2cpp_codegen_string_literal_from_index(1451);
		_stringLiteral1450 = il2cpp_codegen_string_literal_from_index(1450);
		_stringLiteral1662 = il2cpp_codegen_string_literal_from_index(1662);
		_stringLiteral1663 = il2cpp_codegen_string_literal_from_index(1663);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t239 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_2 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t239 * L_3 = (Dictionary_2_t239 *)il2cpp_codegen_object_new (Dictionary_2_t239_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2171(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m2171_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t239 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral1506, 0);
		Dictionary_2_t239 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral1451, 0);
		Dictionary_2_t239 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral1450, 0);
		Dictionary_2_t239 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1662, 0);
		Dictionary_2_t239 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1663, 0);
		Dictionary_2_t239 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_10 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map15_36;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t476_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1313_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t79_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t418_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral103;
extern Il2CppCodeGenString* _stringLiteral577;
extern Il2CppCodeGenString* _stringLiteral1667;
extern "C" String_t* Uri_Reduce_m8908 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		StringBuilder_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Char_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		ArrayList_t1313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(856);
		IEnumerator_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		IDisposable_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		_stringLiteral577 = il2cpp_codegen_string_literal_from_index(577);
		_stringLiteral1667 = il2cpp_codegen_string_literal_from_index(1667);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t95 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t1313 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = {0};
	Object_t * V_12 = {0};
	uint16_t V_13 = 0x0;
	Object_t * V_14 = {0};
	Exception_t52 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t52 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1763(NULL /*static, unused*/, L_0, _stringLiteral103, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t95 * L_3 = (StringBuilder_t95 *)il2cpp_codegen_object_new (StringBuilder_t95_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1897(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m2204(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t95 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m2209(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m2174(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2204(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m2204(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t476_il2cpp_TypeInfo_var);
		uint16_t L_21 = Char_ToUpper_m6534(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t95 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m2209(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t95 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m2209(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t95 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m2209(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t95 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m2209(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m2174(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t95 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = StringBuilder_ToString_m1927(L_38, /*hidden argument*/NULL);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m4240(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path = L_41;
	}

IL_0101:
	{
		ArrayList_t1313 * L_42 = (ArrayList_t1313 *)il2cpp_codegen_object_new (ArrayList_t1313_il2cpp_TypeInfo_var);
		ArrayList__ctor_m7471(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m4147(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m2174(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m4150(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m2174(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m1763(NULL /*static, unused*/, L_57, _stringLiteral577, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m1763(NULL /*static, unused*/, L_59, _stringLiteral1667, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t1313 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t1313 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t1313 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m2174(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1313 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return _stringLiteral103;
	}

IL_01c2:
	{
		StringBuilder_t95 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m1919(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m2204(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t95 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m2209(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = 1;
		ArrayList_t1313 * L_77 = V_5;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Object_t * L_79 = V_12;
			NullCheck(L_79);
			Object_t * L_80 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t79_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)CastclassSealed(L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t95 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m2209(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t95 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m1894(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Object_t * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t79_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t52 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Object_t * L_87 = V_12;
			V_14 = ((Object_t *)IsInst(L_87, IDisposable_t418_il2cpp_TypeInfo_var));
			Object_t * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Object_t * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t418_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t52 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m4237(L_90, _stringLiteral103, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t95 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m2209(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t95 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = StringBuilder_ToString_m1927(L_93, /*hidden argument*/NULL);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ArgumentException_t414_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t29_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1612;
extern Il2CppCodeGenString* _stringLiteral1330;
extern "C" uint16_t Uri_HexUnescapeMultiByte_m8909 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		ByteU5BU5D_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		_stringLiteral1612 = il2cpp_codegen_string_literal_from_index(1612);
		_stringLiteral1330 = il2cpp_codegen_string_literal_from_index(1330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t29* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t414 * L_2 = (ArgumentException_t414 *)il2cpp_codegen_object_new (ArgumentException_t414_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1950(L_2, _stringLiteral1612, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2174(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t868 * L_7 = (ArgumentOutOfRangeException_t868 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t868_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5214(L_7, _stringLiteral1330, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_10 = Uri_IsHexEncoding_m8894(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m2204(L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m2204(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_27 = Uri_FromHex_m8891(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m2204(L_28, L_32, /*hidden argument*/NULL);
		int32_t L_34 = Uri_FromHex_m8891(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t29*)SZArrayNew(ByteU5BU5D_t29_il2cpp_TypeInfo_var, L_42));
		V_6 = 0;
		ByteU5BU5D_t29* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_51 = Uri_IsHexEncoding_m8894(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m2204(L_52, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_58 = Uri_FromHex_m8891(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m2204(L_60, L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		int32_t L_66 = Uri_FromHex_m8891(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		V_9 = L_66;
		ByteU5BU5D_t29* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68, sizeof(uint8_t))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t29* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78, sizeof(uint8_t)))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t29* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82, sizeof(uint8_t)))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t29* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88, sizeof(uint8_t)))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_GetSchemeDelimiter_m8910 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1684* L_0 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = (((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_0, L_1, sizeof(UriScheme_t1683 )))->___scheme_0);
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1763(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1684* L_5 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = (((UriScheme_t1683 *)(UriScheme_t1683 *)SZArrayLdElema(L_5, L_6, sizeof(UriScheme_t1683 )))->___delimiter_1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1684* L_10 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern TypeInfo* UriParser_t1681_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetDefaultPort_m8911 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		s_Il2CppMethodIntialized = true;
	}
	UriParser_t1681 * V_0 = {0};
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
		UriParser_t1681 * L_1 = UriParser_GetParser_m8931(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_t1681 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t1681 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m8927(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m8912 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isOpaquePart_11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral128;
	}

IL_0011:
	{
		String_t* L_1 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_m8910(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2171_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1451;
extern Il2CppCodeGenString* _stringLiteral1450;
extern Il2CppCodeGenString* _stringLiteral1506;
extern Il2CppCodeGenString* _stringLiteral1508;
extern Il2CppCodeGenString* _stringLiteral1661;
extern Il2CppCodeGenString* _stringLiteral1658;
extern Il2CppCodeGenString* _stringLiteral1659;
extern Il2CppCodeGenString* _stringLiteral1660;
extern Il2CppCodeGenString* _stringLiteral1662;
extern Il2CppCodeGenString* _stringLiteral1663;
extern "C" bool Uri_IsPredefinedScheme_m8913 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Dictionary_2_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		Dictionary_2__ctor_m2171_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483801);
		_stringLiteral1451 = il2cpp_codegen_string_literal_from_index(1451);
		_stringLiteral1450 = il2cpp_codegen_string_literal_from_index(1450);
		_stringLiteral1506 = il2cpp_codegen_string_literal_from_index(1506);
		_stringLiteral1508 = il2cpp_codegen_string_literal_from_index(1508);
		_stringLiteral1661 = il2cpp_codegen_string_literal_from_index(1661);
		_stringLiteral1658 = il2cpp_codegen_string_literal_from_index(1658);
		_stringLiteral1659 = il2cpp_codegen_string_literal_from_index(1659);
		_stringLiteral1660 = il2cpp_codegen_string_literal_from_index(1660);
		_stringLiteral1662 = il2cpp_codegen_string_literal_from_index(1662);
		_stringLiteral1663 = il2cpp_codegen_string_literal_from_index(1663);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t239 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_2 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t239 * L_3 = (Dictionary_2_t239 *)il2cpp_codegen_object_new (Dictionary_2_t239_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2171(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m2171_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t239 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral1451, 0);
		Dictionary_2_t239 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral1450, 0);
		Dictionary_2_t239 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral1506, 0);
		Dictionary_2_t239 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1508, 0);
		Dictionary_2_t239 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1661, 0);
		Dictionary_2_t239 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral1658, 0);
		Dictionary_2_t239 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral1659, 0);
		Dictionary_2_t239 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral1660, 0);
		Dictionary_2_t239 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral1662, 0);
		Dictionary_2_t239 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral1663, 0);
		Dictionary_2_t239 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		Dictionary_2_t239 * L_15 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map16_37;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
// System.UriParser System.Uri::get_Parser()
extern TypeInfo* UriParser_t1681_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1680_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1687;
extern "C" UriParser_t1681 * Uri_get_Parser_m8914 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		DefaultUriParser_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1180);
		_stringLiteral1687 = il2cpp_codegen_string_literal_from_index(1687);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriParser_t1681 * L_0 = (__this->___parser_32);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m8880(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
		UriParser_t1681 * L_2 = UriParser_GetParser_m8931(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___parser_32 = L_2;
		UriParser_t1681 * L_3 = (__this->___parser_32);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t1680 * L_4 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8866(L_4, _stringLiteral1687, /*hidden argument*/NULL);
		__this->___parser_32 = L_4;
	}

IL_0037:
	{
		UriParser_t1681 * L_5 = (__this->___parser_32);
		return L_5;
	}
}
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" bool Uri_TryCreate_m4515 (Object_t * __this /* static, unused */, String_t* ___uriString, int32_t ___uriKind, Uri_t710 ** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Uri_t710 * V_1 = {0};
	{
		String_t* L_0 = ___uriString;
		int32_t L_1 = ___uriKind;
		Uri_t710 * L_2 = (Uri_t710 *)il2cpp_codegen_object_new (Uri_t710_il2cpp_TypeInfo_var);
		Uri__ctor_m8870(L_2, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		Uri_t710 ** L_4 = ___result;
		Uri_t710 * L_5 = V_1;
		*((Object_t **)(L_4)) = (Object_t *)L_5;
		return 1;
	}

IL_0015:
	{
		Uri_t710 ** L_6 = ___result;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
		return 0;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
extern TypeInfo* InvalidOperationException_t401_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1688;
extern "C" void Uri_EnsureAbsoluteUri_m8915 (Uri_t710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral1688 = il2cpp_codegen_string_literal_from_index(1688);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m8881(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t401 * L_1 = (InvalidOperationException_t401 *)il2cpp_codegen_object_new (InvalidOperationException_t401_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1698(L_1, _stringLiteral1688, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m8916 (Object_t * __this /* static, unused */, Uri_t710 * ___u1, Uri_t710 * ___u2, const MethodInfo* method)
{
	{
		Uri_t710 * L_0 = ___u1;
		Uri_t710 * L_1 = ___u2;
		bool L_2 = Object_Equals_m1747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern "C" bool Uri_op_Inequality_m8917 (Object_t * __this /* static, unused */, Uri_t710 * ___u1, Uri_t710 * ___u2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t710 * L_0 = ___u1;
		Uri_t710 * L_1 = ___u2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_2 = Uri_op_Equality_m8916(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriFormatException::.ctor()
extern Il2CppCodeGenString* _stringLiteral1689;
extern "C" void UriFormatException__ctor_m8918 (UriFormatException_t1685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral1689 = il2cpp_codegen_string_literal_from_index(1689);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m7563(NULL /*static, unused*/, _stringLiteral1689, /*hidden argument*/NULL);
		FormatException__ctor_m2203(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" void UriFormatException__ctor_m8919 (UriFormatException_t1685 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m2203(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException__ctor_m8920 (UriFormatException_t1685 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t845 * L_0 = ___info;
		StreamingContext_t846  L_1 = ___context;
		FormatException__ctor_m9089(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m8921 (UriFormatException_t1685 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t845 * L_0 = ___info;
		StreamingContext_t846  L_1 = ___context;
		Exception_GetObjectData_m9090(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m8922 (UriParser_t1681 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t1681_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t901_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1690;
extern Il2CppCodeGenString* _stringLiteral1691;
extern "C" void UriParser__cctor_m8923 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		UriParser_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		Regex_t901_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		_stringLiteral1690 = il2cpp_codegen_string_literal_from_index(1690);
		_stringLiteral1691 = il2cpp_codegen_string_literal_from_index(1691);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1685(L_0, /*hidden argument*/NULL);
		((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___lock_object_0 = L_0;
		Regex_t901 * L_1 = (Regex_t901 *)il2cpp_codegen_object_new (Regex_t901_il2cpp_TypeInfo_var);
		Regex__ctor_m5150(L_1, _stringLiteral1690, /*hidden argument*/NULL);
		((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___uri_regex_4 = L_1;
		Regex_t901 * L_2 = (Regex_t901 *)il2cpp_codegen_object_new (Regex_t901_il2cpp_TypeInfo_var);
		Regex__ctor_m5150(L_2, _stringLiteral1691, /*hidden argument*/NULL);
		((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___auth_regex_5 = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1685_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1687;
extern Il2CppCodeGenString* _stringLiteral1692;
extern "C" void UriParser_InitializeAndValidate_m8924 (UriParser_t1681 * __this, Uri_t710 * ___uri, UriFormatException_t1685 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		UriFormatException_t1685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		_stringLiteral1687 = il2cpp_codegen_string_literal_from_index(1687);
		_stringLiteral1692 = il2cpp_codegen_string_literal_from_index(1692);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t710 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m8880(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m1807(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1807(NULL /*static, unused*/, L_4, _stringLiteral1687, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t1685 ** L_6 = ___parsingError;
		UriFormatException_t1685 * L_7 = (UriFormatException_t1685 *)il2cpp_codegen_object_new (UriFormatException_t1685_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m8919(L_7, _stringLiteral1692, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t1685 ** L_8 = ___parsingError;
		*((Object_t **)(L_8)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m8925 (UriParser_t1681 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m8926 (UriParser_t1681 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m8927 (UriParser_t1681 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___default_port_3);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m8928 (UriParser_t1681 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___default_port_3 = L_0;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern TypeInfo* UriParser_t1681_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1377_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1680_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1693;
extern "C" void UriParser_CreateDefaults_m8929 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		Hashtable_t1377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		DefaultUriParser_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1180);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		_stringLiteral1693 = il2cpp_codegen_string_literal_from_index(1693);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t1377 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t52 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t52 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
		Hashtable_t1377 * L_0 = ((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___table_1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t1377 * L_1 = (Hashtable_t1377 *)il2cpp_codegen_object_new (Hashtable_t1377_il2cpp_TypeInfo_var);
		Hashtable__ctor_m7534(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t1377 * L_2 = V_0;
		DefaultUriParser_t1680 * L_3 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t1377 * L_5 = V_0;
		DefaultUriParser_t1680 * L_6 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t1377 * L_8 = V_0;
		DefaultUriParser_t1680 * L_9 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t1377 * L_11 = V_0;
		DefaultUriParser_t1680 * L_12 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t1377 * L_14 = V_0;
		DefaultUriParser_t1680 * L_15 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t1377 * L_17 = V_0;
		DefaultUriParser_t1680 * L_18 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t1377 * L_20 = V_0;
		DefaultUriParser_t1680 * L_21 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t1377 * L_23 = V_0;
		DefaultUriParser_t1680 * L_24 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t1377 * L_26 = V_0;
		DefaultUriParser_t1680 * L_27 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t1377 * L_29 = V_0;
		DefaultUriParser_t1680 * L_30 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t710_StaticFields*)Uri_t710_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t1377 * L_32 = V_0;
		DefaultUriParser_t1680 * L_33 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m8930(NULL /*static, unused*/, L_32, L_33, _stringLiteral1693, ((int32_t)389), /*hidden argument*/NULL);
		Object_t * L_34 = ((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___lock_object_0;
		V_1 = L_34;
		Object_t * L_35 = V_1;
		Monitor_Enter_m1854(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
			Hashtable_t1377 * L_36 = ((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___table_1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t1377 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
			((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___table_1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t1377 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t52 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Object_t * L_38 = V_1;
		Monitor_Exit_m1855(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t52 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern TypeInfo* GenericUriParser_t1682_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t1680_il2cpp_TypeInfo_var;
extern "C" void UriParser_InternalRegister_m8930 (Object_t * __this /* static, unused */, Hashtable_t1377 * ___table, UriParser_t1681 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericUriParser_t1682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1181);
		DefaultUriParser_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1180);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t1680 * V_0 = {0};
	{
		UriParser_t1681 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m8926(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1681 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m8928(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1681 * L_4 = ___uriParser;
		if (!((GenericUriParser_t1682 *)IsInstClass(L_4, GenericUriParser_t1682_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t1377 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1681 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t1680 * L_8 = (DefaultUriParser_t1680 *)il2cpp_codegen_object_new (DefaultUriParser_t1680_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m8865(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t1680 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m8926(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t1680 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m8928(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t1377 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t1680 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1681 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern TypeInfo* UriParser_t1681_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t867_il2cpp_TypeInfo_var;
extern "C" UriParser_t1681 * UriParser_GetParser_m8931 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		CultureInfo_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1681 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1681_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m8929(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t867_il2cpp_TypeInfo_var);
		CultureInfo_t867 * L_2 = CultureInfo_get_InvariantCulture_m4197(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m9085(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t1377 * L_4 = ((UriParser_t1681_StaticFields*)UriParser_t1681_il2cpp_TypeInfo_var->static_fields)->___table_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1681 *)CastclassClass(L_6, UriParser_t1681_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t710_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool UriTypeConverter_CanConvert_m8932 (UriTypeConverter_t1689 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(39);
		Uri_t710_0_0_0_var = il2cpp_codegen_type_from_index(458);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1750(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1750(NULL /*static, unused*/, LoadTypeToken(Uri_t710_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern TypeInfo* ArgumentNullException_t404_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1694;
extern "C" bool UriTypeConverter_CanConvertFrom_m8933 (UriTypeConverter_t1689 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		_stringLiteral1694 = il2cpp_codegen_string_literal_from_index(1694);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t404 * L_1 = (ArgumentNullException_t404 *)il2cpp_codegen_object_new (ArgumentNullException_t404_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1754(L_1, _stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___sourceType;
		bool L_3 = UriTypeConverter_CanConvert_m8932(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertTo_m8934 (UriTypeConverter_t1689 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Type_t * L_1 = ___destinationType;
		bool L_2 = UriTypeConverter_CanConvert_m8932(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* ArgumentNullException_t404_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t399_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral1695;
extern "C" Object_t * UriTypeConverter_ConvertFrom_m8935 (UriTypeConverter_t1689 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		NotSupportedException_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral1695 = il2cpp_codegen_string_literal_from_index(1695);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t404 * L_1 = (ArgumentNullException_t404 *)il2cpp_codegen_object_new (ArgumentNullException_t404_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1754(L_1, _stringLiteral176, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___context;
		Object_t * L_3 = ___value;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1746(L_3, /*hidden argument*/NULL);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(4 /* System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_2, L_4);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m7563(NULL /*static, unused*/, _stringLiteral1695, /*hidden argument*/NULL);
		NotSupportedException_t399 * L_7 = (NotSupportedException_t399 *)il2cpp_codegen_object_new (NotSupportedException_t399_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1828(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0033:
	{
		Object_t * L_8 = ___value;
		if (!((Uri_t710 *)IsInstClass(L_8, Uri_t710_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_9 = ___value;
		return L_9;
	}

IL_0040:
	{
		Object_t * L_10 = ___value;
		V_0 = ((String_t*)IsInstSealed(L_10, String_t_il2cpp_TypeInfo_var));
		String_t* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = V_0;
		Uri_t710 * L_13 = (Uri_t710 *)il2cpp_codegen_object_new (Uri_t710_il2cpp_TypeInfo_var);
		Uri__ctor_m8869(L_13, L_12, 0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0055:
	{
		Object_t * L_14 = ___context;
		CultureInfo_t867 * L_15 = ___culture;
		Object_t * L_16 = ___value;
		Object_t * L_17 = TypeConverter_ConvertFrom_m7992(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t710_0_0_0_var;
extern TypeInfo* NotSupportedException_t399_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1696;
extern "C" Object_t * UriTypeConverter_ConvertTo_m8936 (UriTypeConverter_t1689 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(39);
		Uri_t710_0_0_0_var = il2cpp_codegen_type_from_index(458);
		NotSupportedException_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Uri_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		_stringLiteral1696 = il2cpp_codegen_string_literal_from_index(1696);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t710 * V_0 = {0};
	{
		Object_t * L_0 = ___context;
		Type_t * L_1 = ___destinationType;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(5 /* System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7563(NULL /*static, unused*/, _stringLiteral1696, /*hidden argument*/NULL);
		NotSupportedException_t399 * L_4 = (NotSupportedException_t399 *)il2cpp_codegen_object_new (NotSupportedException_t399_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1828(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_001e:
	{
		Object_t * L_5 = ___value;
		V_0 = ((Uri_t710 *)IsInstClass(L_5, Uri_t710_il2cpp_TypeInfo_var));
		Uri_t710 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t710_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m8917(NULL /*static, unused*/, L_6, (Uri_t710 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_8 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1750(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0049;
		}
	}
	{
		Uri_t710 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_10);
		return L_11;
	}

IL_0049:
	{
		Type_t * L_12 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1750(NULL /*static, unused*/, LoadTypeToken(Uri_t710_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_12) == ((Object_t*)(Type_t *)L_13))))
		{
			goto IL_005c;
		}
	}
	{
		Uri_t710 * L_14 = V_0;
		return L_14;
	}

IL_005c:
	{
		Object_t * L_15 = ___context;
		CultureInfo_t867 * L_16 = ___culture;
		Object_t * L_17 = ___value;
		Type_t * L_18 = ___destinationType;
		Object_t * L_19 = TypeConverter_ConvertTo_m7998(__this, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RefreshEventHandler__ctor_m8937 (RefreshEventHandler_t1551 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C" void RefreshEventHandler_Invoke_m8938 (RefreshEventHandler_t1551 * __this, RefreshEventArgs_t1538 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RefreshEventHandler_Invoke_m8938((RefreshEventHandler_t1551 *)__this->___prev_9,___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RefreshEventArgs_t1538 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RefreshEventArgs_t1538 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_RefreshEventHandler_t1551(Il2CppObject* delegate, RefreshEventArgs_t1538 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	RefreshEventArgs_t1538 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.ComponentModel.RefreshEventArgs'."));
}
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * RefreshEventHandler_BeginInvoke_m8939 (RefreshEventHandler_t1551 * __this, RefreshEventArgs_t1538 * ___e, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RefreshEventHandler_EndInvoke_m8940 (RefreshEventHandler_t1551 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m8941 (RemoteCertificateValidationCallback_t1462 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m7545 (RemoteCertificateValidationCallback_t1462 * __this, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RemoteCertificateValidationCallback_Invoke_m7545((RemoteCertificateValidationCallback_t1462 *)__this->___prev_9,___sender, ___certificate, ___chain, ___sslPolicyErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1462(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern TypeInfo* SslPolicyErrors_t1565_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m8942 (RemoteCertificateValidationCallback_t1462 * __this, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslPolicyErrors_t1565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___certificate;
	__d_args[2] = ___chain;
	__d_args[3] = Box(SslPolicyErrors_t1565_il2cpp_TypeInfo_var, &___sslPolicyErrors);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m8943 (RemoteCertificateValidationCallback_t1462 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchEvaluator__ctor_m8944 (MatchEvaluator_t1690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C" String_t* MatchEvaluator_Invoke_m8945 (MatchEvaluator_t1690 * __this, Match_t1079 * ___match, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MatchEvaluator_Invoke_m8945((MatchEvaluator_t1690 *)__this->___prev_9,___match, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t *, Object_t * __this, Match_t1079 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, Match_t1079 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1690(Il2CppObject* delegate, Match_t1079 * ___match)
{
	// Marshaling of parameter '___match' to native representation
	Match_t1079 * ____match_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));
}
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchEvaluator_BeginInvoke_m8946 (MatchEvaluator_t1690 * __this, Match_t1079 * ___match, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___match;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m8947 (MatchEvaluator_t1690 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1691_marshal(const U24ArrayTypeU24128_t1691& unmarshaled, U24ArrayTypeU24128_t1691_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU24128_t1691_marshal_back(const U24ArrayTypeU24128_t1691_marshaled& marshaled, U24ArrayTypeU24128_t1691& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void U24ArrayTypeU24128_t1691_marshal_cleanup(U24ArrayTypeU24128_t1691_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1692_marshal(const U24ArrayTypeU2412_t1692& unmarshaled, U24ArrayTypeU2412_t1692_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2412_t1692_marshal_back(const U24ArrayTypeU2412_t1692_marshaled& marshaled, U24ArrayTypeU2412_t1692& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void U24ArrayTypeU2412_t1692_marshal_cleanup(U24ArrayTypeU2412_t1692_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// UnityEngine.UI.FontData
struct FontData_t1156;
// UnityEngine.Font
struct Font_t94;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"

// System.Void UnityEngine.UI.FontData::.ctor()
extern "C" void FontData__ctor_m5567 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5568 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5569 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.FontData UnityEngine.UI.FontData::get_defaultFontData()
extern "C" FontData_t1156 * FontData_get_defaultFontData_m5570 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.FontData::get_font()
extern "C" Font_t94 * FontData_get_font_m5571 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_font(UnityEngine.Font)
extern "C" void FontData_set_font_m5572 (FontData_t1156 * __this, Font_t94 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_fontSize()
extern "C" int32_t FontData_get_fontSize_m5573 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontSize(System.Int32)
extern "C" void FontData_set_fontSize_m5574 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.FontData::get_fontStyle()
extern "C" int32_t FontData_get_fontStyle_m5575 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontStyle(UnityEngine.FontStyle)
extern "C" void FontData_set_fontStyle_m5576 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_bestFit()
extern "C" bool FontData_get_bestFit_m5577 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_bestFit(System.Boolean)
extern "C" void FontData_set_bestFit_m5578 (FontData_t1156 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_minSize()
extern "C" int32_t FontData_get_minSize_m5579 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_minSize(System.Int32)
extern "C" void FontData_set_minSize_m5580 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_maxSize()
extern "C" int32_t FontData_get_maxSize_m5581 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_maxSize(System.Int32)
extern "C" void FontData_set_maxSize_m5582 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.FontData::get_alignment()
extern "C" int32_t FontData_get_alignment_m5583 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_alignment(UnityEngine.TextAnchor)
extern "C" void FontData_set_alignment_m5584 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_richText()
extern "C" bool FontData_get_richText_m5585 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_richText(System.Boolean)
extern "C" void FontData_set_richText_m5586 (FontData_t1156 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::get_horizontalOverflow()
extern "C" int32_t FontData_get_horizontalOverflow_m5587 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void FontData_set_horizontalOverflow_m5588 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::get_verticalOverflow()
extern "C" int32_t FontData_get_verticalOverflow_m5589 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void FontData_set_verticalOverflow_m5590 (FontData_t1156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.FontData::get_lineSpacing()
extern "C" float FontData_get_lineSpacing_m5591 (FontData_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_lineSpacing(System.Single)
extern "C" void FontData_set_lineSpacing_m5592 (FontData_t1156 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

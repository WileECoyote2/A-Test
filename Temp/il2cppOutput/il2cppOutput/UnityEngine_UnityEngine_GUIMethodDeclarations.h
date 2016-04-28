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

// UnityEngine.GUISkin
struct GUISkin_t573;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t99;
// UnityEngine.GUIContent
struct GUIContent_t428;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t572;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2717 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2718 (Object_t * __this /* static, unused */, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2719 (Object_t * __this /* static, unused */, GUISkin_t573 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t573 * GUI_get_skin_m2720 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C" void GUI_set_color_m1935 (Object_t * __this /* static, unused */, Color_t117  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m2721 (Object_t * __this /* static, unused */, Color_t117 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2722 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m1809 (Object_t * __this /* static, unused */, Rect_t98  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m1934 (Object_t * __this /* static, unused */, Rect_t98  ___position, String_t* ___text, GUIStyle_t99 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m2723 (Object_t * __this /* static, unused */, Rect_t98  ___position, GUIContent_t428 * ___content, GUIStyle_t99 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m2724 (Object_t * __this /* static, unused */, Rect_t98  ___position, GUIContent_t428 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m2725 (Object_t * __this /* static, unused */, Rect_t98 * ___position, GUIContent_t428 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C" void GUI_Box_m1933 (Object_t * __this /* static, unused */, Rect_t98  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m2726 (Object_t * __this /* static, unused */, Rect_t98  ___position, GUIContent_t428 * ___content, GUIStyle_t99 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m2075 (Object_t * __this /* static, unused */, Rect_t98  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m2727 (Object_t * __this /* static, unused */, Rect_t98  ___position, GUIContent_t428 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m2728 (Object_t * __this /* static, unused */, Rect_t98 * ___position, GUIContent_t428 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2729 (Object_t * __this /* static, unused */, WindowFunction_t572 * ___func, int32_t ___id, GUISkin_t573 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t99 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;

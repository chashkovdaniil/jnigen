// Copyright (c) 2022, the Dart project authors. Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

// Autogenerated by jnigen. DO NOT EDIT!

#include <stdint.h>
#include "dartjni.h"
#include "jni.h"

thread_local JNIEnv* jniEnv;
JniContext jni;

JniContext (*context_getter)(void);
JNIEnv* (*env_getter)(void);

void setJniGetters(JniContext (*cg)(void), JNIEnv* (*eg)(void)) {
  context_getter = cg;
  env_getter = eg;
}

// com.github.dart_lang.jnigen.simple_package.Example
jclass _c_Example = NULL;

jmethodID _m_Example__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__ctor() {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example, &_m_Example__ctor, "<init>", "()V");
  if (_m_Example__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->NewObject(jniEnv, _c_Example, _m_Example__ctor);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Example__whichExample = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__whichExample(jobject self_) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example, &_m_Example__whichExample, "whichExample", "()I");
  if (_m_Example__whichExample == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result =
      (*jniEnv)->CallIntMethod(jniEnv, self_, _m_Example__whichExample);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

jmethodID _m_Example__getAux = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__getAux() {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(
      _c_Example, &_m_Example__getAux, "getAux",
      "()Lcom/github/dart_lang/jnigen/simple_package/Example$Aux;");
  if (_m_Example__getAux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallStaticObjectMethod(jniEnv, _c_Example, _m_Example__getAux);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Example__addInts = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__addInts(int32_t a, int32_t b) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_Example, &_m_Example__addInts, "addInts", "(II)I");
  if (_m_Example__addInts == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result = (*jniEnv)->CallStaticIntMethod(jniEnv, _c_Example,
                                                   _m_Example__addInts, a, b);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

jmethodID _m_Example__getSelf = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__getSelf(jobject self_) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example, &_m_Example__getSelf, "getSelf",
              "()Lcom/github/dart_lang/jnigen/simple_package/Example;");
  if (_m_Example__getSelf == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_Example__getSelf);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Example__getNum = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__getNum(jobject self_) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example, &_m_Example__getNum, "getNum", "()I");
  if (_m_Example__getNum == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result = (*jniEnv)->CallIntMethod(jniEnv, self_, _m_Example__getNum);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

jmethodID _m_Example__setNum = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__setNum(jobject self_, int32_t num) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example, &_m_Example__setNum, "setNum", "(I)V");
  if (_m_Example__setNum == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_Example__setNum, num);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jmethodID _m_Example__throwException = NULL;
FFI_PLUGIN_EXPORT
JniResult Example__throwException() {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_Example, &_m_Example__throwException, "throwException",
                     "()V");
  if (_m_Example__throwException == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallStaticVoidMethod(jniEnv, _c_Example,
                                  _m_Example__throwException);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jfieldID _f_Example__aux = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Example__aux() {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Example, &_f_Example__aux, "aux",
                    "Lcom/github/dart_lang/jnigen/simple_package/Example$Aux;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Example, _f_Example__aux));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

FFI_PLUGIN_EXPORT
JniResult set_Example__aux(jobject value) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Example, &_f_Example__aux, "aux",
                    "Lcom/github/dart_lang/jnigen/simple_package/Example$Aux;");
  (*jniEnv)->SetStaticObjectField(jniEnv, _c_Example, _f_Example__aux, value);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jfieldID _f_Example__num = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Example__num() {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Example, &_f_Example__num, "num", "I");
  int32_t _result =
      (*jniEnv)->GetStaticIntField(jniEnv, _c_Example, _f_Example__num);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

FFI_PLUGIN_EXPORT
JniResult set_Example__num(int32_t value) {
  load_env();
  load_class_gr(&_c_Example,
                "com/github/dart_lang/jnigen/simple_package/Example");
  if (_c_Example == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Example, &_f_Example__num, "num", "I");
  (*jniEnv)->SetStaticIntField(jniEnv, _c_Example, _f_Example__num, value);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

// com.github.dart_lang.jnigen.simple_package.Example$Aux
jclass _c_Example_Aux = NULL;

jmethodID _m_Example_Aux__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult Example_Aux__ctor(uint8_t value) {
  load_env();
  load_class_gr(&_c_Example_Aux,
                "com/github/dart_lang/jnigen/simple_package/Example$Aux");
  if (_c_Example_Aux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example_Aux, &_m_Example_Aux__ctor, "<init>", "(Z)V");
  if (_m_Example_Aux__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->NewObject(jniEnv, _c_Example_Aux, _m_Example_Aux__ctor, value);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Example_Aux__getValue = NULL;
FFI_PLUGIN_EXPORT
JniResult Example_Aux__getValue(jobject self_) {
  load_env();
  load_class_gr(&_c_Example_Aux,
                "com/github/dart_lang/jnigen/simple_package/Example$Aux");
  if (_c_Example_Aux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example_Aux, &_m_Example_Aux__getValue, "getValue", "()Z");
  if (_m_Example_Aux__getValue == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result =
      (*jniEnv)->CallBooleanMethod(jniEnv, self_, _m_Example_Aux__getValue);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_Example_Aux__setValue = NULL;
FFI_PLUGIN_EXPORT
JniResult Example_Aux__setValue(jobject self_, uint8_t value) {
  load_env();
  load_class_gr(&_c_Example_Aux,
                "com/github/dart_lang/jnigen/simple_package/Example$Aux");
  if (_c_Example_Aux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example_Aux, &_m_Example_Aux__setValue, "setValue", "(Z)V");
  if (_m_Example_Aux__setValue == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_Example_Aux__setValue, value);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jfieldID _f_Example_Aux__value = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Example_Aux__value(jobject self_) {
  load_env();
  load_class_gr(&_c_Example_Aux,
                "com/github/dart_lang/jnigen/simple_package/Example$Aux");
  if (_c_Example_Aux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_field(_c_Example_Aux, &_f_Example_Aux__value, "value", "Z");
  uint8_t _result =
      (*jniEnv)->GetBooleanField(jniEnv, self_, _f_Example_Aux__value);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

FFI_PLUGIN_EXPORT
JniResult set_Example_Aux__value(jobject self_, uint8_t value) {
  load_env();
  load_class_gr(&_c_Example_Aux,
                "com/github/dart_lang/jnigen/simple_package/Example$Aux");
  if (_c_Example_Aux == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_field(_c_Example_Aux, &_f_Example_Aux__value, "value", "Z");
  (*jniEnv)->SetBooleanField(jniEnv, self_, _f_Example_Aux__value, value);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

// com.github.dart_lang.jnigen.pkg2.C2
jclass _c_C2 = NULL;

jmethodID _m_C2__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult C2__ctor() {
  load_env();
  load_class_gr(&_c_C2, "com/github/dart_lang/jnigen/pkg2/C2");
  if (_c_C2 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_C2, &_m_C2__ctor, "<init>", "()V");
  if (_m_C2__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->NewObject(jniEnv, _c_C2, _m_C2__ctor);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jfieldID _f_C2__CONSTANT = NULL;
FFI_PLUGIN_EXPORT
JniResult get_C2__CONSTANT() {
  load_env();
  load_class_gr(&_c_C2, "com/github/dart_lang/jnigen/pkg2/C2");
  if (_c_C2 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_C2, &_f_C2__CONSTANT, "CONSTANT", "I");
  int32_t _result =
      (*jniEnv)->GetStaticIntField(jniEnv, _c_C2, _f_C2__CONSTANT);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

FFI_PLUGIN_EXPORT
JniResult set_C2__CONSTANT(int32_t value) {
  load_env();
  load_class_gr(&_c_C2, "com/github/dart_lang/jnigen/pkg2/C2");
  if (_c_C2 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_C2, &_f_C2__CONSTANT, "CONSTANT", "I");
  (*jniEnv)->SetStaticIntField(jniEnv, _c_C2, _f_C2__CONSTANT, value);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

// com.github.dart_lang.jnigen.pkg2.Example
jclass _c_Example1 = NULL;

jmethodID _m_Example1__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult Example1__ctor() {
  load_env();
  load_class_gr(&_c_Example1, "com/github/dart_lang/jnigen/pkg2/Example");
  if (_c_Example1 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example1, &_m_Example1__ctor, "<init>", "()V");
  if (_m_Example1__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->NewObject(jniEnv, _c_Example1, _m_Example1__ctor);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Example1__whichExample = NULL;
FFI_PLUGIN_EXPORT
JniResult Example1__whichExample(jobject self_) {
  load_env();
  load_class_gr(&_c_Example1, "com/github/dart_lang/jnigen/pkg2/Example");
  if (_c_Example1 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Example1, &_m_Example1__whichExample, "whichExample", "()I");
  if (_m_Example1__whichExample == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result =
      (*jniEnv)->CallIntMethod(jniEnv, self_, _m_Example1__whichExample);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_carboncrystal_spine_SpineAnimation */

#ifndef _Included_com_carboncrystal_spine_SpineAnimation
#define _Included_com_carboncrystal_spine_SpineAnimation
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    setXY
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_setXY
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    draw
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_draw
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    step
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_step
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    init
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_init
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    sync
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_sync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    getAABB
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_carboncrystal_spine_SpineAnimation_getAABB
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    setAnimation
 * Signature: (JILjava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_carboncrystal_spine_SpineAnimation_setAnimation
  (JNIEnv *, jobject, jlong, jint, jstring, jboolean);

/*
 * Class:     com_carboncrystal_spine_SpineAnimation
 * Method:    addAnimation
 * Signature: (JILjava/lang/String;ZF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_carboncrystal_spine_SpineAnimation_addAnimation
  (JNIEnv *, jobject, jlong, jint, jstring, jboolean, jfloat);

#ifdef __cplusplus
}
#endif
#endif

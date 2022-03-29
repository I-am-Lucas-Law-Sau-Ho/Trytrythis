/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/features2d.hpp>
#include <vector>
#include "test.h"
#include<android/bitmap.h>
/* Header for class com_example_wurui_kcf_ndk_jniKCF */

#ifndef _Included_com_example_wurui_kcf_ndk_jniKCF
#define _Included_com_example_wurui_kcf_ndk_jniKCF
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_wurui_kcf_ndk_jniKCF
 * Method:    createNativeObject
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_camera_hj_cameracontroller_decoder_jniKCF_createNativeObject
        (JNIEnv *, jobject);

/*
 * Class:     camera_hj_cameracontroller_decoder_jniKCF
 * Method:    kcfInit
 * Signature: (JLjava/lang/Object;[I)V
 */
JNIEXPORT void JNICALL Java_camera_hj_cameracontroller_decoder_jniKCF_kcfInit
        (JNIEnv *, jobject, jlong, jobject, jintArray);

/*
 * Class:     camera_hj_cameracontroller_decoder_jniKCF
 * Method:    kcfUpdate
 * Signature: (JLjava/lang/Object;)[I
 */
JNIEXPORT jintArray JNICALL Java_camera_hj_cameracontroller_decoder_jniKCF_kcfUpdate
        (JNIEnv *, jobject, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
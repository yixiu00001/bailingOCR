/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "MSERProcess.h"
/* Header for class org_img_processing_BailingJni */

#ifndef _Included_org_img_processing_BailingJni
#define _Included_org_img_processing_BailingJni
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     org_img_processing_BailingJni
	 * Method:    processing
	 * Signature: (I[B)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_org_img_processing_BailingJni_processing
		(JNIEnv *, jobject, MSERProcess *, jbyteArray);

	/*
	 * Class:     org_img_processing_BailingJni
	 * Method:    initPath
	 * Signature: (Ljava/lang/String;)I
	 */
	JNIEXPORT MSERProcess* JNICALL Java_org_img_processing_BailingJni_initPath
		(JNIEnv *, jobject, jstring);

	/*
	 * Class:     org_img_processing_ImgJni
	 * Method:    delete
	 * Signature: (I)V
	 */
	JNIEXPORT void JNICALL Java_org_img_processing_BailingJni_delete
		(JNIEnv *, jobject, MSERProcess *);
#ifdef __cplusplus
}
#endif
#endif

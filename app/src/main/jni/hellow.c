//
// Created by Administrator on 2017/8/31.
//

#include <jni.h>

JNIEXPORT jstring JNICALL Java_com_jindemo_jindemo_HelloWorld_sayHello(JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env, "hellow word jni android studio");
}
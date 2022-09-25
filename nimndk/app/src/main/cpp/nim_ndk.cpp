#include <jni.h>
#include <stdio.h>
#include "@mandroid.nim.c"
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nim_1ndk_MainActivity_nim_1hello(JNIEnv *env, jobject thiz)
{
    NimMain();
    // 不知道怎么调用
    //N_NIMCALL("hello");
    //return (*env).NewStringUTF();
    //return (*env).NewStringUTF("nim hello");
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nim_1ndk_MainActivity_c_1hello(JNIEnv *env, jobject thiz)
{
    return (*env).NewStringUTF("c hello");
}
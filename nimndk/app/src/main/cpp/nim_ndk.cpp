#include <jni.h>
#include <stdio.h>
#include "@mandroid.nim.c"
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nim_1ndk_MainActivity_nim_1hello(JNIEnv *env, jobject thiz)
{
    NimMain();
    hello();
    // 不知道怎么调用
    //return (*env).NewStringUTF();
    //return (*env).NewStringUTF("nim hello");
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_nim_1ndk_MainActivity_c_1hello(JNIEnv *env, jobject thiz)
{
    return (*env).NewStringUTF("c hello");
}
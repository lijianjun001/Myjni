#include <jni.h>
#include <string>
#include <iostream>
using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lijianjun_jni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int a=10,b=20;
    string hello = "Hello from C++"+a+b;
    cout << "Hello World!\n";
    return env->NewStringUTF(hello.c_str());
}

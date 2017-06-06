#include <jni.h>
#include <string>

using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lijianjun_jni_MyJnilibs_getPw(
        JNIEnv *env,
        jobject /* this */) {
    string pw = "13201221233";
    return env->NewStringUTF(pw.c_str());
}

extern "C"
JNIEXPORT int JNICALL
Java_com_lijianjun_jni_MyJnilibs_add(
        JNIEnv *env,
        jobject /* this */,int a,int b) {
    string pw = "13201221233";
    int c=a+b;
    return c;
}
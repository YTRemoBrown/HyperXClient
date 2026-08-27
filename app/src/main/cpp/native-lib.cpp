#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_hyperx_client_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject) {

    return env->NewStringUTF("HyperX Client C++");
}

#include <jni.h>
#include "core/Client.hpp"
#include "api/Client.hpp"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_hyperx_client_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject) {

    hyperx::core::Client::initialize();

    return env->NewStringUTF(
        hyperx::api::Client::getName()
    );
}

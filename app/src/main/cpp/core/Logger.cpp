#include "Logger.hpp"
#include <android/log.h>

#define HYPERX_TAG "HyperXClient"

namespace hyperx::core {

void Logger::info(const char* message) {
    __android_log_print(ANDROID_LOG_INFO, HYPERX_TAG, "%s", message);
}

void Logger::error(const char* message) {
    __android_log_print(ANDROID_LOG_ERROR, HYPERX_TAG, "%s", message);
}

}

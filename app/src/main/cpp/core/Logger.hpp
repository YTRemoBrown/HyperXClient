#pragma once

namespace hyperx::core {

class Logger {
public:
    static void info(const char* message);
    static void error(const char* message);
};

}

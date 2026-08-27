#pragma once

#include <cstdint>
#include <unordered_map>

namespace hyperx::core {

class HookManager {
public:
    static HookManager& instance();

    bool initialize();
    bool isInitialized() const;

private:
    HookManager() = default;

    bool initialized = false;
};

}

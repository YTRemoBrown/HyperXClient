#include "HookManager.hpp"
#include "Logger.hpp"

namespace hyperx::core {

HookManager& HookManager::instance() {
    static HookManager manager;
    return manager;
}

bool HookManager::initialize() {
    if (initialized)
        return true;

    Logger::info("Initializing HookManager");

    // Hook backend will be connected here later.

    initialized = true;

    Logger::info("HookManager initialized");
    return true;
}

bool HookManager::isInitialized() const {
    return initialized;
}

}

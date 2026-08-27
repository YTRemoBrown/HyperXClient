#include "ModuleManager.hpp"
#include "Logger.hpp"

namespace hyperx::core {

ModuleManager& ModuleManager::instance() {
    static ModuleManager manager;
    return manager;
}

void ModuleManager::registerModule(
    std::unique_ptr<Module> module
) {
    if (!module)
        return;

    Logger::info("Registering module");
    modules.push_back(std::move(module));
}

const std::vector<std::unique_ptr<Module>>&
ModuleManager::getModules() const {
    return modules;
}

}

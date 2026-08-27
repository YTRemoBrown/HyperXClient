#pragma once

#include "Module.hpp"
#include <memory>
#include <vector>

namespace hyperx::core {

class ModuleManager {
public:
    static ModuleManager& instance();

    void registerModule(std::unique_ptr<Module> module);

    const std::vector<std::unique_ptr<Module>>& getModules() const;

private:
    ModuleManager() = default;

    std::vector<std::unique_ptr<Module>> modules;
};

}

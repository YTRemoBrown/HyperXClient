#pragma once

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

namespace hyperx::core {

class EventBus {
public:
    using Listener = std::function<void()>;

    static EventBus& instance();

    void subscribe(const std::string& event, Listener listener);
    void emit(const std::string& event);

private:
    std::unordered_map<std::string, std::vector<Listener>> listeners;
};

}

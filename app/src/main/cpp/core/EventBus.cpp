#include "EventBus.hpp"

namespace hyperx::core {

EventBus& EventBus::instance() {
    static EventBus bus;
    return bus;
}

void EventBus::subscribe(
    const std::string& event,
    Listener listener
) {
    listeners[event].push_back(std::move(listener));
}

void EventBus::emit(const std::string& event) {
    auto it = listeners.find(event);

    if (it == listeners.end())
        return;

    for (auto& listener : it->second) {
        if (listener)
            listener();
    }
}

}

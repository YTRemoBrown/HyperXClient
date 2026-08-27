#include "Client.hpp"
#include "Logger.hpp"
#include "EventBus.hpp"
#include "../api/Client.hpp"

namespace hyperx::api {

void Client::initialize() {
}

const char* Client::getName() {
    return "HyperX Client";
}

}

namespace hyperx::core {

void Client::initialize() {
    Logger::info("Initializing HyperX Client");

    EventBus::instance().subscribe("client_initialized", []() {
        Logger::info("HyperX Client initialized");
    });

    EventBus::instance().emit("client_initialized");

    hyperx::api::Client::initialize();
}

}

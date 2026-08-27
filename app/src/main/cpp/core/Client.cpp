#include "Client.hpp"
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
    hyperx::api::Client::initialize();
}

}

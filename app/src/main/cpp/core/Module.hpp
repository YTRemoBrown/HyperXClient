#pragma once

namespace hyperx::core {

class Module {
public:
    virtual ~Module() = default;

    virtual const char* getName() const = 0;

    virtual void onEnable() {}
    virtual void onDisable() {}

    bool isEnabled() const {
        return enabled;
    }

    void setEnabled(bool value) {
        if (enabled == value)
            return;

        enabled = value;

        if (enabled)
            onEnable();
        else
            onDisable();
    }

private:
    bool enabled = false;
};

}

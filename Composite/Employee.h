#pragma once
#include <string>

struct Employee {
    virtual void showDetails(int indent = 0) const = 0;
    virtual ~Employee() = default;
};

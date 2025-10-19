#pragma once
#include "Employee.h"
#include <iostream>

class Designer : public Employee {
private:
    std::string name;

public:
    Designer(const std::string& name) : name(name) {}

    void showDetails(int indent = 0) const override {
        std::cout << std::string(indent, ' ') << "Designer: " << name << std::endl;
    }
};

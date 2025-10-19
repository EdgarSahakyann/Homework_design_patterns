#pragma once
#include "Employee.h"
#include <iostream>

class Developer : public Employee {
private:
    std::string name;

public:
    Developer(const std::string& name) : name(name) {}

    void showDetails(int indent = 0) const override {
        std::cout << std::string(indent, ' ') << "Developer: " << name << std::endl;
    }
};

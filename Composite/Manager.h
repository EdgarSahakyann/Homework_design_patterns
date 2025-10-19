#pragma once
#include "Employee.h"
#include <vector>
#include <iostream>
#include <memory>

class Manager : public Employee {
private:
    std::string name;
    std::vector<std::shared_ptr<Employee>> team;

public:
    Manager(const std::string& n) : name(n) {}

    void addEmployee(std::shared_ptr<Employee> emp) {
        team.push_back(emp);
    }

    void showDetails(int indent = 0) const override {
        std::cout << std::string(indent, ' ') << "Manager: " << name << std::endl;
        for (const auto& emp : team) {
            emp->showDetails(indent + 4);
        }
    }
};

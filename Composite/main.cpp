#include "Developer.h"
#include "Designer.h"
#include "Manager.h"
#include <memory>

int main() {
    auto devBob = std::make_shared<Developer>("Bob");
    auto designerTom = std::make_shared<Designer>("Tom");
    auto devJack = std::make_shared<Developer>("Jack");
    auto designerFrank = std::make_shared<Designer>("Frank");

    auto managerDave = std::make_shared<Manager>("Dave");
    managerDave->addEmployee(devJack);
    managerDave->addEmployee(designerFrank);

    Manager alice("Alice");
    alice.addEmployee(devBob);
    alice.addEmployee(designerTom);
    alice.addEmployee(managerDave);

    alice.showDetails();

    return 0;
}
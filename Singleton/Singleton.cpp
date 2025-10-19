#include "Singleton.h"
#include <iostream>

Singleton::Singleton() {
    std::cout << "Instance created." << std::endl;
}

Singleton::~Singleton() {
    std::cout << "Instance destroyed." << std::endl;
}

Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::doSomething() {
    std::cout << "Doing something." << std::endl;
}
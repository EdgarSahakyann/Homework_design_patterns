#include "Singleton.h"
#include <iostream>

int main() {
    Singleton& s1 = Singleton::getInstance();
    s1.doSomething();

    Singleton& s2 = Singleton::getInstance();
    s2.doSomething();

    if (&s1 == &s2) {
        std::cout << "s1 and s2 are the same instance." << std::endl;
    }

    return 0;
}
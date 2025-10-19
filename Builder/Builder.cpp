#include "Builder.h"

void Pizza::describe() const {
    std::cout << "Pizza Details:'" << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Sauce: " << sauce << std::endl;
    std::cout << "Toppings: " << toppings << std::endl;
}

PizzaBuilder& CustomPizzaBuilder::setSize(const std::string& size) {
    pizza.size = size;
    return *this;
}

PizzaBuilder& CustomPizzaBuilder::setSauce(const std::string& sauce) {
    pizza.sauce = sauce;
    return *this;
}

PizzaBuilder& CustomPizzaBuilder::setToppings(const std::string& toppings) {
    pizza.toppings = toppings;
    return *this;
}

Pizza CustomPizzaBuilder::build() {
    return pizza;
}
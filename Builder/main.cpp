#include "Builder.h"

int main() {
    CustomPizzaBuilder builder;

    Pizza myPizza = builder
        .setSize("Large")
        .setSauce("Tomato Basil")
        .setToppings("Mozzarella, Pepperoni, Olives")
        .build();

    myPizza.describe();

    return 0;
}
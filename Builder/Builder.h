#pragma once
#include <string>
#include <iostream>

struct Pizza {

    std::string size;
    std::string sauce;
    std::string toppings;

    void describe() const;
};

struct PizzaBuilder {
    virtual PizzaBuilder& setSize(const std::string&) = 0;
    virtual PizzaBuilder& setSauce(const std::string&) = 0;
    virtual PizzaBuilder& setToppings(const std::string&) = 0;

    virtual Pizza build() = 0;
    virtual ~PizzaBuilder() = default;
};

class CustomPizzaBuilder : public PizzaBuilder {
public:
    PizzaBuilder& setSize(const std::string& size) override;
    PizzaBuilder& setSauce(const std::string& sauce) override;
    PizzaBuilder& setToppings(const std::string& toppings) override;

    Pizza build() override;

private:
    Pizza pizza;
};
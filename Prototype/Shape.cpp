#include "Shape.h"
#include <iostream>

Circle::Circle(const std::string& c, int r) : color(c), radius(r) {}

std::unique_ptr<Shape> Circle::clone() const {
    return std::make_unique<Circle>(*this);
}

void Circle::draw() const {
    std::cout << "Drawing a " << color << " circle with radius " << radius << ".\n";
}

Rectangle::Rectangle(const std::string& c, int w, int h) : color(c), width(w), height(h) {}

std::unique_ptr<Shape> Rectangle::clone() const {
    return std::make_unique<Rectangle>(*this);
}

void Rectangle::draw() const {
    std::cout << "Drawing a " << color << " rectangle " << width << "x" << height << ".\n";
}
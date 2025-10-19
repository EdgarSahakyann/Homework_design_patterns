#pragma once

#include <string>
#include <memory>

class Shape {
public:
    virtual ~Shape() = default;
    virtual std::unique_ptr<Shape> clone() const = 0;
    virtual void draw() const = 0;
};

class Circle : public Shape {
private:
    std::string color;
    int radius;

public:
    Circle(const std::string& color, int radius);
    std::unique_ptr<Shape> clone() const override;
    void draw() const override;
};

class Rectangle : public Shape {
private:
    std::string color;
    int width;
    int height;

public:
    Rectangle(const std::string& color, int width, int height);
    std::unique_ptr<Shape> clone() const override;
    void draw() const override;
};
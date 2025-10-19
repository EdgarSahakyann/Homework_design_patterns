#include "Shape.h"
#include <memory>
#include <vector>

int main() {
    std::unique_ptr<Shape> redCircle = std::make_unique<Circle>("Red", 10);
    std::unique_ptr<Shape> blueRectangle = std::make_unique<Rectangle>("Blue", 40, 20);

    auto circleClone1 = redCircle->clone();
    auto circleClone2 = redCircle->clone();
    auto rectClone1 = blueRectangle->clone();

    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::move(redCircle));
    shapes.push_back(std::move(circleClone1));
    shapes.push_back(std::move(circleClone2));
    shapes.push_back(std::move(blueRectangle));
    shapes.push_back(std::move(rectClone1));

    for (const auto& shape : shapes) {
        shape->draw();
    }

    return 0;
}
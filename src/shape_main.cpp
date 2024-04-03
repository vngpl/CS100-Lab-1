#include <iostream>
#include <stdexcept>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

int main() {
    int option;
    int height;
    int width;
    int base;

    std::cout << "Choose a rectangle or a triangle by entering a '1' for rectangle and '2' for triangle" << std::endl;
    std::cin >> option;
    if (!std::cin || (option != 1 && option != 2)) {
        throw std::runtime_error("invalid input, enter '1' for rectangle or '2' for triangle");
    }

    std::cout << "Enter a height: ";
    std::cin >> height;
    if (!std::cin) throw std::runtime_error("invalid height");

    switch (option) {
        case 1:
            std::cout << "Enter a width: ";
            std::cin >> width;
            if (!std::cin) throw std::runtime_error("invalid width");

            Rectangle rect;

            rect.set_height(height);
            rect.set_width(width);

            std::cout << "Area of rectangle: " << rect.area() << std::endl;
            break;
        case 2:
            std::cout << "Enter base: ";
            std::cin >> base;
            if (!std::cin) throw std::runtime_error("invalid base");

            Triangle tri;

            tri.set_height(height);
            tri.set_base(base);

            std::cout << "Area of triangle: " << tri.area() << std::endl;
            break;
    }

    return 0;
}
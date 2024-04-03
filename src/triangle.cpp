#include "../header/triangle.hpp"

void Triangle::set_height(int h) {
    height = h;
}

void Triangle::set_base(int b) {
    base = b;
}

int Triangle::area() {
    return 0.5 * base * height;
}
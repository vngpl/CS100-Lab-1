#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
	width = w;
}

void Rectangle::set_height(int h) {
	height = h;
}

int Rectangle::area() {
	return width * height;
}

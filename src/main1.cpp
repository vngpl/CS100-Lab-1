#include <iostream>
#include "../header/rectangle.hpp"

int main() {
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	std::cout << "Rectangle area: " << rect.area() << std::endl;
	return 0;
}

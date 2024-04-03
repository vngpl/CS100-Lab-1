#include <iostream>
#include "../header/rectangle.hpp"

int main() {
	Rectangle rect, rect2;
	rect.set_width(3);
	rect.set_height(4);

	rect2.set_width(4);
	rect2.set_height(2);

	std::cout << "Rectangle area: " << rect.area() << std::endl;
	std::cout << "Rectangle 2's area: " << rect2.area() << std::endl;

	return 0;
}

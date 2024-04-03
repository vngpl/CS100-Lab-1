#include <iostream>
#include "../header/rectangle.hpp"

int main() {
	Rectangle rect;
	rect.set_width(15);
	rect.set_height(30);
	std::cout << "Rectangle area: " << rect.area() << std::endl;
	return 0;
}

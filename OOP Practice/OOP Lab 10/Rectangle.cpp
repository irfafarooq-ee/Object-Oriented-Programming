#include <iostream>
#include "Rectangle.h"

void Rectangle::Area() {
	std::cout << "Area of rectangle = " << get_lenth() * get_width() << " m^2" << std::endl;
}
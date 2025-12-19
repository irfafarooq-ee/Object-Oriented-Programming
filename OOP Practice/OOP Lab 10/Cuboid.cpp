#include <iostream>
#include "Cuboid.h"

Cuboid::Cuboid() {
	height2 = 0;
}
void Cuboid::set_height2(double h2) {
	height2 = h2;
}
double Cuboid::get_height2() {
	return height2;
}
void Cuboid::Area() {
	std::cout << "Area of cuboid = " << 2 * ((get_lenth() * get_width()) + (get_width() * get_height2()) + (get_height2() * get_lenth())) << " m^2" << std::endl;
}
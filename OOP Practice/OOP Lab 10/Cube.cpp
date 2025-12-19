#include <iostream>
#include "Cube.h"

Cube::Cube() {
	height1 = 0;
}
void Cube::set_height1(double h1) {
	height1 = h1;
}
double Cube::get_heigh1() {
	return height1;
}
void Cube::Area() {
	std::cout << "Area of Cube = " << 6 * get_lenth() * get_lenth() << " m^2" << std::endl;
}
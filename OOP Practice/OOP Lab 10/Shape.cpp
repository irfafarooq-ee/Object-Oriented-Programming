#include <iostream>
#include "Shape.h"

Shape::Shape() {
	lenth = 0;
	width = 0;
}
void Shape::set_lenth(double l) {
	lenth = l;
}
double Shape::get_lenth() {
	return lenth;
}
void Shape::set_width(double w) {
	width = w;
}
double Shape::get_width() {
	return width;
}
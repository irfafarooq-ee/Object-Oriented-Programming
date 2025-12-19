#pragma once
#include <iostream>
#include "Square.h"

class Cube :public Square {
private:
	double height1;
public:
	Cube();
	void set_height1(double);
	double get_heigh1();
	void Area();
};
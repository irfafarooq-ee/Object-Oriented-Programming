#pragma once
#include <iostream>
#include "Rectangle.h"

class Cuboid :public Rectangle {
private:
	double height2;
public:
	Cuboid();
	void set_height2(double);
	double get_height2();
	void Area();
};
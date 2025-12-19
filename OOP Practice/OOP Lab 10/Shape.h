#pragma once
#include <iostream>

class Shape {
private:
	double lenth;
	double width;
public:
	Shape();
	void set_lenth(double);
	double get_lenth();
	void set_width(double);
	double get_width();
};
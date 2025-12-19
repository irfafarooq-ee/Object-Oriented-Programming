#pragma once
#include <iostream>
#include "Item.h"

class HardwareItem :public Item {
protected:
	std::string Manufacturer;
public:
	HardwareItem();
	void getData();
	void DisplayData();
};
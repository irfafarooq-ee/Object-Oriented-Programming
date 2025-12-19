#pragma once
#include <iostream>
#include "Item.h"

class SoftwareItem :public Item {
protected:
	std::string OperatingSystem;
public:
	SoftwareItem();
	void getData();
	void DisplayData();
};
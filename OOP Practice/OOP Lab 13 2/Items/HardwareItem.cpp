#include <iostream>
#include "HardwareItem.h"

HardwareItem::HardwareItem() {
	Manufacturer = "NULL";
}

void HardwareItem::getData() {
	Manufacturer = "Irfa";
	title = "Laptop";
	price = 30000 ;
	*sales = 2200;
	*(sales + 1) = 100;
	*(sales + 2) = 12000;
}

void HardwareItem::DisplayData() {
	std::cout << std::endl;
	std::cout << "Hardware Item Details: " << std::endl;
	std::cout << "Item Title: " << title << std::endl;
	std::cout << "Item Manufacturer: " << Manufacturer << std::endl;
	std::cout << "Item price: " << price << "Rs" << std::endl;
	std::cout << "Sales f{or last three months: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Sales for month " << i + 1 << ": " << *(sales + i) << std::endl;
	}
}
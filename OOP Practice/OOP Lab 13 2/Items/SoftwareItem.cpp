#include <iostream>
#include "SoftwareItem.h"

SoftwareItem::SoftwareItem() {
	OperatingSystem = "NULL";
}

void SoftwareItem::getData() {
	title = "Windows";
	price = 95000;
	*sales = 9200;
	*(sales + 1) = 5000;
	*(sales + 2) = 16000;
	OperatingSystem = "Microsoft";
}

void SoftwareItem::DisplayData() {
	std::cout << std::endl;
	std::cout << "Software Item Details: " << std::endl;
	std::cout << "Item Title: " << title << std::endl;
	std::cout << "Item price: " << price << "Rs" << std::endl;
	std::cout << "Item Operating System: " << OperatingSystem << std::endl;
	std::cout << "Sales for last three months: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Sales for month " << i + 1 << ": " << *(sales + i) << std::endl;
	}
}
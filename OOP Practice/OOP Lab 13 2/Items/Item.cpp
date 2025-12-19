#include <iostream>
#include "Item.h"

Item::Item() :title("NULL"), price(0) {
	for (int i = 0; i < 3; i++) {
		*(sales + i) = 0;
	}
}

void Item::getData() {
	title = "Moniter";
	price = 35000;
	*sales = 1200;
	*(sales + 1) = 500;
	*(sales + 2) = 6000;
}

void Item::DisplayData() {
	std::cout << "Item Details: " << std::endl;
	std::cout << "Item Title: " << title << std::endl;
	std::cout << "Item price: " << price << "Rs" << std::endl;
	std::cout << "Sales f{or last three months: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Sales for month " << i + 1 << ": " << *(sales + i) << std::endl;
	}
}
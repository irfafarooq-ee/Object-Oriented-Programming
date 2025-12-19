#pragma once
#include<iostream>

class Item {
protected:
	std::string title;
	int price;
	int sales[3];
public:
	Item();
	void getData();
	void DisplayData();
};
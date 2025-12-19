#pragma once
#include <iostream>

class Person {
protected:
	std::string personName;
	int age;
public:
	Person();
	virtual void Print() = 0;
	void set_personName(std::string);
	std::string get_personName();
	void set_age(int);
	int get_age();
};
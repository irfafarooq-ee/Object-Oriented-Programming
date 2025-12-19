#pragma once
#include<iostream>
#include"Person.h"

class Patient :public Person {
protected:
	std::string diseaseType, recommendedMedicine;
public:
	Patient();
	void Print();
	void set_diseaseType(std::string);
	std::string get_diseaseType();
	void set_recommendedMedicine(std::string);
	std::string get_recommendedMedicine();
};
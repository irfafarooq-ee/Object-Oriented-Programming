#pragma once
#include<iostream>
#include"Patient.h"

class MedicarePatient :public Patient {
public:
	std::string hospital, ward;
	int roomNum;
public:
	MedicarePatient();
	void Print();
};
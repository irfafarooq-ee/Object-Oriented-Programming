#include<iostream>
#include"Patient.h"

Patient::Patient() :diseaseType("NULL"), recommendedMedicine("NULL") {};

void Patient::set_diseaseType(std::string D) {
	diseaseType = D;
}

std::string Patient::get_diseaseType() {
	return diseaseType;
}

void Patient::set_recommendedMedicine(std::string M) {
	recommendedMedicine = M;
}

std::string Patient::get_recommendedMedicine() {
	return recommendedMedicine;
}

void Patient::Print() {
	std::cout << "Patient Details: " << std::endl;
	std::cout << "Name: " << get_personName() << std::endl;
	std::cout << "Age: " << get_age() << std::endl;
	std::cout << "Disease: " << diseaseType << std::endl;
	std::cout << "Recommended Medicine: " << recommendedMedicine << std::endl;
}

#include<iostream>
#include"MedicarePatient.h"

MedicarePatient::MedicarePatient() :hospital("Irfa's Hospital"), ward("NULL"), roomNum(0) {};

void MedicarePatient::Print() {
	std::cout << "Patient extended details: " << std::endl;
	std::cout << "Name: " << get_personName() << std::endl;
	std::cout << "Age: " << get_age() << std::endl;
	std::cout << "Disease: " << get_diseaseType() << std::endl;
	std::cout << "Recommended Medicine: " << get_recommendedMedicine() << std::endl;
	std::cout << "Hospital of admittance: " << hospital << std::endl;
	std::cout << "Ward: " << ward << std::endl;
	std::cout << "Room Number: " << roomNum << std::endl;
}
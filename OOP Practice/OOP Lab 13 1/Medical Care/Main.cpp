#include<iostream>
#include"person.h"
#include"Patient.h"
#include"MedicarePatient.h"

int main() {
	Person* P;
	Patient p;
	MedicarePatient M;
	std::string hospital = "Irfa's Hospital";
	std::string name, disease, medicine;
	int age;
	std::cout << "Welcome to Irfa's Hospital." << std::endl;
	std::cout << "Enter Patient's name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Enter disease: ";
	std::cin >> disease;
	std::cout << "Enter Medicine: ";
	std::cin >> medicine;
	std::cout << "Enter ward: ";
	std::cin >> M.ward;
	std::cout << "Enter room Number: ";
	std::cin >> M.roomNum;
	std::cout << "Which details would you like to access: " << std::endl;
	int choice;
	std::cout << "1. Patient details" << std::endl;
	std::cout << "2. Patient's extended details" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Your choice: ";
	while (1) {
		std::cin >> choice;
		switch (choice) {
		case 1: {
			P = &p;
			p.set_personName(name);
			p.set_age(age);
			p.set_diseaseType(disease);
			p.set_recommendedMedicine(medicine);
			P->Print();
			std::cout << "Thank you for visiting our hospital." << std::endl;
			return 0;
		}
		case 2: {
			P = &M;
			M.set_personName(name);
			M.set_age(age);
			M.set_diseaseType(disease);
			M.set_recommendedMedicine(medicine);
			P->Print();
			std::cout << "Thank you for visiting our hospital." << std::endl;
			return 0;
		}
		case 3: {
			std::cout << "Thank you for visiting our hospital." << std::endl;
			return 0;
		}
		default: {
			std::cout << "Invalid Input!" << std::endl;
			std::cout << "Input again: ";
		}
		}
	}
}

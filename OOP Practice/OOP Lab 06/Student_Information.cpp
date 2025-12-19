#include <iostream>
#include "Student.h"

Student::Student() {      //Default constructor for initializing values 
	name = "name";
	age = 0;
	p = new int[3];
	*p = 0;
	*(p + 1) = 0;
	*(p + 2) = 0;
}

Student::Student(Student& s1) {
	name = s1.name;
	age = s1.age;
	p = new int[3];
	*p = *(s1.p);
	*(p + 1) = *((s1.p) + 1);
	*(p + 2) = *((s1.p) + 2);
}

void Student::set_name(std::string n){
	name = n;
}

std::string Student::get_name() {
	return name;
}

void Student::set_age(int a) {
	age = a;
}

int Student::get_age() {
	return age;
}

void Student::set_marks() {
	*p = 30;
	*(p + 1) = 40;
	*(p + 2) = 50;
}

void Student::get_marks() {
	for (int i = 0; i < 3; i++) {
		std::cout << "Quiz " << i + 1 << " : " << * (p + i) << std::endl;
	}
}

void Student::Print_Functions() {
	std::cout << "Name : " << get_name() << std::endl;
	std::cout << "Age: " << get_age() << std::endl;
	std::cout << "Marks: " << std::endl;
	get_marks();
	std::cout << "Address of p: " << &p << std::endl;
	std::cout << std::endl;
}
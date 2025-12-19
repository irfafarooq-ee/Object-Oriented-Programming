#include<iostream>
#include"Person.h"

Person::Person() :personName("NULL"), age(0) {};

void Person::set_personName(std::string P) {
	personName = P;
}

std::string Person::get_personName() {
	return personName;
}

void Person::set_age(int A) {
	age = A;
}

int Person::get_age() {
	return age;
}
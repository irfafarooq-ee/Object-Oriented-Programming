#include <iostream>
#include "Student.h"

int main() {
	Student s1;
	//Student s2;
	Student s2(s1);
	//s2 = s1;
	std::cout << "Default values: " << std::endl;
	s1.Print_Functions();
	std::cout << "Changed values: " << std::endl;
	s1.set_name("Irfa");
	s1.set_age(19);
	s1.set_marks();
	s1.Print_Functions();
	std::cout << "Unchanged values: " << std::endl;
	s2.Print_Functions();
	return 0;
}
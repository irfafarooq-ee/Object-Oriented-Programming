#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
	string check;
	GradeBook gradeBook1("CS101: Introduction to C++ Programming");
	GradeBook gradeBook2("CS102: Data Structures in C++");
	if (gradeBook1.getCourseName() == "ERROR") {
		check = "The assignment was not successful.\n";
	}
	else {
		check = gradeBook1.getCourseName();
	}
	cout << "gradeBook1 created for course: " << check << endl;
	gradeBook2.displayMessage();
}

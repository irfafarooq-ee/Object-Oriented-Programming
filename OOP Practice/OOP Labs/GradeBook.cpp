#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name) { courseName = name; }
void GradeBook::setCourseName(string name) {
	courseName = name;
}
string GradeBook::getCourseName() {
	if (courseName.size() >= 26) {
		string Error = "ERROR";
		return Error;
	}
	else {
		return courseName;
	}
}
void GradeBook::displayMessage() {
	string Check;
	if (courseName.size() >= 26) {
	}
	else {
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	}
}

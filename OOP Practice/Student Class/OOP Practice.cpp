#include<iostream>

class Student {
public: //Access Specifier
	std::string Name, CMS_ID, Class, Courses, Contact_no, email, address, degree, year;

public:
	char grade(int marks, int average){
		if (marks >= (average + 10)) {
			return 'A';
		}
		else if(marks == average){
			std::cout << "Your Grade: B";
		}
	}
	void assignment_submission(std::string course) {

	}
	void Quiz(std::string course, int marks) {

	}

};

int main() {

}
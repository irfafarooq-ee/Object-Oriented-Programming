#include <iostream>

class Student {
public:
	Student();
	Student(Student& s1);
	void set_name(std::string);
	std::string get_name();
	void set_age(int);
	int get_age();
	void set_marks();
	void get_marks();
	void Print_Functions();

private:
	std::string name;
	int age;
	int* p;
};


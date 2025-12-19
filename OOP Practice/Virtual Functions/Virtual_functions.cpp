#include <iostream>

class person {
public:
    virtual void getData() = 0;
};

class student :public person {
public:
    float gpa;
    void getData() {
        std::cout << "Gpa of student = " << gpa << std::endl;
    }
};

class professor :public person {
public:
    int numPubs;
    void getData() {
        std::cout << "Number of publications = " << numPubs << std::endl;
    }
};

int main() {
    person* p[2];
    student s;
    professor t;
    p[0] = &s;
    p[1] = &t;
    int num;
    std::cout << "Enter number of students: ";
    std::cin >> num;
    std::cout << "Enter GPA of student 1: ";
    std::cin >> s.gpa;
    std::string name;
    std::cout << "Enter name of teacher: ";
    std::cin >> name;
    std::cout << "Enter number of publications: ";
    std::cin >> t.numPubs;
    std::cout << "Numer of students: " << num << std::endl;
    p[0]->getData();
    std::cout << "Teacher name: " << name << std::endl;
    p[1]->getData();
    return 0;
}
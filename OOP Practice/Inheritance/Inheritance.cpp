#include<iostream>

class animal {
private:
	int x = 0;
public:
	void Sleep() {
		std::cout << "Perrrr" << std::endl;
	}
	void Eat(){
		std::cout << "Chomp Chomp Nom Nom" << std::endl;
	}
	void setx(int x2) {
		x = x2;
	}
	int getx() {
		return x;
	}
public:
	void get_sleep() {
		return Sleep();
	}
	void get_eat() {
		return Eat();
	}
public:
	animal() {
		std::cout << "Animal Constructor." << std::endl;
	}
	animal(int x) {
		std::cout << "Animal Constructor 2." << std::endl;
	}
public:
	~animal() {        //tilde = ~
		std::cout << "Animal Destructor" << std::endl;
	}
};

class Cat :public animal {
public:
	int limbs;
	void Walk() {
		//get_eat();
		std::cout << "Mewwww" << std::endl;
	}
	void meow() {
		//get_sleep();
		std::cout << "Meow Meow" << std::endl;
	}
public:
	Cat():animal() {
		//limbs = x;
		std::cout << "Cat Constructor." << std::endl;
	}
	Cat(int y):animal(y) {
		//limbs = x;
		std::cout << "Cat Constructor 2." << std::endl;
	}
public:
	~Cat() {
		std::cout << "Cat Destructor." << std::endl;
	}
};

int main() {
	animal a;
	animal a1(2);
	Cat c;
	Cat c1(2);
	c.setx(3);
	std::cout << c.getx() << std::endl;
	c.get_sleep();
	c.get_eat();
	c.Walk();
	c.meow();
}

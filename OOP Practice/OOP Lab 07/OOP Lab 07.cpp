#include <iostream>

class Cuboid {
private:
	double length;

protected:
	double width;

public:
	double height;

	Cuboid() : length(0), width(0), height(0) {
		
		std::cout << " Base Class : Default Constructor " << std::endl;
	}

	Cuboid(double a, double b, double c) : length(a), width(b), height(c) {
		std::cout << " Base Class : Parameterized Constructor " << std::endl;
	}

	void setData(double a, double b, double c) {
		length = a;
		width  = b;
		height = c;
	}

	void displayData(double a, double b, double c) {
		std::cout << "length = " << length << std::endl;
		std::cout << "width = "  << width << std::endl;
		std::cout << "height = " << height << std::endl;
	}

    // void set_length(double l) {
    //     length = l;
    // }

    double get_length() {
        return length;
    }

	~Cuboid() {
		std::cout << " Base Class : Destructor " << std::endl;
	}};

class myCuboid : public Cuboid {
public:
	myCuboid() {
		std::cout << "  Derived Class: Default Constructor " << std::endl;
	}

	myCuboid(double a, double b, double c) : Cuboid(a, b, c) {
		std::cout << " Derived Class : Parameterized Constructor " << std::endl;
	}

	void calculateVolume() {
		std::cout << " Volume of cuboid : " << (get_length() * width * height);
	}

	~myCuboid() {
		std::cout << " Derived Class : Destructor " << std::endl;
	}
};

int main()
{
	myCuboid object(2.5, 3.0, 4.2);
	object.calculateVolume();
	system("pause");
	return 0;
}

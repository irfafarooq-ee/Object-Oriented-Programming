#include <iostream>
// #: Pre-processor directives 
// Constant function: Getters
// Box(int x, int y, int z): l(x), w(y), k(z)
// The data that you're sure will be changed after a certain time, you make it mutable data
// We should only mnake getters constant

class Box {
public:
	int Width, Height, Lenth;
	static int count;                        //Static function can call static data
	const int count;
	mutable int count;                  //Confirm changable data
public:
	/*Box(int x, int y, int z) {
		Lenth = x;
		Width = y;
		Height = z;
	}
	
	Box(int x = 1, int y = 3, int z = 3) {        //Default Constructor
		Lenth = x;
		Width = y;
		Height = z;
	}*/
	Box() {                                       //Default Constructor
		Lenth = 0;
		Width = 0;
		Height = 0;
		count++;
	}
	Box():count(0){                     //Initializer list for constant data
	}    
public:
	void set_lenth(int lenth) {
		lenth = Lenth;
	}
	int get_lenth() {
		return Lenth;
	}
	void set_width(int width) {
		width = Width;
	}
	int get_width() {
		return Width;
	}
	void set_height(int height) {
		height = Height;
	}
	int get_height() {
		return Height;
	}
	/*~Box() {
		std::cout << "Destructor";
	}*/
};

//In Implementation
int Box::count = 0;       //:: Scope resolution operator
int main() {
	Box box;
	Box box1;
	Box box2; 
	std::cout << Box::count /*Box.count  Don't call through object */ << std::endl;
	box.get_lenth();
	box.get_width();
	box.get_height();
	std::cout << box.Lenth << std::endl << box.Width << std::endl << box.Height << std::endl;
	return 0;
}

/* Never use setter in a constructor
--> No error but a very bad programming practice 
--> Destructor and constructor have no return types
--> Destructors are called automatically so there is no need to call them

There are three types of constructors
1. Implicit Constructors
2. Explicit constructors
3. Overloaded Constructors
4. Parametrized Constructors */

//Access data types do not work on objects.

//Q. Can static function call non-static data?

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Cuboid.h"
#include "Cube.h"

int main() {
	Shape S;
	Rectangle R;
	Square s;
	Cuboid C;
	Cube c;
	int choice;
	while (1) {
		std::cout << "Which shape's area would you like to find?" << std::endl;
		std::cout << "1. Rectangle" << std::endl;
		std::cout << "2. Square" << std::endl;
		std::cout << "3. Cuboid" << std::endl;
		std::cout << "4. Cube" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		do {
			std::cin >> choice;
			switch (choice) {
			case 1: {
				double l, w;
				std::cout << "Enter lenth: ";
				std::cin >> l;
				R.set_lenth(l);
				std::cout << "Enter width: ";
				std::cin >> w;
				R.set_width(w);
				R.Area();
				choice = 0;
				break;
			}
			case 2: {
				double l;
				std::cout << "Enter lenth of one side: ";
				std::cin >> l;
				s.set_lenth(l);
				s.Area();
				choice = 0;
				break;
			}
			case 3: {
				double l, w, h;
				std::cout << "Enter lenth: ";
				std::cin >> l;
				C.set_lenth(l);
				std::cout << "Enter width: ";
				std::cin >> w;
				C.set_width(w);
				std::cout << "Enter height: ";
				std::cin >> h;
				C.set_height2(h);
				C.Area();
				choice = 0;
				break;
			}
			case 4: {
				double l;
				std::cout << "Enter lenth of one side: ";
				std::cin >> l;
				c.set_lenth(l);
				c.Area();
				choice = 0;
				break;
			}
			case 5: {
				choice = 0; 
				std::cout << "Thank you!" << std::endl;
				return 0;
			}
			default: {
				std::cout << "Invalid Input!" << std::endl;
				std::cout << "Input again: ";
			}
			}
		} while (choice >= 1);
		
	}
}
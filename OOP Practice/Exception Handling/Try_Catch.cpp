#include <iostream>

float calculateAverage(int w, int x, int y, int z) {
	return (w + x + y + z) / 4;
}

int main() {
	int num1, num2, num3, num4;
	try {
		std::cout << "Enter marks for four courses: ";
		std::cin >> num1 >> num2 >> num3 >> num4;
		if (num1 >= 0 && num1 <= 100 && num2 >= 0 && num2 <= 100 && num3 >= 0 && num3 <= 100 && num4 >= 0 && num4 <= 100) {
			std::cout << "Average = " << calculateAverage(num1, num2, num3, num4);
		}
		else if (num1 < 0 || num1 > 100 || num2 < 0 && num2 < 100 || num3 < 0 || num3 > 100 || num4 < 0 || num4 > 100) {
			throw 1;
		}
		else throw 'A';
	}

	catch (int) {
		std::cout << "Int Exception!" << std::endl;
	}
	catch(...) {
		std::cout << "Default Exception!" << std::endl;
	}
}
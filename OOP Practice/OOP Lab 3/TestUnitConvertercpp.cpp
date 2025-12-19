#include <iostream>
#include "UnitConverter.h"
using namespace std;

int main() {
	UnitConversionApp UnitConverter;
	int Switch;
	cout << "----------------------------------------" << endl;
	cout << "Welcome to Unit Conversion App" << endl;
	cout << "Press 1 to convert from feet to meters: " << endl;
	cout << "Press 2 to convert from pounds to kgs: " << endl;
	cout << "Press 3 to convert from fahrenheit to celcius: " << endl;
	cout << "----------------------------------------" << endl;
	cin >> Switch;
	switch (Switch) {
	case 1: {
		float feet;
		cout << "Enter Feet = ";
		cin >> feet;
		UnitConverter.set_Feet1(feet);
		cout << "Meters = " << UnitConverter.get_Meters() << " m" << endl;
		break;
	}
	case 2: {
		float pounds;
		cout << "Enter Pounds = ";
		cin >> pounds;
		UnitConverter.set_Pounds1(pounds);
		cout << "Kilograms =  " << UnitConverter.get_kgs() << " kgs" << endl;
		break;
	}
	case 3:
		float fahrenheit;
		cout << "Enter Fahrenheit = ";
		cin >> fahrenheit;
		UnitConverter.set_Fahrenheit1(fahrenheit);
		cout <<"Celcius = " << UnitConverter.get_Celcius() << " C" << endl;
		break;
	}
	return 0;
}
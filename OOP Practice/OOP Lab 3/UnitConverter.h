#include <iostream>
using namespace std;

class UnitConversionApp {
public:
	void Feet_Conversion();
	void set_Feet1(float value);
	void set_Feet2(float value);
	float get_Meters();
	void Pounds_Conversion();
	void set_Pounds1(float value);
	void set_Pounds2(float value);
	float get_kgs();
	void Fahrenheit_Conversion();
	void set_Fahrenheit1(float value);
	void set_Fahrenheit2(float value);
	float get_Celcius();
private:
	float input_Data, output_Data;
};

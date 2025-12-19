#include <iostream>
#include "UnitConverter.h"
using namespace std;

void UnitConversionApp::set_Feet1(float feet) {
	input_Data = feet;
}
void UnitConversionApp::set_Feet2(float meter) {
	output_Data = meter;
}
void UnitConversionApp::Feet_Conversion() {
	output_Data = (input_Data / 3.28);
}
float UnitConversionApp::get_Meters() {
	Feet_Conversion();
	return output_Data;
}
void UnitConversionApp::set_Pounds1(float pounds) {
	input_Data = pounds;
}
void UnitConversionApp::set_Pounds2(float kgs) {
	output_Data = kgs;
}
void UnitConversionApp::Pounds_Conversion() {
	output_Data = (input_Data * 0.45359237);
}
float UnitConversionApp::get_kgs() {
	Pounds_Conversion();
	return output_Data;
}
void UnitConversionApp::set_Fahrenheit1(float fehrenheit) {
	input_Data = fehrenheit;
}
void UnitConversionApp::set_Fahrenheit2(float celcius) {
	output_Data = celcius;
}
void UnitConversionApp::Fahrenheit_Conversion() {
	output_Data = (input_Data - 32) * (5 / 9);
}
float UnitConversionApp::get_Celcius() {
	Fahrenheit_Conversion();
	return output_Data;
}
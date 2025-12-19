#include<iostream>

class Time {
private:
	int hours, minutes, seconds;
public:
	std::string choice;
public:
	Time() {
		hours = 00;
		minutes = 00;
		seconds = 00;
		choice = "AM/PM";
	}
	Time(Time& t) {
		hours = t.hours;
		minutes = t.minutes;
		seconds = t.seconds;
	}
	void Display() {
		std::cout << "Current time is: ";
		if (get_hours() < 10) {
			std::cout << "0" << get_hours();
		}
		else {
			std::cout << get_hours();
		}
		std::cout << ":";
		if (get_minutes() < 10) {
			std::cout << "0" << get_minutes();
		}
		else {
			std::cout << get_minutes();
		}
		std::cout << ":";
		if (get_seconds() < 10) {
			std::cout << "0" << get_seconds();
		}
		else {
			std::cout << get_seconds();
		}
		std::cout << " " << get_zone() << std::endl;
	}
public:
	void set_hours(int x) {
		while (1) {
			if (x > 0 && x <= 12) {
				hours = x;
				break;
			}
			else {
				std::cout << "Invalid input." << std::endl;
				std::cout << "Enter hours: ";
				std::cin >> x;
			}
		}
	}
	void set_minutes(int y) {
		while (1) {
			if (y >= 0 && y < 60) {
				minutes = y;
				break;
			}
			else {
				std::cout << "Invalid input." << std::endl;
				std::cout << "Enter minutes: ";
				std::cin >> y;
			}
		}
	}
	void set_seconds(int z) {
		while (1) {
			if (z >= 0 && z < 60) {
				seconds = z;
				break;
			}
			else {
				std::cout << "Invalid input." << std::endl;
				std::cout << "Enter seconds: ";
				std::cin >> z;
			}
		}
	}
	void set_zone(std::string w) {
		while (1) {
			if (w == "AM" || w == "PM") {
				choice = w;;
				break;
			}
			else {
				std::cout << "Invalid input." << std::endl;
				std::cout << "Enter seconds: ";
				std::cin >> w;
			}
		}
	}
	int get_hours() {
		return hours;
	}
	int get_minutes() {
		return minutes;
	}
	int get_seconds() {
		return seconds;
	}
	std::string get_zone() {
		return choice;
	}
};

int main() {
	Time T;
	int hrs, mins, sec;
	std::string AM_PM;
	std::cout << "Welcome to time display system." << std::endl;
	std::cout << "Enter hours: ";
	std::cin >> hrs;
	T.set_hours(hrs);
	std::cout << "Enter minutes: ";
	std::cin >> mins;
	T.set_minutes(mins);
	std::cout << "Enter seconds: ";
	std::cin >> sec;
	T.set_seconds(sec);
	std::cout << "Enter AM or PM: ";
	std::cin >> AM_PM;
	T.set_zone(AM_PM);
	T.Display();
}

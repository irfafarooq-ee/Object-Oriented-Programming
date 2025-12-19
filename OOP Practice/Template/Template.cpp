#include <iostream>
template <class T>

void Swap(T &a, T &b, T &c) {
	T temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
}
template <class T>
T absolute(T& a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

int main() {
	double x = 1, y = -12, z = 90;
	Swap(x, y, z);
	std::cout << x << std::endl << y << std::endl << z << std::endl;
	std::cout << absolute(x);
}
#include<iostream>

class Exp {
private:
	int *a;
public:
	Exp() {
		a = new int[2];
		*a = 5;
		*(a + 1) = 8;
	}
	Exp(Exp &e) {
		a = new int[2];
		*a = *(e.a);
		*(a + 1) = *((e.a) + 1);
	}
	void set_array(int m, int n) {
		*a = m;
		*(a + 1) = n;
	}
	void get_array() {
		std::cout << *a;
		std::cout << *(a + 1);
	}
};

int main() {
	Exp x;
	Exp y(x);
	x.set_array(9, 19);
	x.get_array();
	y.get_array();

	return 0;
}
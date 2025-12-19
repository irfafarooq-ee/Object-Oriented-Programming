#include <iostream>
using namespace std;

int main() {
	int max, check = 0;
	cout << "Enter the maximum number of stars in the diamond: ";
	cin >> max;
	for (int j = 1; j <= max; ) {
		for (int i = (max - j) / 2; i > 0; i--) {
			cout << " ";
		}
		for (int k = j; k > 0; k--) {
			cout << "*";
		}
		cout << "\n";
		if (check == 0) {
			j += 2;
		}
		else if (check == 1)
			j -= 2;
		if (j < 0) {
			break;
		}
		if (j == max) {
			check = 1;
		}
	}
	return 0;
}
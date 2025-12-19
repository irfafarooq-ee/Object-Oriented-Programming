#include<iostream>
using namespace std;
int factorial(int input) {
	int fact = 1;
	for (int i = input; i > 0; i--) {
		if (i == 0) {
			break;
		}
		fact *= i;
	}
	return fact;
}
int answer(int rows, int columns) {
	int value = factorial(rows) / (factorial(columns) * factorial(rows - columns));
	return value;
}

int main() {
	int rows, columns;
	cout << "Enter the maximum number of rows for Pascal's triangle: ";
	cin >> rows;
	for (int i = 0; i < rows; i++) {
		for (int k = rows - i; k > 0; k--) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << answer(i, j) << " ";
		}
		cout << "\n";
	}
	return 0;
}

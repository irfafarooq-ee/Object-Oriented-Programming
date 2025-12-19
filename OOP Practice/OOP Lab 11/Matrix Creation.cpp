/* class Matrix
{
  private:
	int doubleArray[MAXROWS][MAXCOLS];
	int rows;
	int cols;
  public:
	Matrix();
	void printMatrix();
	void setElement(int row, int col, int value); //set an element of the matrix
	void setMatrix(int [][MAXCOLS]); //set the doubleArray to what is sent
	void addMatrix(int [][MAXCOLS]); //add an array to doubleArray
	void addMatrix(int [][MAXCOLS], int[][MAXCOLS]); //add two arrays together
};
*/

#include <iostream>

template <class T>
class Matrix {
public:
	T arr[50][50];
	int rows;
	int columns;

public:
	Matrix() {
		rows = 50;
		columns = 50;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				arr[i][j] = 0;
			}
		}
	}
	void setElements(int r, int c, T value) {
		rows = r;
		columns = c;
		arr[r][c] = value;
	}
	void printMatrix(int r, int c) {
		std::cout << "Your matrix is : " << std::endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	void addMatrix(int r, int c) {
		std::cout << "Adding your matrix to itself. New matrix is: " << std::endl;
		T temp[r][c];
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				temp[i][j] = arr[i][j] + arr[i][j];
				std::cout << temp[i][j] << "  ";
			}
			std::cout << std::endl;
		}
	}
	void subtractMatrix(int r, int c) {
		std::cout << "Subtracting your matrix from itself. New matrix is: " << std::endl;
		T temp[r][c];
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				temp[i][j] = arr[i][j] - arr[i][j];
				std::cout << temp[i][j] << "  ";
			}
			std::cout << std::endl;
		}
	}
	void MultiplyMatrix(int r, int c) {
		if (r == c) {
			std::cout << "Multiplying your matrix with itself gives: " << std::endl;
			T temp[r][c];
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					for (int k = 0; k < r; k++) {
						temp[i][j] += arr[i][k] * arr[k][j];
					}
					std::cout << temp[i][j] << "  ";
				}
				std::cout << std::endl;
			}
		}
		else {
			std::cout << "Multiplication is not possible." << std::endl;
		}
	}
};

int main() {
	int row = 0, coln = 0;
	std::cout << "Enter number of rows: ";
	std::cin >> row;
	std::cout << "Enter number of columns: ";
	std::cin >> coln;
	while (1) {
		std::cout << "Which type of matrix do you want to make: " << std::endl;
		std::cout << "1. Double" << std::endl;
		std::cout << "2. Float" << std::endl;
		std::cout << "3. Int" << std::endl;
		std::cout << "4. Exit" << std::endl;
		int choice;
		std::cout << "Your choice: ";
		std::cin >> choice;
		switch (choice) {
		case 1: {
			Matrix <double> M;
			double value;
			std::cout << "Enter elements of the matrix: " << std::endl;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < coln; j++) {
					std::cin >> value;
					M.setElements(i, j, value);
				}
			}
			M.printMatrix(row, coln);
			M.addMatrix(row, coln);
			M.subtractMatrix(row, coln);
			M.MultiplyMatrix(row, coln);
			return 0;
		}
		case 2: {
			Matrix <float> M;
			float value;
			std::cout << "Enter elements of the matrix: " << std::endl;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < coln; j++) {
					std::cin >> value;
					M.setElements(i, j, value);
				}
			}
			M.printMatrix(row, coln);
			M.addMatrix(row, coln);
			M.subtractMatrix(row, coln);
			M.MultiplyMatrix(row, coln);
			return 0;
		}
		case 3: {
			Matrix <int> M;
			int value;
			std::cout << "Enter elements of the matrix: " << std::endl;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < coln; j++) {
					std::cin >> value;
					M.setElements(i, j, value);
				}
			}
			M.printMatrix(row, coln);
			M.addMatrix(row, coln);
			M.subtractMatrix(row, coln);
			M.MultiplyMatrix(row, coln);
			return 0;
		}
		case 4: {
			return 0;
		}
		default: {
			std::cout << "Invalid Input!" << std::endl;
			std::cout << "Input again: ";
		}
		}
	}
	std::cout << "Thank You!" << std::endl;
	return 0;
}

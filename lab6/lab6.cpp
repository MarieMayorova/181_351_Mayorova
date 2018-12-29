

#include "pch.h"
#include <iostream>

class matrix {

private:
	int rows;
	int columns;
	double matr[10][10] = { {0} };

public:
	matrix();
	~matrix();

	bool input();
	void print();
	bool summMatrix(matrix matr2);
	bool multMatrix(matrix matr2);
	bool transp();

	int getRows();
	int getColumns();
	double getElem(int row, int col);
};




matrix::matrix()
{
}

matrix::~matrix()
{
}

bool matrix::input()
{
	std::cin >> rows;
	if (rows < 1 || rows>10)
		return false;
	std::cin >> columns;
	if (columns < 1 || columns>10)
		return false;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cin >> matr[i][j];
		}
	}
	return true;
}

void matrix::print()
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << matr[i][j] << '\t';
		}
		std::cout << '\n';
	}
}

bool matrix::summMatrix(matrix matr2)
{
	double result[10][10];
	if ((rows == matr2.getRows()) && (columns == matr2.getColumns())) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				result[i][j] = matr[i][j] + matr2.getElem(i, j);
				std::cout << result[i][j] << '\t';
			}
			std::cout << '\n';
		}
		return true;
	}
	else return false;
}

bool matrix::multMatrix(matrix matr2)
{
	double matr3[10][10];
	if (columns == matr2.getRows()) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				double sum = 0;
				for (int k = 0; k < matr2.getColumns(); k++) {
					sum += matr[i][k] * matr2.getElem(k, j);
				}
				matr3[i][j] = sum;
				std::cout << matr3[i][j] << '\t';
			}
			std::cout << '\n';
		}
		return true;
	}
	else return false;
}

bool matrix::transp()
{
	int ch;
	if (rows != columns) {
		ch = rows;
		rows = columns;
		columns = ch;
	}
	double temp = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = i; j < columns; j++) {
			temp = matr[i][j];
			matr[i][j] = matr[j][i];
			matr[j][i] = temp;
		}
	}
	return true;
}

int matrix::getRows()
{
	return rows;
}

int matrix::getColumns()
{
	return columns;
}

double matrix::getElem(int row, int col)
{
	if (row<rows && col<columns && row>-1 && col>-1)
		return matr[row][col];
	else
		return -11111111111;
	std::cout << "Error!\n";
	return -1;
}
int main()
{
	matrix matA, matB;
	matA.input();
	matB.input();

	matA.transp();
	matA.print();

	matA.summMatrix(matB);//matA = matA + matB
	matA.multMatrix(matB);

	return 0;
}
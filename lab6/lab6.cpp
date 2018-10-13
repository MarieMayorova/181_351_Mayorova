

#include "stdafx.h"
#include <iostream>
class matrix
{
private:
	int rows, colums;
	int matr[10][10];

public:
	matrix();
	~matrix();
	bool sumMatrix(matrix matr2);
	bool multMatrix(matrix matr2);
	bool transp();
	bool print();
	bool input();
	int getRows()
	{
		return rows;
	}
	int getColums() 
	{
		return colums;
	}
	double getElem(int row, int col){
		if (row < rows && col < colums && row>-1 && col>-1) { return matr[row][col]; }
		else {
			std::cout << "Index Error!\n";
			return -1111111111;
		};
	};

};

matrix::matrix()
{
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++)
		{
			matr[row][col]=0;
		}
	}
}
matrix::~matrix()
{
}
bool matrix::sumMatrix(matrix matr2)
{
	if (rows != matr2.getRows())//Сравнить количестве строк текущей матрицы с количеством строк matr2
	{
		return false;
	}
	//Сравнить количестве столбцов текущей матрицы с количеством строк matr2

	//Для каждого элемента matr[row][col] += matr2.getElem(row,col)
	return true;
}
bool matrix::transp()
{
	int res[10][10];

	return false;
}
bool  matrix::input()
{
	std::cin >> rows;
	if (1 > rows || rows>10) { std::cout << "Error!\n"; return false; };
	std::cin >> colums;
	if (1 > colums || colums>10) { std::cout << "Error!\n"; return false; };

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < colums; col++)
		{
			std::cin >> matr[row][col];
		}
	}
	return true;
}

int main()
{
	matrix matA, matB;
	matA.input();
	matB.input();
	
	matA.transp();
	matA.print();

	matA.sumMatrix(matB); //matA = matA + matB
	matA.print();

	return 0;
}

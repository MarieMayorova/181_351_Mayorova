

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
	int getRows();
	int getColums();
	double getElem(int row, int col){
		if (row < rows && col < colums && row>-1 && col>-1) { return matr[row][col]; }
		else {
			std::cout << "Index Error!\n";
			return -1111111111;
		};
	};

};
int main()
{
    return 0;
}
bool  matrix::input()
{
	std::cin >> row;
	if (row > rows) { std::cout << "Error!\n"; return false; };
	std::cin >> col;
	if (col > colums) { std::cout << "Error!"; return false; };

	std::cin >> matr[row][col] >> std::endl;


	return true;
}

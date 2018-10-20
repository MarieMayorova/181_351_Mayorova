//динамическое выделение памяти




#include "stdafx.h"


int main()
{
	int *ptr_int = new int;
	int * matr = new int[11 * 12];
	for (int row = 0; row < 12; row++) {
		for (int col = 0; col < 11; col++) {
			matr[row * l1 + col] = row * l1 + col;
		}
	}
	delete[]matr;
	int** dynamic2Darray = new int*[11];//двумерный массив
	for (int i = 0; i < 11;i++)
	{
		delete[] dynamic2Darray[i];
	}
	delete[] dynamic2Darray;

		return 0;
}


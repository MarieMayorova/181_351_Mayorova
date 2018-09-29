//операторы циклы,переходы и указатели
//указатель-переменная, хранящая адрес (смещение),каких-либо данных,переменных в ОП
//указатель-pointer, ptr a,ptr b
//1. указатель объявляется как обычная переменная,но добавляется *
//&- амперсенд -бул оператор(бинарный),когда унарный-извлекает адрес переменной а
//фактически, указатель- это unsigned int или unsigned long long(х64) с адресом,
//т.к. дробных или отрицательных адресов нет
//
#include "stdafx.h"
#include <iostream>
int main() {
	int a = 54;
	double b = 22.5;
	int *ptr_int=&a;
	double *ptr_dbl=&b;
	char ptr_char;
	long long ptr_long_long;
	bool ptr_bool;

	std::cout << "int pointer size=" << sizeof(ptr_int) << std::endl;
	std::cout << "double pointer size=" << sizeof(ptr_dbl) << std::endl;
	std::cout << "char pointer size=" << sizeof(char*) << std::endl;
	std::cout << "long long  pointer size=" << sizeof(long long*) << std::endl;
	std::cout << "bool pointer size=" << sizeof(bool*) << std::endl;
	
	std::cout << "ptr_int =" <<ptr_int<< std::endl;
	std::cout << "ptr_dbl =" <<ptr_dbl << std::endl;

	//имя массива-указатель (arr), 
	//в двухмерном массиве-указатель на указатель 1 элемента, а arr[1]-указатель на строку

	int arr1D[10] = { 2,4,3,5,7 };
	//int arr2D[3][3]
	std::cout << "arr= " << arr1D << std::endl;
	std::cout << "*arr=arr[0]= " << *arr1D << std::endl;
	std::cout << "*(arr+4)=arr[4]= " << *(arr1D+4) << std::endl;
	// из указателя обратно int или double *-слева
	//5. оператор перехода и циклы

	return 0;
} 
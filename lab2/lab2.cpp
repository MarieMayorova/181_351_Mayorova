// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int main()
{ 
	int a = 300;
	int b = 560;


	std::cout << "a*a*b*b=" << a * a * b * b << std::endl;
	std::cout << "b/a="  << 1. * b/a << std::endl;// % остаток от деления
	std::cout << "symbol_A+a=" << 'A' + a << std::endl;
	
	int max_int, min_int;
		bool max_bool, min_bool;
		char max_char, min_char;
		short max_short, min_short;
		long max_long, min_long;
		long long max_long_long, min_long_long;

	std::cout << "type\t";
	std::cout << "size\t";
    std::cout << "min\t";
	std::cout << "max\t";


	std::cout << "\n bool\t" << sizeof(bool) << std::endl;
	std::cout << "char\t" << sizeof(char) << std::endl;
	std::cout << "int\t" << sizeof(int) << std::endl;
	std::cout << "short\t" << sizeof(short) << std::endl;
	std::cout << "long\t" << sizeof(long) << std::endl;
	std::cout << "long long\t" << sizeof(long long) << std::endl;

	
	
	

    return 0;
}


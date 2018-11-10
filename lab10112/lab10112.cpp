// lab10112.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

extern int func1(double p1, char p2);

int main()
{
	std::cout << "From lib " << func1(18, 5) << std::endl;
    return 0;
}


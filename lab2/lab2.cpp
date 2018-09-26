// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{ 
	int a = 300;
	int b = 560;


	cout << "a*a*b*b=" << a * a * b * b << endl;
	cout << "b/a="  << 1. * b/a << endl;// % остаток от деления
	cout << "symbol_A+a=" << 'A' + a << endl;
	
	cout << "type\t\t";
	cout << "size\t\t";
	cout << "min\t\t\t";
	cout << "max";

	cout << " \n bool\t\t" << sizeof(bool) << "\t\t" << 0 << "\t\t\t" << 1 << endl;
	cout << " char\t\t" << sizeof(char) << "\t\t" << CHAR_MIN << "\t\t\t" << CHAR_MAX << endl;
	cout << " int\t\t" << sizeof(int) << "\t\t" << INT_MIN << "\t\t" << INT_MAX << endl;
	cout << " short\t\t" << sizeof(short) << "\t\t" << SHRT_MIN << "\t\t\t" << SHRT_MAX << endl;
	cout << " long\t\t" << sizeof(int) << "\t\t" << LONG_MIN << "\t\t" << LONG_MAX << endl;
	cout << " long long\t" << sizeof(long long) << "\t\t" << LLONG_MIN << "\t" << LLONG_MAX << endl;

	return 0;
}

	
	
	

  


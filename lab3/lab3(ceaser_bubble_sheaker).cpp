// lab3(caesar_bubble_sheaker).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/* if-оператор условного перехода
if(лог_усл)
{
код, выполняемый если (лог_усл == true)
}
if(лог_усл)
{
// код, выполняемый если лог_усл == true
}
else
{
// код, выполняемый в противном случае
}


*/
#include "pch.h"
#include <iostream>
char a[50] = {};
char func()
{
	for (int i = 0; i < strlen(a); i++) {
		a[i] += 3;
		if (((a[i] > 'Z') && (a[i] < 'a')) || (a[i] > 'z'))
			a[i] = a[i] - 26;
	}
	return 0;
}
int main() {
	int bubble[10]{ 7, 6, 3, 4, 1, 5, 2, 0, 9, 8 };
	int tim;
	for (int k = 0; k < 9; k++) {
		for (int i = 0; i < 9; i++) {

			if (bubble[i] > bubble[i + 1])
			{
				tim = bubble[i];
				bubble[i] = bubble[i + 1];
				bubble[i + 1] = tim;
			}
		}
	}
	for (int i = 0; i < 10; i++) {

		std::cout << bubble[i] << std::endl;

	}


	std::cin >> a;
	func();
	std::cout << a << std::endl;


	int shake[10]{ 7, 6, 3, 4, 1, 5, 2, 0, 9, 8 };
	int t, pr;
	for (int k = 0; k < 9; k++) {
		for (int i = 0; i < 9; i++) {

			if (shake[i] > shake[i + 1])
			{
				t = shake[i];
				shake[i] = shake[i + 1];
				shake[i + 1] = t;
			}
		}
		for (int j = 0; j > 0; j--)
			if (shake[j] < shake[j - 1])
			{
				pr = shake[j];
				shake[j] = shake[j - 1];
				shake[j - 1] = pr;
			}
	}
	for (int j = 0; j < 10; j++) {

		std::cout << shake[j] << std::endl;

	}

	return 0;
}

// lab17112.cpp: определяет точку входа для консольного приложения.
//дз : алгоритм создания длл

/*ДИНАМИЧЕСКИЕ БИБЛИОТЕКИ ЯВНОЕ И НЕЯВНОЕ СВЯЗЫВАНИЕ

явное
1. загрузка файла dll в ОП
HINSTANCE hDLL; //ССЫЛКА УКАЗАТЕЛЬ НА ЗАГРУЖЕННУЮ dll,КОТОРАЯ БУДЕТ ЗАГРУЖАТЬСЯ
hDLL = LoadLibrary(L"Lab8 Dll.dll");//L-использование 16битных символов только для х64
2.поиск в загруженной dll функции по строковому имени
FUNC2 fnc2explicit = (FUNC2)GetProcAdress(hDLL, "fnc2"); -поиск и возвращение указателя на функцию
cout << fnc2explicit << endl: -проверка, нашлась ли функция(0 если нет)
3. Вызов внешней функции
std::cout << "FROM explicit DLL:\tfnc2(10,5)=" << fncexplicit(10.0, 5) << endl;
return 0;
*/

#include "stdafx.h"
#include "Windows.h"
#include <iostream>

	typedef int(CALLBACK* FUNC2)(float, float, float);//это прототип и он НАВЕРХУ объявляет FUNC2

	int main()
{
	HINSTANCE hDLL; //ССЫЛКА УКАЗАТЕЛЬ НА ЗАГРУЖЕННУЮ dll,КОТОРАЯ БУДЕТ ЗАГРУЖАТЬСЯ
	
	//hinstance не работает, нужна библиотека Windows.h
	hDLL = LoadLibrary(L"C:/Users/m.v.majorova/Desktop/181_351_Mayorova/x64/Debug/lab1711.dll");//ссылка поменять \ на /
	//L-использование 16битных символов только для х64
	std::cout << hDLL << std::endl;//если не найдена, то 0

	FUNC2 fnc2explicit = (FUNC2) GetProcAddress (hDLL, "func2");//поиск и возвращение указателя на функцию/ИМЯ ФУНКЦИИ В КАВЫЧКАХ
	//FUNC2 нужен прототип
	std::cout << fnc2explicit << std::endl;// проверка, нашлась ли функция(0 если нет)
	

	std::cout << "FROM explicit DLL:\tfnc2(2,6,3)=" << fnc2explicit(2, 6, 3) << std::endl;

    return 0;
}

	
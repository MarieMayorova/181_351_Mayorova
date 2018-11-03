//strings
//пользователь с клавы вводит строчку и подстроку 
//вывести строку и подстроку и  номера позиций, где встречается 

#include "pch.h"
#include <string>

#include <cstring>
#include <iostream>
#include "fstream"


int main()
{
	// std::cout << "Hello World!\n"; 
	char all[] = "C-style string1";

	printf("%s", all);
	//	printf("",all);
	///printf("", all);
	//printf("", all);
	//printf("", all);
	///	printf("", all);


	//char cstr1[]="C-style string";
	//char cstr2[]={'C','-','\0'};
	//char cstr3[]={'\67','\45','\115','t','y'};
	//в типе char на самом деле хранится знаковое целое число. Можно складывать, делить, умножать char.
	//чтобы придать символьный смысл данным, хранимым в чар
	//, нужна таблица соответствия чисел с символами - кодовая таблица(аски, анси, юникод)
	//функции для работы с с-строками
	//вывод на консоль printf("базовая %s строка %f",str1,str2);
	//базовая строка

	//позиции, куда будут подставляться параметры в базовой строке. 
	//https://www.cplusplus.com/reference
	//
	//%f - флотовое число, округляет до 6 знаков после запятой. 
	//%10.2f будет 10 чисел(или проблелов) до точки  и два после
	//%s - строка
	//%c - символ
	//%d - десятичное число
	//%e - параметр подставляется на место е как число в экспоненциальном виде(12345=1.2345e+04)
	//неверный тип - будет неправильный результат, но ошибки не напишет
	//printf_s - ошибку напишет и не даст вывести ошибку - safe
	//strcat()-конкатенация(склеивание)
	//strlen()-длина строки
	//strcmp()- сравнение(компейр)//аргументы - две строки
	//положительное, если первое больше, отрицательное, если меньше(ли наоборот, я могла перепутать)
	//qwe111rty
	//strcpy(str1,str2)//copy если переменная-результат меньше, чем то, что туда копируется, ошибка доступа будет, поэтому
	//лучше копировать в неинициализированный(не приравненный ни к чему) массив
	//strcpy_s(str1,255,str2) - проверяет длину 255
	//
	//
	//STRING
	//Класс такой, чтобы удобно было работать со строками.
	//cin считывает до пробела, а getline  - до энтера
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	/*	std::cout << std::endl;
	std::string a,b;
	getline(std::cin,a);
	getline(std::cin, b);
	int pos = 0;
	//	while (pos!=-1) {
	//	}
	int kkk = 0;
	for (int iter = 0; iter < a.length(); iter += a.find(b)) {
	std::cout<<a.find(b,iter)+1<<" ";
	//pos+= a.find(b) + 1;
	//iter+=;
	if (iter == a.npos) { break;}
	//a.substr(a.length() - a.find(b) + 1);

	}*/

	//РАБОТА С ФАЙЛАМИ
	std::fstream ff, sf;

	ff.open("sometextfile.txt", std::fstream::in | std::fstream::out | std::fstream::trunc/*разрешение изменять файл*//*

																													  | std::fstream::app - для записи в конец файла*/);
	sf.open("sometextfile2.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);


	std::cout << std::endl;
	std::string a, b;
	getline(std::cin, a);
	getline(std::cin, b);
	int pos = 0;

	//	while (pos!=-1) {

	ff << a << "\n" << b << std::endl;

	//	}
	//	getline(ff, a);
	//getline(ff, b);
	ff >> a;
	ff >> b;

	//	std::cout << a<<"\n";
	//	std::cout << b;

	//int kkk = 0;
	for (int iter = a.find(b); iter < a.length(); iter = a.find(b, iter)) {
		std::cout << a.find(b, iter) + 1 << " ";
		sf << a.find(b, iter) + 1 << " ";
		iter++;
		//pos+= a.find(b) + 1;
		//iter+=;
		if (iter == a.npos) { break; }
		//a.substr(a.length() - a.find(b) + 1);

	}

	//	while (pos!=-1) {

	return 0;
}




#include "pch.h"
#include <iostream>
#include <cstring> //для работы с С-строками ( strcat(), strlen(), strcmp() )
#include <string> //для работы 
#include <fstream>

int main()
{
	/*
	char cstr1[] = "C-style string1";
	char cstr2[] = { 'C','-','s','t','y','l','e',' ','s','t','i','n','g','1','\0' };
	char cstr3[] = { '\67','\45',...,'\0' };
	*/
	/*
	Вывод на печать осуществляется при помощи printf(char[], , ,) или printf(*char, , ,) - print formated
	форматирование printf("базовая %s строка %f", параметр1, параметр2)
	*/
	/* значение символов форматирования берется из таблицы справки к функции http://www.cplusplus.com/reference
	   %f - для float и double
	   %s - для строк
	   %d - для целых (int, long, long long)
	   %e - для экспонициального вида
	*/
	/*
	  Виды функций:
		объединение (конкатенация) строк - strcat (*char, *char):

		копирование из одной строки в другую - strcpy():
			char cstr3[255];
			strcpy_s(cstr3, 255, cstr2);
		сравнение - strcmp():
			int i = strcmp(cstr1, cstr2);
		длина строки - strlen():
			int lngth = strlen(cstr1);
		вставка строки в подстроку производится в несколько действий
	*/

	/*std::string cppstr1 = "C++ - style string1";
	std::string cppstr2 = "";
	cppstr2 = cppstr1; //для копирования перегруженных операторов "="
	*/

	/*
	Работа с файлами:
		0.1) проверить существует ли файл
		0.2) при работе в С++ - создать объект для работы с файлом
		1) открытие файла
		2) работа с файлом (чтение, запись, поиск)
		3) закрытие файла
		std::fstream - универсальный класс для ввода и для вывода (чтения из файла и записи в него)
		std::(if/of)stream - класс для ввода/вывода
		fstream -поток, предназначенный для ввода/вывода в/из файла
	*/
	//std::fstream fs;// 0. Создание объекта при работе в С++

	// 1. Открытие файла
	//fs.open("Some text file.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);

	/* Режимы открытия:
			fs.open("Some text file.txt", - при открытии файла необходимо указать тип файла, а также режим открытия:
				с перезаписью или без*/

				// 2. Вывод в файл


	std::fstream fs, text;
	text.open("Cucumber.txt", std::fstream::in);
	fs.open("Not Cucumber.txt", std::fstream::out);

	std::string str1;
	std::string str2;
	std::getline(text, str1);
	std::getline(text, str2);

	int pos = 0, temp = 0;

	while (str1.find(str2, pos) != -1) {
		pos = str1.find(str2, pos);
		pos++;
		temp++;
		fs << pos << '\t';
	}
	if (temp == 0)
		temp = -1;
	fs << '\n' << temp;
	fs.close();
}




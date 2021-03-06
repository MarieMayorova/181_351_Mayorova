// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// лабораторная 1 СТРУКТУРА ПРОГРАММЫ, ТИПЫ ДАННЫХ, ОСНОВНЫЕ ОПЕРАТОРЫ
// main.cpp
// 1-lesson C++
//дз 1)выписать и распечатать в коде всю таблицу escape последовательносьей
// 2)таблицу Ascii
// 3)типы данных + диапазоны

#include "pch.h"
#include <iostream> //подключить библиотеки

int main()// "Точка входа"
{
	//вывод на консоль
	//STD - облость видимости
	// в iostream есть часть библиотеке std

	std::cout << "Hello, world!\a\n"; // звонок (предупреждение) ASCII: BEL
	std::cout << "Hello, world!\b"; //backspace ASCII: BS
	std::cout << "Hello, world!\f"; //переод страницы ASCII: FF
	std::cout << "Hello, world!\n"; //новая строка ASCII:  NL(LF)
	std::cout << "Hello, world!\r"; //возврат каретки ASCII: CR
	std::cout << "Hello, world!\t"; //горизонтальная табуляция ASCII: HT
	std::cout << "Hello, world!\v"; //вертикальная табуляция ASCII: VT
	std::cout << "Hello, world!\'"; //одиночная кавычка ASCII: '
	std::cout << "Hello, world!\""; //двойная кавычка ASCII:"
	std::cout << "Hello, world!\\"; //обратная косая черта ASCII:  
	/*std::cout << "  Hello, World!\n";  // \n- перенос строки
	std::cout << " Hello, World!\t"; // \t - горизонтальная табуляция
	std::cout << " Hello, World!\v"; // \v - вертикальная табуляция
	std::cout << "  Hello, World!\a"; // \a - звонок предупреждение
	std::cout << "  Hello, World!\b"; // \b - backspace
	std::cout << "  Hello, World!\f"; // \f - перевод страницы
	std::cout << " Hello, World! \r"; // \r - возврат каретки
	std::cout << "  Hello, World!\'"; // \' - одиночная кавычка
	std::cout << "  Hello, World!\""; // \" - двойная кавычка
	std::cout << "  Hello, World!\\"; // \\ - обратная косая черта
	std::cout << "  Hello, World!\?"; // \? - литерал вопросительного знака  */
	// \ ooo - Символ ASCII в восьмеричной нотации
	//\x hh - Символ ASCII в шестнадцатеричной нотации
	//\x hhhh - Символ юникода в шестнадцатеричном формате,
	// если эта escape-последовательность используется в многобайтовой знаковой константе или строковом литерале юникода.

	//обьявление пременных/тип данных
	//int a;
	//int nuber_of_desks;
	//double speed;

	//типы данных
	// bool true/false
	//int от -2 147 483 648 до 2 147 483 647
	// short int -32768/32767
	//unsigned short int 0/65535
	//unsigned int 0/4294967295
	//long int -2147483648/2147483647
	//unsigned long int 0/4294967295
	//char 0/255 or -127/127 
	// signed char -127/127
	// unsigned char 0/255
	//wchar_t от 0 до 65 535 (при 2 байтах), либо от 0 до 4 294 967 295 (для 4 байт)
	//char16_t от 0 до 65 535
	//char32_t от 0 до 4 294 967 295
	//short от –32767 до 32767
	//long от −2 147 483 647 до 2 147 483 647
	//long long от −9 223 372 036 854 775 807 до +9 223 372 036 854 775 807
	//unsigned long long от 0 до 18 446 744 073 709 551 615
	//float с плавающей точкой от +/- 3.4E-38 до 3.4E+38
	//double с плавающей точкой от +/- 1.7E-308 до 1.7E+308
	//long double В зависимости от размера занимаемой памяти может отличаться
	// диапазон допустимых значений
	//void тип без значения

	//char(x8),short(x16),int(x32),long int(x32),long long(x64) - целые цисла со знаком
	//float(x32),double(x64)-числа с плаваюшей точкой
	//char- так же символы
	//boll,long boll
}
//Синтаксис C++
//блок кода в скобках{}
//разделение строк ;
//

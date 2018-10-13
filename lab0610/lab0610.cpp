//синтаксис объявления класса
//метод-все функции в составе класса
//свойства-все переменные в составе класса
//инкапсуляция-объединение данных и методов
//наследование-создание производных классов от родительского с заимствованием свойств и методов
//полиморфизм-экземпляры одного класса ведут себя по разному
//

#include "stdafx.h"
#include <iostream>
class vehicle
{
private://только внутри класса
public://спецификаторы доступа,можно обратиться везде
	double speed;
	char regnumber[6] = { 0 };
	unsigned char capacity;//число пассажиров
	bool check_regnumber();
	//синтаксис объявления объекта класса и обращение к св-вам и методам
	//имя_класса объект1;
	//объект1.свойство1=1;
	//объект1.метод3();
	//3.спецификация доступа
	//+protected:
	//
};
	class user_data { 
	private:
	    char first_name[255];
		char second_name[255];
		char str_passport[11];
		char str_birthdate[11];
	public:
		user_data();//конструктор
		~user_data();//деструктор- delete-вызов
		user_data(char p_first_name[255], char p_second_name[255], char p_str_passport[11], char p_str_birthdate[11]);
		user_data(char p_firstname[255], char p_secondname[255]);
			
				

        bool set_first_name(char p_first_name[255])
		{
			for (int k = 0; k < 255; k++) {
				if (first_name[k] < 97 && first_name[k] >122 || first_name[k]<65 && first_name[k]>90 ) {
					return false;
				};
			};
		return true;

		//проверять на отсутствие цифр,точек и др
	}; 
		bool set_second_name(char p_second_name[255])
		{
			return true;
		};
	
		bool set_birthdate(char p_birthdate[11])
		{
			for (int j = 0; j < 10; j++) {
				if (str_birthdate[2] != 46 || str_birthdate[5] != 46)
				{
					return false;
				}
				else if ((str_birthdate[j] < 48 || str_birthdate[j] >57)&&(j!=2||j!=5))
				{
					return false;
				};
			};
				return true;
			 //формат "00.00.0000
		};
		bool set_passport(char p_passport[11])
		{
			for (int i = 0; i < 10; i++)
			{
				if (str_passport[i] < 48 || str_passport[i] > 57)
				{
					return false;
				};
			};
				return true;
			 //формат 0000000000
		};
};
	//конструктор
	//деструктор
	//
	//
	user_data::user_data(char p_first_name[255], char p_second_name[255], char p_str_passport[11], char p_str_birthdate[11],)
	{
		if (set_first_name(p_first_name) && set_second_name(p_second_name)
			&& set_passport(p_str_passport) && set_birthdate(p_str_birthdate))
		{
			std::cout << "User OK\n";
		};
		else { std::cout << "User error" }
	}
	user_data::user_data(char p_firstname[255], char p_secondname[255])
	{
		if (set_first_name(p_firstname) && set_second_name(p_secondname))
		{
			std::cout << "User OK\n";
		};
		else { std::cout << "User error"; };

	}
	
int main()
{
	 user_data str_passport;
	 const char passport[11] = "0192029387"; 
	 if (bool set_birthdate = true) {
		 std::cout << " correct" << std::endl; 
	 }
	 else { std::cout << "incorrect" << std::endl; }

	 user_data str_birthdate;
	 const char birthdate[11] = "15.12.2000";
		 if (bool set_birthdate = true) {
			 std::cout << "correct" << std::endl;
		 }
		 else
		 {
			 std::cout << "incorrect" << std::endl;
		 }
	
		 user_data user1;
		 user_data user2("Ivanov", "Ivan", "0123456789", "12.22.2394");
		 user_data user3("Petrov", "Petr");

		


	//cоздать объект класса
	//вызвать написанный метод класса
	//вывести результат
    return 0;
}


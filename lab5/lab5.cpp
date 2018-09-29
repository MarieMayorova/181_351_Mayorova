// lab5.cpp:оператор перехода и циклы
//

#include "stdafx.h"
#include <iostream>
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
int* input_array()
{
	int arr[10] = { 0 };
	for (int iter = 0; iter < 10; iter++) {
		std::cin >> arr[iter];
	}
	return arr;
}
int func(int num_1, int num_2);

int main()
{
	/*char str[10] = { 'a', 'b', 'c', 'd','e','f','g','h','i','z' };
	int key = 1;
	int code = 0;
	for (int iter = 0; iter < 10; iter++) {
		std::cin >> str[iter];
	}
	for (int iter = 0; iter < 10; iter++) {
		code = str[iter] + key;
		if (code > 122) { code = code - 26; };
		str[iter] = char(code);
	}
	for (int iter = 0; iter < 10; iter++) {
		std::cout << str[iter] << std::endl;
	} 
	
	// ++key= 1+key key ++=key+1
	 int arr[10] = { 0 };
	for (int iter = 0; iter < 10; iter++) {
		print_array(arr[iter]) 
	};*/
	int num_1 = 1, num_2=2, res = 0;
	res = func(num_1, num_2);
	std::cout << res << num_1 << num_2 << std::endl;
	return 0;
}

	int func(int num_1, int num_2)
	{
		return num_1 + num_2; 
	}
	
	
	
	
   


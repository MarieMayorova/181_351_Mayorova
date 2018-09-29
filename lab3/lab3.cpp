#include "stdafx.h"
#include <iostream>

int main() {
	int bubble[10]{ 7, 6, 3, 4, 1, 5, 2, 9, 0, 8 };
	int tim;
	for (int i = 0; i < 10; i++) {

		do {
			tim = bubble[i];
			bubble[i] = bubble[i + 1];
			bubble[i + 1] = tim;
		}

		while (bubble[i]>bubble[i + 1]);
	}
	for (int i = 0; i<10; i++) {

		std::cout << bubble[i] << std::endl;
	}

	return 0;
}

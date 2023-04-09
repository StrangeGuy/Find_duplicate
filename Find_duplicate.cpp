// Find_duplicate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int arr[15]{};
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		std::cin >> arr[i];
	}

	std::cout << std::endl;
	
	for (int i = 0, counter = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (counter == 2) { arr[i] = 100; break; }
		if (arr[i] > 0) counter++;
	}

	for (int i : arr) {
		std::cout << i << '\t';
	}
}


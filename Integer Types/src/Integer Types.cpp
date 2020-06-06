//============================================================================
// Name        : Integer.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>

using namespace std;

int main() {
	int value = 54656;
	cout << value << endl;
	cout << "Max Integer Value: " << INT32_MAX << endl;
	cout << "Minimum Integer Value: " << INT32_MIN << endl;

	long int lValue = 2343546465460956;
	cout << lValue << endl;

	short int sValue = 23554;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl; // int size: 4 byte, 4 times 8 bit
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 2343548;
	cout << uValue << endl;

	return 0;
}

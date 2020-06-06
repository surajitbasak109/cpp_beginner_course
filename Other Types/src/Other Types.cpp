//============================================================================
// Name        : Other.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;

	cout << "Sizeof boolean: " << sizeof(bValue) << endl;
	cout << "Boolean of 'true': " << bValue << endl;

	cout << endl;

	char cValue = 'C';
	cout << "Sizeof character: " << sizeof(cValue) << endl;
	cout << "Character of 'C': " << cValue << endl;
	cout << "Integer value of character 'C': " << (int) cValue << endl;

	cout << endl;

	wchar_t wValue = 'i';
	cout << "Size of wide character 'i': " << sizeof(wValue) << endl;
	cout << "Wide Character of value 'i': " << wValue << endl;
	cout << "Wide Character of value 'i' casting with char: " << (char) wValue
			<< endl;

	return 0;
}

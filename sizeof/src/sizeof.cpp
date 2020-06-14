//============================================================================
// Name        : sizeof.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {2, 4, 9, 3, 5};

	cout << sizeof(values) << endl;

	for(unsigned int i = 0; i < sizeof(values)/sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	return 0;
}

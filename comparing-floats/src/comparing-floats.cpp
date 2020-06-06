//============================================================================
// Name        : comparing-floats.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value = 1.1;

	if (value == 1.1) {
		cout << "equals" << endl;
	} else {
		cout << "not equals" << endl;
	}

	cout << setprecision(10) << value << endl;

	return 0;
}

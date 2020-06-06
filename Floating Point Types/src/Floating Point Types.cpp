//============================================================================
// Name        : Floating.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue= 123.456789;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Fixed sized floating point integer: " << fixed << fValue<< endl;
	cout << "Scientific floating point integer: " << scientific << fValue<< endl;
	cout << "Fixed floating point integer (using set precision): " << setprecision(20) << fixed << fValue<< endl;

	double dValue = 123.456789;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Double Value: " << dValue << endl;

	long double lValue = 123.456789876543210;
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << "Long Double Value: " << lValue << endl;
	cout << "Long Double Value (using set precision): " << setprecision(20) << lValue << endl;
	return 0;
}

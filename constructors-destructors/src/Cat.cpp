/*
 * Cat.cpp
 *
 *  Created on: 06-Jul-2020
 *      Author: techcet
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meouww!" << endl;
	} else {
		cout << "Ssssss!" << endl;
	}
}


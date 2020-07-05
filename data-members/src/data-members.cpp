//============================================================================
// Name        : data-members.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	Cat jim;
	jim.makeHappy();
	jim.speak();

	Cat bob;
	bob.makeSad();
	bob.speak();
	return 0;
}

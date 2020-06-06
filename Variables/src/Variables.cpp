//============================================================================
// Name        : Variables.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;

	cout << "Number of Cats: " << numberCats << endl;
	cout << "Number of Dogs: " << numberDogs << endl;

	cout << "Total number of Animals: " << numberAnimals << endl;

	cout << "New dog acquired!" << endl;

	numberDogs++;

	cout << "New number of dogs: " << numberDogs << endl;

	return 0;
}

int abs (int args) {
  if(args < 0) {
    return -args;
  }
  return args;
}

int fibonacci (int n) {
  if(n < 2) return 1;

  return fibonacci(n-1) + fibonacci(n-2);
}

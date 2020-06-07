//============================================================================
// Name        : complex-conditions.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <typeinfo>
using namespace std;

/**
 * == Equality Test
 * != Not equals
 * < Less Than
 * > Greater Than
 * <=Less than or equal to
 * >= Greater than or equal to
 */

int randomNum() {
	return (rand() % 9) + 1;
}

int main() {

	int userPoints = 0;
	int computerPoints = 0;
	int value1 = randomNum();
	int value2 = randomNum();
	char sure;
	int userInput1;
	int userInput2;
	string userPointSuffix = (userPoints > 0) ? "points" : "point";
	string computerPointSuffix = (computerPoints > 0) ? "points" : "point";

	cout
			<< "Right now I am thinking of a number. Let's play a game, are you sure(y/n|default:n)?"
			<< endl;
	cout << ">> " << flush;
	cin >> sure;

	if (sure != 'y') {
		cout << "See you next time." << endl;
		return 0;
	}

	cout << endl;

	cout << "===============" << "Round 1" << "===============" << endl;

	cout << "Computer(" << computerPoints << " " << computerPointSuffix
			<< ") v/s " << "You(" << userPoints << " " << userPointSuffix << ")"
			<< endl;
	cout << endl;

	cout << "Enter your first number between 1-9 to beat my first number: "
			<< endl;
	cout << ">> " << flush;
	cin >> userInput1;
	cout << endl;

	printf("You: %d, Me: %d\n", userInput1, value1);

	if (userInput1 > value1) {
		int diff1 = userInput1 - value1;
		cout << "!!!You win!!!" << " and it dominates by "
				<< diff1 << "." << endl;
		userPoints++;
	} else {
		cout << "This time I won! Let's see for the next round." << endl;
		computerPoints++;
	}

	cout << endl;

	cout << "===============" << "Round 2" << "===============" << endl;

	cout << "Computer(" << computerPoints << " " << computerPointSuffix
			<< ") v/s " << "You(" << userPoints << " " << userPointSuffix << ")"
			<< endl;
	cout << endl;

	cout << "Enter your second number between 1-9 to beat my second number: "
			<< endl;
	cout << ">> " << flush;
	cin >> userInput2;

	cout << endl;

	printf("You: %d, Me: %d\n", userInput2, value2);
	if (userInput2 > value2) {
		int diff2 = userInput2 - value2;
		cout << "!!!You win!!!" << " and it dominates by " << diff2 << "."
				<< endl;
		userPoints++;
	} else {
		cout << "This time I won! Let's see for the next round." << endl;
		computerPoints++;
	}

	cout << endl;

	userPointSuffix = (userPoints > 0) ? "points" : "point";
	computerPointSuffix = (computerPoints > 0) ? "points" : "point";

	cout << "Computer(" << computerPoints << " " << computerPointSuffix
			<< ") v/s " << "You(" << userPoints << " " << userPointSuffix << ")"
			<< endl;
	if (computerPoints > userPoints) {
		cout << "I own!" << endl;
	} else {
		cout << "||======================================================||" << endl;
		cout << "||==============" << "Congratulations, you win!" << "===============||" << endl;
		cout << "||======================================================||" << endl;
	}

	return 0;
}

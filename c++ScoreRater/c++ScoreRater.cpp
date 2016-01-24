// c++ScoreRater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	if (true) {
		cout << "This is always displayed.\n\n";
	}


	if (false) {
		cout << "This is never displayed.\n\n";
	}

	int score = 1000;

	//This if statement returns as true because score is more than 0; any number above 0 is counted as true
	if (score) {
		cout << "At least you didn't score zero.\n\n";
	}

	if (score >= 250) {
		cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500) {
		cout << "You scored 500 or more. Nice.\n\n";

		//Nested if statement
		if (score >= 1000) {
			cout << "You scored 1000 or more. Impressive!\n\n";
		}
	}


    return 0;
}


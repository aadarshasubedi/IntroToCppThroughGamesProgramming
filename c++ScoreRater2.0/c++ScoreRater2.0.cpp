// c++ScoreRater2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int score;

	//Ask user for their score
	cout << "Enter your score: ";
	//Place the score entered into the score variable
	cin >> score;

	//Check the value of the score and display corresponding message
	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!\n";
	}
	else {
		cout << "You scored less than 1000.\n";
	}





    return 0;
}


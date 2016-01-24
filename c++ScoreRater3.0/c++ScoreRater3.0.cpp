// c++ScoreRater3.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int score;

	//Tell the user to enter their score
	cout << "Enter your score: ";
	//Store entered number into the score variable
	cin >> score;




	//each expression will be checked one after the other in order until one returns true
	//If no expression returns true the final default message will be displayed
	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!\n";
	}
	else if(score >= 500) {
		cout << "You scored 500 or more. Nice.\n";
	}
	else if (score >= 250) {
		cout << "You scored 250 or more. Decent.\n";
	}
	else {
		cout << "You scored less than 250. Nothing to brag about.\n";
	}







    return 0;
}


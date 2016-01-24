// c++MenuChooserProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	//Switch statements will only test values that can be treated as an integer

	//Display the options avalible to the user
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	//The users entered value
	int choice;
	cout << "Choice: ";
	//Get the users choice
	cin >> choice;


	switch (choice)
	{

		case 1:
			cout << "You picked easy.\n";
			break;
		case 2:
			cout << "You picked normal.\n";
			break;
		case 3:
			cout << "You picked hard.\n";
			break;
		default:
			cout << "You made an illegal choice.\n";
			break;
	}
	

    return 0;
}


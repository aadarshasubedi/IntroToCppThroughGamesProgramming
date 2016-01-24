// c++PlayAgainProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	//due to while loops checking their expression before the body of the loop any variables must be intilised before the loop
	char again = 'y';

	
	while (again == 'y') {
		//This code will be run everytime the player selects y
		cout << "\n***Played and exciting game***";
		cout << "\n Do you want to play again? (y/n): ";
		cin >> again;
	}

	//this statement will only run when the loop exists after the player does not select y
	cout << "\n Ok bye!\n";


    return 0;
}


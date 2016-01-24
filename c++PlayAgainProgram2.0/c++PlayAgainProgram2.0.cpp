// c++PlayAgainProgram2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{


	//Because the expression is not checked until the end of a do while loop the variable value does not need to be initlised before hand
	char again;

	do{	
		cout << "\n***Played and exciting game***\n";
		cout << "Do you want to play again? (y/n): ";
		cin >> again;

	} while (again == 'y');

	cout << "\n Ok bye.\n";

    return 0;
}


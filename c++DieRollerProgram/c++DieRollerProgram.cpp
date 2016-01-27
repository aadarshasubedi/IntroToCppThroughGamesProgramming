// c++DieRollerProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//Contains functions that allow the generation of random number for instance
#include<cstdlib>

#include <ctime>

using namespace std;


int main()
{

	//Tells the computer to seed the random number based on the date and time to make the random number sequence different each time the program is run
	//static_cast<unsigned int> - casts the date and time to an integer value 
	srand(static_cast<unsigned int>(time(0)));


	int randomNumber = rand(); //Generate random number //The max value of the random number generator can be around 32767

	int die = (randomNumber % 6) + 1; //Get a number between 1 and 6

	cout << "You rolled a " << die << endl;



    return 0;
}


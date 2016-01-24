// c++DeclearingAndInitializingVariables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//GameStatsProgram
int _tmain(int argc, _TCHAR* argv[])
{
	//Declare varibales for game
	//variables are delcared by declareing the variable type (int) then by providing a name or identifyer (score)
	int score; //holds whole numbers = 56
	double distance; //holds a double point float = 1256.32
	char playAgain; //holds a single character = 'D'
	bool shieldsUp; //holds a true or false answer (can use 0 and 1 for false and true respectivly)

	//just writting short can be used as a method of declaring a short integer
	short lives, aliensKilled; //Multiply variables can be declared on a single line
	//short - limits the total number of values that can be held by the variabel
	//long - will incease the number of values that can be held

	//the assignment operator (=) is used to assign values to varibales
	score = 0;
	distance = 1200.76;
	playAgain = 'y'; //chars or characters can be assigned by surrouned them in single quotes
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	
	//Variables can be declared and assigned in the same line
	double engineTemp = 6572.89, spaceSpeed = 65985.32; //multiple variables can be declared and assigned in a single line 

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain" << playAgain << endl;
	//Skipping shields up as bools are typicaly not printed to the screen
	cout << "lives: " << lives << endl;
	cout << "aliens killed: " << aliensKilled << endl;
	cout << "engine temp: " << engineTemp << endl;


	int fuel;
	cout << "\nhow much fuel?"; 
	// cin gets the user input - cin is an object defined in the iostream and uses the standard library namespace
	cin >> fuel;
	cout << "fuel: " << fuel << endl;


	//signed and unsigned modifiers can only be used with ints
	//signed allows the variable to store both positive and negative numbers - where as unsigned only allows positive numbers to be store
	typedef unsigned short int ushort; // typedef is used to define a new name for variables types
	//this is accomplished by delcaring typedef "old name of existing variable type" then the "new name of existing variable type"
	ushort bonus = 10;
	cout << "\nbonus" << bonus << endl;


	return 0;
}


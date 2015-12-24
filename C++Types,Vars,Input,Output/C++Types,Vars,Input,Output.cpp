// C++Types,Vars,Input,Output.cpp : Defines the entry point for the console application.
//

//header files
#include "stdafx.h"
#include <iostream> //Preproccessor directive - tells the program what other files to include, so for this line it is the file to allow input and input in the program
using namespace std; //Using directive - get direct access to the elements in the c++ standard library - no need for any prefix 
//using std::cout; you cans specify what elements from a namespace in order to only load the elements required for your program


int main() //The main function must be in every c++ as it is the starting point (first function called) of the program
{


	//std - namesapce for the standard library
	//cout - object from the iostream file that sends data to the standard output stream (usually a screen)
	//:: - scope resolution operator 
	//endl - end line object (acts as taking a new line)
	//; - a statement or "line" terminator 

	//std::cout << "Game Over!" << std::endl; //Write Game Over! to the user screen

	string name = "Danny";

	cout << "Game Over!" << endl; //std is not required as the std library was inlcuded with the header files
	

	return 0; //Used to indicate program ran with no issues
}
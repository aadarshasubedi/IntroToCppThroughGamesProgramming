// c++ArithmaticOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//ExpensiveCaculator
int _tmain(int argc, _TCHAR* argv[])
{
	//Each arithmetic oporator is part of an expression - something that evaluats into a single value
	cout << "7 + 3 = " << 7 + 3 << endl; //Addition
	cout << "7 - 3 = " << 7 - 3 << endl; //Subtraction
	cout << "7 * 3 = " << 7 * 3 << endl; //Multiply
	
	
	cout << "7 / 3 = " << 7 / 3 << endl; //Division - Will return an interger as the calculation was done with intergers
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl; //Floating point numbers (number with a fractional part) returns a more accurate value
	cout << "7 % 3 = " << 7 % 3 << endl; //Modulus - returns the remander of interger only based division

	
	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl; //Multiplication is carried out before addition as it has a higher precedence
	cout << "(7 + 3) * 5= " << (7 + 3) * 5 << endl; //To run an operator with a lower precednece first place it inside brackets







	return 0;
}


/*int _tmain(int argc, _TCHAR* argv[])
{




	return 0;
}*/

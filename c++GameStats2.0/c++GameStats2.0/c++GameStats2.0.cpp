// c++GameStats2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{


	unsigned int score= 5000;
	cout << "score: " << score << endl;

	//increase The Score By Adding 100 to The Current Score Amount
	score = score + 100;
	cout << "score: " << score << endl;

	//Use A Combined Assignemnt Operator ToIncrase The Score As Above WithLess Text
	score += 100;
	cout << "score: " << score << endl;

	//Incremental Oporators Increase The Varibales Value
	//Using ++ Will Increase It By One
	int lives = 3;
	++lives; //prefix incremental oporator
	cout << "Lives: " << lives << endl;

	lives++; //postfix incremental oporator
	cout << "Lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10; //prefix incremetor increase the varible before evaluation the rest of the expression
	cout << "lives, bonus = " << lives << "," << bonus << endl;

	lives = 3;
	bonus = lives++ * 10; //postfix incrementor increases the varable after the evaluation of the larger expression 
	cout << "lives, bonus = " << lives << "," << bonus << endl;

	//the decrement (--) operator works in the same way as the incrementor operator

	//int wrap around
	//interger wrap around is when an integer is set back to 0 as the integer went  beyond its maximum value.
	score = 4294967295;
	cout << "\nscore: " << score << endl;

	++score;
	cout << "\nscore: " << score << endl;



	return 0;
}


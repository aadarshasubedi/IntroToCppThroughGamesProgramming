// c++GameStats3.0-Constants.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//Using a constant means this value can only be changed at the decleration of the varibale
	const int ALIEN_POINTS = 150;

	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "Score: " << score << endl;


	//enumeration is a set of unsigned int constants called enumerators - they are usually related and have a particular order
	//such as a games difficulty setting
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	//the variable is created using the enum type - in this case difficulty - this means it can only hold one of the preset
	//enum difficulty values decleared above or their integer value counter part - (0, 1, 2, 3, 4) in this case
	difficulty myDifficulty = EASY;

	//Values can be set for enums as below
	//However any enum option that does not get its value set will use the value of the previous enum plus 1
	//This means BOMBER_COST = 26
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUSIER_COST = 50};
	shipCost mySHipCost = BOMBER_COST;
	//This line shows that enums can be used in arithmatic calculations
	cout << "\nTo upgrade my ship to a Crusior will cost " << (CRUSIER_COST - mySHipCost) << "Resources points.\n";


	return 0;
}


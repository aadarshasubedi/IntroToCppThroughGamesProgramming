// c++LostFortuneProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>	//included to use string object from stadard library
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//Get user info
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personoalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;
	//cin does not work with strings that contain whitespace
	cout << "Enter your last name: ";
	cin >> leader;
	//story 
	cout << "\nA brave group of " << adventurers << " set out on a quest - in search of the lost tresure of the ancient Dwarves.";
	cout << " The group was led by the legendary rouge " << leader << ".\n";
	cout << "\nOn the way a band of maruding ogres ambushed the party. ";
	cout << "All fought bravley under the command of " << leader << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers " << killed << " were vanquishedm leaving just " << survivors << " in the group. \n";
	cout << "\nThe party was about to give up all hope. But while layin the deceased to rest, they stumbled upon the buried fortune.";
	cout << " So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course\n";	
	
	return 0;
}


// c++DesignersNetworkProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{


	string username;
	string password;
	bool success;

	cout << "\tGame Designers Network\n";

	do {
		cout << "\nUsername: ";
		cin >> username;

		cout << "\nPassword: ";
		cin >> password;

		if (username == "S.Meier" && password == "civ") {
			cout << "\nWelcome " << username;
			success = true;
		}
		else if (username == "H.Kojima" && password == "mgs") {
			cout << "\nWelcome " << username;
			success = true;
		}
		else if (username == "T.Refenes" && password == "meat"){
			cout << "\nWelcome " << username;
			success = true;
		}
		else if (username == "guest" || password == "guest"){
			cout << "\nWelcome guest";
			success = true;
		}
		else {
			cout << "\nLog in failed!";
			success = false;

		}
	} while (!success);

    return 0;
}


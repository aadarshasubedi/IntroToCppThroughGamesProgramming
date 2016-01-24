// c++FinickyCounterProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int count = 0;

	//constantly run the loop
	while (true) {
		//increase the count variable
		count++;

		//if count is equal to 5 restart the loop before printing the value 5
		if (count == 5) {
			continue;
		}

		//print the value of count
		cout << count << "\n";

		//Once count is equal to 10 break the loop
		if (count == 10) {
			break;
		}
	}



    return 0;
}


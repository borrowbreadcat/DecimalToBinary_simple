// DecimalToBinary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void splash()
{
	cout << "part of the borrowbreadcat learns C++ effort.\n";
	cout << "this code is primarily practice work for me as I learn to program.\n\n";
	cout << "\tVERSION HISTORY\n";
	cout << "\tv20180725.3: fixed mistake in instructions.\n";
	cout << "\tv20180725.2: improved io\n";
	cout << "\tv20180725.1: finished working version\n";
	cout << "\tv20180724.1: initial code\n";
	cout << "\tv20180723.1: creation\n\n";
	cout << "learncpp.com Chapter 3 Section 7: Converting Between Decimal and Binary\n";
	cout << "\"6. Write a program that asks the user to input a number between 0 and 255.\n";
	cout << "Print this number as an 8 - bit binary number(of the form #### ####).\n";
	cout << "Don't use any bitwise operators.\"\n";
}

int requestUserNumber()
{
	cout << endl; 
	int input;
	cin >> input;
	return input;
}

int decToBin(int num)
{
	cout << " in binary: \t";
	int binPlaceVal = 128;
	while ( binPlaceVal >= 1 )
	{
		if ((num > 255) || (num < 0))
		{
			cout << "Try a number from 0 to 255. Those are the constraints of an 8-digit binary number.";
			return 0;
		}
		if (num >= binPlaceVal)
		{
			cout << "1";
			num = num - binPlaceVal;
		}
		else
		{
			cout << "0";
		}
		binPlaceVal = binPlaceVal / 2;
		if (binPlaceVal == 8)
			cout << " ";
	}
	return 0;
}

int main()
{
	splash();
	cout << "\nWrite your positive base-10 integers (no decimal points!) under 256, and I'll convert them to 8-bit binary:\n";
	bool repeat{ true };
	while (repeat == true) //infinite. older version used userYesNo.cpp to give exit option, but asked between every number.
	{
		int userNumber = requestUserNumber();
		decToBin(userNumber);
	}

    return 0;
}

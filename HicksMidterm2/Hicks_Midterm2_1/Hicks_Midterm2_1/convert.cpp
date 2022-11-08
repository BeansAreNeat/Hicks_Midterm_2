#include <iostream>
#include <string.h>
using namespace std;

/*
	Citations:
	1) https://www.tutorialspoint.com/cplusplus-program-to-convert-decimal-numbers-to-octal
	2) https://www.tutorialspoint.com/cplusplus-program-for-hexadecimal-to-decimal
	3)
*/

// Function from citation #1
int decToOct(int decNum)
{
	int octNum = 0, placeVal = 1;
	while (decNum != 0) // While input isn't 0
	{
		octNum += (decNum % 8) * placeVal;	//
		decNum /= 8;						//
		placeVal *= 10;						// placeVal = placeVal * 10
	}
	return octNum;	// Output
}

void convertDec()
{
	int decNum;
	cout << "Input decimal number: ";
	cin >> decNum;
	// Outout in octal
	cout << decNum << " in octal = " << decToOct(decNum) << endl;
	// Output in hexadecimal
	cout << decNum << " in hex = " << hex << decNum << endl; // Uses built in C++ hex function
}

void convertHex()
{
	// Input
	string num;
	int base = 1;
	// Output
	int decOutput = 0;

	cout << "Input hexadecimal numbeer: ";
	cin >> num;

	// Converts hex to decimal
	// For loop from citation #2
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			decOutput += (num[i] - 48) * base;
			base = base * 16;
		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			decOutput += (num[i] - 55) * base;
			base = base * 16;
		}
	}

	// Output in decimal
	cout << num << " in decimal = " << decOutput << endl;
	// Output in octal // Uses decimal translation to output in octal
	cout << num << " in octal = " << decToOct(decOutput) << endl;
}
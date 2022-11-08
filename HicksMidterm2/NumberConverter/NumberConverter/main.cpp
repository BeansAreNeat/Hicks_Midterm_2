// This program takes decimal, octal, & hexadecimal number & converts it to the other number systems
// Joseph Hicks
// November 7, 2022
#include <iostream>
using namespace std;

/*
	Citations:
	1) https://stackoverflow.com/questions/20034297/decimal-to-hex-conversion-c-built-in-function
	I learned about the built in hex function from here. 
	I then infered the oct & dec function, and later had to test 
	them out in the cin operator, in order to get the correct outputs
*/

// Converts named numeric system
void convertHex();
void convertDec();
void converOct();

int main()
{
	int ans;
	cout << "Do you want to use: " << endl;
	cout << "1) Decimal" << endl
		 << "2) Octal" << endl
		 << "3) Hexadecial" << endl;
	cin >> ans;

	// Switch decides what convertion to call
	switch (ans) {
	case 1: convertDec(); break;
	case 2: converOct();  break;
	case 3: convertHex(); break;
	}

	return 0;
}
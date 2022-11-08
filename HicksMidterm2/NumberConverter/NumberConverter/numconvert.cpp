#include <iostream>
using namespace std;

// dec, oct, & hex functions control what numeric system to read and write integers into

void convertDec()
{
	int num;
	cout << "Input decimal number: ";
	cin >> dec >> num;
	// Outputs in all 3 number systems
	cout << dec << num << " in decimal = " << dec << num << endl;
	cout << dec << num << " in octal = " << oct << num << endl;
	cout << dec << num << " in hexadecimal = " << hex << num << endl;
}

void converOct()
{
	int num;
	cout << "Input octal number: ";
	cin >> oct >> num;
	// Outputs in all 3 number systems
	cout << oct << num << " in octal = " << oct << num << endl;
	cout << oct << num << " in decimal = " << dec << num << endl;
	cout << oct << num << " in hexadecimal = " << hex << num << endl;
}

void convertHex()
{
	int num;
	cout << "Input hexadecimal number: ";
	cin >> hex >> num;
	// Outputs in all 3 number systems
	cout << hex << num << " in hexadecimal = " << hex << num << endl;
	cout << hex << num << " in decimal = " << dec << num << endl;
	cout << hex << num << " in octal = " << oct << num << endl;
}
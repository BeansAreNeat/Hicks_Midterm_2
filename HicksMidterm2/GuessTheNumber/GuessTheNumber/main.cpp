// Program guess the number of a user
// Joseph Hicks
// November 6, 2022
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main()
{
	int guess, attempts;
	int limit = 10;
	char ans = 'n';

	do
	{
		// Random Number generator
		srand(time(0));
		int secretNum = (rand() % 1000) + 1;

		cout << "I have a number between 1 and 1000" << endl;
		cout << "Can you guess my number?" << endl;

		// Counts users limit of guesses
		for (attempts = 0; attempts <= limit; attempts++)
		{
			cout << "Please type your guess: ";
			cin >> guess;

			if (guess < secretNum)
				cout << "Too low. Try again" << endl << endl;

			else if (guess > secretNum)
				cout << "Too high. Try again" << endl << endl;

			else if (guess == secretNum)
			{
				cout << "Ahah!You know the secret!" << endl;
				cout << "It took you " << attempts << " tries to guess correctly" << endl;
				cout << "Would you like to play again(y or n)?" << endl;
				cin >> ans;
				// If you guess correctly, the for loop ends
				attempts = limit;
			}
			// If the attempts has hit the limit, but not due line 38,
			// then the user must have taken too many trys
			if (attempts == limit && guess != secretNum)
				cout << "You should be able to do better!" << endl;
		}
		
	} while (ans == 'y');
	return 0;
}
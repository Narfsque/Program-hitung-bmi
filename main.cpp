#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <limits>
#include <windows.h>

using namespace std;

int main()
{
	srand(time(NULL));

	while (true)
	{
		int diceRoll = rand() % 6 + 1;

		int guess;
		cout << "Guess a number between 1 and 6: ";
		cin >> guess;
		if (guess == diceRoll)
		{
			cout << "Coorrect!" << endl;
		}
		else
		{
			Beep(656, 1500);
			cout << "Sorry, the correct number was " << diceRoll << "." << endl;
		}
		system("pause");
	}
	
	return 0;
}


#include <iostream>
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
using namespace std;

int main()
{

	int uNumber, cRandNumber, chart[5][999],
		i = 0, j = 1, guessCount[5], guesses;

	cout << "Enter 5 Numbers, 5 - 20." << endl;
	do
	{												 //this section allows the users to input
		cout << "\nEnter digit # " << i + 1 << endl; //a value for the computer to "guess" at
		cin >> uNumber;
		while (uNumber < 5 || uNumber > 20)
		{
			cout << "Your entry is outside of parameters,"
				 << " please enter another value: " << endl;
			cin >> uNumber;
		}
		chart[i][0] = uNumber;			 //initializes the user selected value to the array
		srand(time(0));					 //seeds 'rand' for random number generation
		cRandNumber = 5 + (rand() & 15); //computer guess and analysis section
		while (cRandNumber != uNumber)
		{
			chart[i][j] = cRandNumber;
			cout << "\nThe computer guesses: "
				 << cRandNumber
				 << "\nThe computer guessed incorrectly";
			j++;
			cRandNumber = 5 + (rand() & 15);
		}
		chart[i][j] = cRandNumber;
		cout << "\nThe computer guesses: "
			 << cRandNumber << "\nThe computer has guessed correctly\n";
		guessCount[i] = j;
		j = 1;
		i++;
	} while (i < 5);
	i = 0;
	do
	{ //this section displays the results
		j = 1;
		guesses = guessCount[i];
		cout << "\n\nFor play #" << i + 1 << " you selected "
			 << chart[i][0] << "\nThe computer guessed "
			 << guessCount[i] << " times before getting"
			 << " it correct.\n The computer guessed: \n";
		for (j; j <= guesses - 1; j++)
		{
			if (j % 5 == 0)
				cout << "\n";
			cout << chart[i][j] << ", ";
		}
		cout << chart[i][j] << endl;
		i++;
	} while (i < 5);

	return 0;
}

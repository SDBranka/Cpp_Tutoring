#include <iostream> // includes cin/cout
#include <cmath>	// includes library that allows sqrt
#include <cstdlib>	// includes library that allows pow and rand
#include <ctime>	// includes computer time
#include <fstream>	// includes i/o stream
#include <cctype>	// includes toupper/tolower
using namespace std;

void displayHeading(); //displays project information

int main()
{
	int start, stop, countBy, x;

	cout << "Please enter a value to start counting at: "; // section of code to determine user inputs
	cin >> start;
	cout << "\nPlease enter a value to stop counting at: ";
	cin >> stop;
	cout << "\nPlease enter a value to count by: ";
	cin >> countBy;

	if (start > stop && countBy > 0 || start < stop && countBy < 0 || countBy == 0)
	{
		cout << "Invalid countBy interval. Please enter another\n"
			<< "value: ";
		cin >> countBy;
	}

	cout << "Count:  "; //section of code that counts
	for (x = start; x < stop; x += countBy)
	{
		cout << x << ", ";
	}
	cout << stop << "\n\n";

	return 0;
}

/*�start�, �stop�, and �count by� can be decimal
*  �start� and �stop� may both be negative
*  �count by� must be negative if �stop� < �start�*****
*  �count by� must be positive if �start� < �stop�*****
*  �count by� may NEVER be zero.***********************
*/

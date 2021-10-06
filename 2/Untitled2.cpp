//
//	Your Name
//	CMPSC 121
//	Date
//	Description
//

//	If you choose to use a preprocessor directive - ie to turn debugging
//	notes on an off - you would put them here
//	#define debug 1
//	Pound includes

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

//	Class Definitions

class PrimeTest
{
public:
	//	Integer Variable
	//	Boolean variable for storing the result
	//	Any other variables would be considered temporary and can be
	//	declared when you use them
};

//	Function Prototypes
void printHeader(string, string, string, string);
int getInteger(void);
bool isPrime(int);
void printResults(int, bool);
//	Definition of the program function

int main(void)
{
	//	Call the splash screen function
	printHeader("Your Name", "CMPSC 121", "Date", "Program Description");
	//	Create an object to hold the integer and the boolean result
	PrimeTest testValue;
	//	Call function to prompt for the input
	//	Call function to determine if the number is prime
	//	Call function to print the results as prime or not
	return 0;
}

int getInteger(void)
{
	//	GETINTEGER getInteger(void) is the function used to enter an integer
	//	value and check that it is greater than one
	//
	//	Name:
	//	Course:	CMPSC 121
	//	Date:
	//
	//	Declare the integer value
	int enteredValue;
	//	Enter data into the program - a single integer. This needs to be
	//	checked to be sure that the number is greater than one. The error
	//	check should be done using a do-while loop. You may use the following
	bool isBadValue;
	do
	{
		//	Prompt and enter integer value
		cout << cin >> enteredValue;
		//	Check if number  is <= 1
		if (<= 1)
		{
			//	Print an error message
			//	Set flag to false
			isBadValue = true;
		}
		else
		{
			// Value is good (it is > 0) so set flag to false
			isBadValue = false;
		}
	} while (isBadValue);
	//	By time you get here the value must be larger than one so return it
	return enteredValue;
}

void printHeader(string name, string course, string dueDate, string description)
{
	//	PRINTHEADER printHeader(string, string, string, string) is the
	//	function used to hide away the splash screen
	//
	//	Name:	Prof. Adams
	//	Course:	CMPSC 121
	//	Date:	12 March 2017
	//
	//	Print the splash screen
	cout << endl;
	cout << name << endl;
	cout << course << endl;
	cout << dueDate << endl;
	cout << description << endl;
	cout << endl;
	return;
}

bool isPrime(int n)
{
	//	ISPRIME isPrime(int, bool) is the
	//	function used to hide away the splash screen
	//
	//	Name:	Prof. Adams
	//	Course:	CMPSC 121
	//	Date:	12 March 2017
	//
	//	Create a bool variable setting it to true to start
	//	Use a loop to determine if the value, n, is prime or not. If it is not
	//	you set the bool variable to true - but not till the end
	//	return the boolean value
	return
}

void printResults(int n, bool isPrimeValue)
{
	//	PRINTRESULTS printResults(int, bool) is the function used to print
	//	the results of the program
	//
	//	Name:
	//	Course:	CMPSC 121
	//	Date:
	//
	//	Use a selection structure to determine whether to print that the
	//	value is prime or not prime
	//	Do not return anything - thus no variable here
	return;
}
Chat Conversation End
	Type a message...

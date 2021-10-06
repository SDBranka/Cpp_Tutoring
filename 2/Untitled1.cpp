
//	T H
//	CMPSC 121
//	3/26/2017
//	Writing a function
//
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
	//Integer Variable
	int n;
	//Boolean variable for storing the result
	bool isNOTprimeValue;
};

//	Function Prototypes
void printHeader(string name, string course, string dueDate, string descrpition);
int getInteger(void);
bool isPrime(int);
void printResults(int, bool);

//	Definition of the program function
int main(void)
{
	//	Call the splash screen function
	printHeader("T H", "CMPSC 121", "3/26/17", "Writing Functions");
	//	Create an object to hold the integer and the boolean result
	PrimeTest n;
	PrimeTest isNOTprimeValue;
	//	Call function to prompt for the input
	getInteger();
	//	Call function to determine if the number is prime
	isPrime(n.n);
	//	Call function to print the results as prime or not
	printResults(n.n, isNOTprimeValue.isNOTprimeValue);
	return 0;
}

int getInteger(void)
{
	//	GETINTEGER getInteger(void) is the function used to enter an integer
	//	value and check that it is greater than one
	//
	//	Name:	T H
	//	Course:	CMPSC 121
	//	Date:	3/26/17
	//
	//	Declare the integer value
	int n;
	//	Enter data into the program - a single integer. This needs to be
	//	checked to be sure that the number is greater than one. The error
	//	check should be done using a do-while loop.
	bool isBadValue;
	do
	{
		//	Prompt and enter integer value
		cout << "Please enter an integer greater than zero" << endl;
		cin >> n;
		//	Check if number  is < 1
		if (n < 1)
		{
			//	Print an error message
			cout << "Integers are all whole numbers and zero. Please enter an integer greater than zero" << endl;
			//	Set flag to false
			isBadValue = true;
		}
		else
		{
			// Value is good (n > 0) so set flag to true
			isBadValue = false;
		}
	} while (isBadValue);
	//	By time you get here the value must be larger than one so return it
	return n;
}

void printHeader(string name, string course, string dueDate, string description)
{
	//	PRINTHEADER printHeader() is the
	//	function used to display the splash screen
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
	//	function used to determine if the enteredValue is prime
	//
	//	Name:	T H
	//	Course:	CMPSC 121
	//	Date:	3/26/17
	//
	//
	//	Create a bool variable setting it to true to start
	bool isNOTprimeValue = true;
	//	Use a loop to determine if the value, n, is prime or not. If it is not
	//	you set the bool variable to true - but not till the end
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isNOTprimeValue = false;
		}
		else
			isNOTprimeValue = true;
	}
	//	return the boolean value
	return isNOTprimeValue;
}

void printResults(int n, bool isNOTprimeValue)
{
	//	PRINTRESULTS printResults(int, bool) is the function used to print
	//	the results of the program
	//	Use a selection structure to determine whether to print that the
	//	value is prime or not prime
	if (isNOTprimeValue = true)
		cout << n << " is NOT a prime number." << endl;
	else
		(isNOTprimeValue = false);
	cout << n << " IS a prime number." << endl;
	//	Do not return anything - thus no variable here

	return;
}

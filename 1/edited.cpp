#include <iostream>
#include <iomanip>                 //no comments provided, why are you including these libraries?
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  double cloop = 0;              //why are you initializing these as doubles?
  double dloop = 0;
  
  cout<<"Enter 5 Numbers, 5 - 20."<<endl;   
  
  int uarray[]+{1, 2, 3, 4, 5};    //what are you attempting to do with this?
  
  for(int dloop=0;dloop==5;dloop++)       //This loop as it's written here may cause problems
                                          // as each time it starts from the top your variable
                                          // 'dloop' resets to zero and will probably run infinitely
  {
    cout<<"Number #"<<dloop+1<<": ";
    cin>>uarray[dloop];
  }
  
  int carray[]={1, 2, 3, 4, 5};         //the assignment asks for random numbers as the "computer's
                                        //guesses" you are going to need to develop a random number generator
                                        //Random number generation is a really commonly used tactic in C++ 
                                        //if you're not really comfortable with it, let's make that a point to 
                                        //work on when we sit down together.
  
  for(int cloop=0;cloop==5;cloop++)
  {
    cout<<"Guess #"<<cloop+1<<": ";      //what are you attempting to do with this?
    
    
  }
    
  return 0;
}



/* I completed a facimile of this assignment in 1.5 hrs (the provided .exe wouldn't run on my laptop so I didn't have a proto to follow)
*	I ended up using the following libraries (with comments):

#include <iostream>                        // includes input/output streams
#include <cstdlib>                         // includes library that allows pow and rand
#include <ctime>                           // includes computer time
using namespace std;

*	try to get into the habit of including comments with your work. it will save you a heck of a lot of headache as your
*	programming becomes more involved. There's not much more frustrating than getting lost in your own program/not remember what or why you 
*	did something. Starting off with good habits is -way- easier than trying to add them later on.
* 	In full I used 7 variables (as shown below), all int, though I would knock it down to six on re-edit if I had to turn this in:

int uNumber, cRandNumber, chart[5][999], i=0, j=1, guessCount[5], guesses; 	       
*	reading the assignment it appears to me that the instructor wishes you to limit answers outside of the parameters (entering numbers <5 or >20
*	make sure you develop that sort of section should that be the case. Not being able to see the example I didn't quite follow what the * instruction
*	was striving for. 
*	     
*	As further help I will dictate my plan of attack on this program:
*	1: I wrote a section in which a user is instructed to select 5 numbers between 
*		5 and 20. Coded to reprompt should the user select a value outside of that range
*		and that the value should be stored within the array 'chart[][]'.
*	2. I seeded and wrote my random number generator and set it to establish the value of
*		my computer's "guess" ('cRandNumber')
*	3. I developed code to compare the computer "guess" to the users selected value, output the results
*		and store the values also into 'chart[][]'.
*	4. I develped code to recall and display the results of each attempt.
*
*	Academic integrity polocies (and my own ethics) limit what, from what I wrote, I can provide to you. I will send you the .exe from it. Hopefully you will have 
*	no issues in opening it up. You will come to learn pretty quickly that not all compilers are created equally :/ I use Dev-c++ if tha helps to
*	limit are errors for you in passing back and forth between us. Take a look at all I am provided you and get back to me with any questions, I will do my best to 
*	get back to you asap. If you have specific questions, don't be shy. I'm pretty adept at providing examples. 
*	
*	GOOD LUCK!
*
*total logged time 3hrs
*/

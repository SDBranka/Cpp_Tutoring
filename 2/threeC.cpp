#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    double guess1 = 0;
    double guess2 = 0;
    double guess3 = 0;
    double correct1 = 0;
    double correct2 = 0;
    double correct3 = 0;

    for (guess1 = 0; guess1 >= -1; guess1 = guess1 + 1)
    {
        cout << "Enter guess #1: ";
        cin >> correct1;
        if (correct1 == 22)
        {
            cout << "Correct!" << endl;
            for (guess2 = 0; guess2 >= -1; guess2 = guess2 + 1)
            {
                cout << "Enter guess #2: ";
                cin >> correct2;
                if (correct2 == 67)
                {
                    cout << "Correct!" << endl;
                }
                else
                {
                }
            }
        }
        else
        {
        }
    }
    cout << endl;
    return 0;
}
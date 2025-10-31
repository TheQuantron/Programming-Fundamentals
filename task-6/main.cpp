#include "main.h"
#include <iostream>

using namespace std;

int numIn = 0;

string Response[8] = { "Freezing", "Colder", "Cold", "Warm", "Warmer", "Hot", "Hotter", "Boiling" };
int Range[8] = { 50, 15, 10, 10, 5, 5, 2, 1 };
//Arrays holding the printable responses and the appropriate range respectively

int printDiff(int numIn)
{
    int min = 50;
    int max = 101;

    for (int i = 0; i < 8; i++)
    {
        if (i != 0)
        {
            max = min;
            min = max - Range[i];
        }

        if (numIn >= min && numIn < max)
        {
            return i;
        }
    }

    return numIn;
}
//Function capable of identifying and printing the message according to the difference

int main(int argc, char* argv[])
{
    //The project is currently set up with a function to produce random numbers between
    //intervals that you specify. Modify the current solution to provide the functionality
    //requested by the document that outlines the challenges.

    //Here is an example just showing how you use the random(min, max) function:
    std::cout << "Here is a random number between 1 and 100: " << random(1, 100) << std::endl;
    //std::cout << "And here is one between -3 and -5: " << random(-3, -5) << std::endl;

    cout << "Guess a number between 0-100" << endl;
    cin >> numIn;

    while (cin.fail())
    {
        cerr << "ERROR: String value detected!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Insert a number:" << endl;
        cin >> numIn;
        break;
    }
    //Loop checking for string inputs

    if (numIn < 0 || numIn > 100)
    {
        cerr << "ERROR: input out of range:" << endl;
        cin.clear();

        cout << "Insert a number:" << endl;
        cin >> numIn;
    }
    //Loop checking for numbers within range

    while (numIn != numIn)
    {
        printDiff(0);
        cin >> numIn;
        break;
    }
    //Loop calling the difference printing function if the correct number is not chosen. Disfunctional

    if (numIn == numIn)
    {
        cout << "You win!" << endl;
    }
    //Loop checking if the user chosen number is the same as the RNG number

    return 0;
}
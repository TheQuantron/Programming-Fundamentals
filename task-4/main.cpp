#include <iostream>
#include <string>

using namespace std;

void lineRepeat1(int timesNum)
{
    for (int i = 0; i < timesNum; i++)
    {
        cout << "+=-=-=";
    }
    cout << "+" << endl;
}
//Starting repeating function for printing ASCII characters

void lineRepeat2(string someText)
{
    cout << "|", 1;
    for (int i = 0; i < someText.length(); i++)
    {
        char charText = someText[i];
        cout << "  " << charText << "  |";
    }
    cout << "" << endl;
}
//Printing function segregating individual charcaters

int main(int argc, char* argv[])
{
    //Insert your code to complete challenge 4
    string someText;

    while (true)
    {
        cout << "Write in some text:" << endl;
        getline(cin, someText);

        if (someText.empty())
        {
            cerr << "ERROR: No input detected!" << endl;
        }
        else
        {
            break;
        }
    }
    //Loop for catching zero input. Prints custom error message

    lineRepeat1(someText.length());
    lineRepeat2(someText);
    lineRepeat1(someText.length());
    //Prints the functions in appropriate order
        return 0;
}
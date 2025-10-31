#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string textCaseLower(string editText)
{
    for (auto x : editText)
    {
        cout << (char)tolower(x);
    }
    return editText;
}
//Function turning all characters lower case

string textCaseUpper(string editText)
{
    for (auto y : editText)
    {
        cout << (char)toupper(y);
    }
    return editText;
}
//Function making all characters upper case

string textCaseAlter(string editText)
{
    int decimal = editText[0];

    bool alterCase;

    if (decimal >= 65 && decimal <= 90)
    {
        alterCase = false;
    }
    else if (decimal >= 97 && decimal <= 122)
    {
        alterCase = true;
    }

    for (int i = 1; i < editText.length(); i++)
    {
        if (isalpha(editText[i]))
        {
            if (alterCase)
            {
                editText[i] = toupper(editText[i]);
                alterCase = false;
            }
            else
            {
                editText[i] = tolower(editText[i]);
                alterCase = true;
            }
        }
    }
    return editText;
}
//Function alternating every other character between upper case and lower case. Prints twice

string textCaseSentence(string editText)
{
    bool punctuation = false;
    for (int i = 0; i < editText.length(); i++)
    {
        if (i == 0)
        {
            if (isalpha(editText[i]));
            {
                editText[i] = toupper(editText[i]);
            }
        }
        else
        {
            if (editText[i] == '.' || editText[i] == '!' || editText[i] == '?')
            {
                punctuation = true;
            }
            else if (isalpha(editText[i]) && punctuation)
            {
                editText[i] = toupper(editText[i]);
                punctuation = false;
            }

            else if (i < editText.length() - 1)
            {
                if (tolower(editText[i]) == 'i' && (editText[i - 1] == ' ' && editText[i + 1] == ' '))
                {
                    editText[i] = toupper(editText[i]);
                }
                else if (tolower(editText[i]) == 'i' && !isalpha(editText[i - 1]) && editText[i + 1] == ' ')
                {
                    editText[i] = toupper(editText[i]);
                }
                else if (tolower(editText[i]) == 'i' && !isalpha(editText[i - 1]) && !isalpha(editText[i + 1]))
                {
                    editText[i] = toupper(editText[i]);
                }
            }
        }
    }
    return editText;
}
//Function making very first character after a full stop, exclamation point and question mark upper case. Prints twice

int main(int argc, char* argv[])
{
    //Insert your code to complete challenge 5
    string editText;
    bool isValid = true;

    for (char c : editText)
    {
        if (!isdigit(c))
        {
            isValid = false;
            cerr << "ERROR: Digits found!" << endl;
        }
        else if (isValid = true)
        {
            break;
        }
    }
    //Loop detecting no numeric digits are found. Disfunctional

    while (true)
    {
        cout << "Write in some text:" << endl;
        getline(cin, editText);

        if (editText.empty())
        {
            cerr << "ERROR: No input detected!" << endl;
        }
        else
        {
            break;
        }
    }
    //Loop checking for zero inputs

    cout << "Upper case result: " << endl;
    cout << textCaseUpper(editText) << endl;
    cout << "Lower case result: " << endl;
    cout << textCaseLower(editText) << endl;
    cout << "Sentence Casing: " << endl;
    cout << textCaseSentence(editText) << endl;
    cout << "Alternate Casing: " << endl;
    cout << textCaseAlter(editText) << endl;
    //Function printing set in the right order
    return 0;
}
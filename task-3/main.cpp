#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int errorStringInput = 11;

int main(int argc, char* argv[])
{
    //Insert your code to complete challenge 3
    float x;

    cout << "Insert a number:" << endl;
    cin >> x;

    while (cin.fail())
    {
        cerr << "ERROR: String value detected!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Insert a number:" << endl;
        cin >> x;
        return errorStringInput;
    }

    cout << "Negation: " << -x << endl;
    cout << "Absolute value: " << abs(x) << endl;
    cout << "Square: " << x * x << endl;
    cout << "Cube: " << x * x * x << endl;
    cout << "Square root: " << x / x << endl;
    cout << "Floor: " << floor(x) << endl;
    cout << "Ceiling: " << ceil(x) << endl;
    cout << "Rounded: " << round(x) << endl;

    return 0;
}
//You just write floor, ceil, round for the fucntions of said name.

//Always use a '\n' new line when setting ignore. Also don't set break for continuous loop run.


//enum errorCode
//{
//    SUCCESS,
//        FAILURE,
//        INVALID_INPUT
//};
//
//errorCode process(int input)
//{
//    if (input < 0)
//    {
//        return INVALID_INPUT;
//    }
//    return SUCCESS;
//}
//
//errorCode result = process(-1);
//if (result == INVALID_INPUT)
//{
//    cerr << "ERROR: String value detected!" << endl;
//}

//Some more code i found regarding exception catching
// 
//class customError : public runtime_error
//{
//public:
//    explicit customError(const string& message)
//        : runtime_error(message) {}
//};
//
//void riskyFunction()
//{
//    throw customError("ERROR: String value detected!");
//}
//
//int main
//{
//    try
//    {
//        riskyFunction();
//    }
//    catch (const customError& e)
//    {
//        cerr << "ERROR: " << e.what() << endl;
//    }
//}

//This is optional code that I found and could have used. It was an alternate solution that I did not need utilise.
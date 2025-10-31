#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    //Insert your code to complete challenge 2
    string name;
    string userName;
    string clanTag;
    string inGameName;
    int expPoints;
    string input;
    //Variables

    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "What is your username?" << endl;
    getline(cin, userName);
    cout << "What is your Clan Tag?" << endl;
    getline(cin, clanTag);
    cout << "How many Experience Points do you have?" << endl;
    cin >> expPoints;
    //Printing commands

    inGameName = clanTag + userName;
    //Custom quick math variable

    cout << "Your name is " << name << " and your in-game name is " << "[" << clanTag << "]" << userName << endl;
    cout << "You have " << expPoints << " points" << endl;
    //Final printing
    return 0;
}

//Use getline to accept space inputs. This helps prevent line skipping. cin doesn't like spacebar inputs.
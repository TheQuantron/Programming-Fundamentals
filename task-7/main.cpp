#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct chosenItem
{
    string weaponName;
    string weaponType;
    int weaponPrice;
    int weaponDamage;
    string role;
};
//Struct holding all the data types of the weapons and roles

int main(int argc, char* argv[])
{
    //Insert your code to complete challenge 7
    string player1Name;
    string player2Name;
    string player3Name;

    bool runtime = false;

    string response;
    int gold = 100;
    //Variables allowing user input and functionality

    string response = to_string(gold);

    vector<chosenItem> item =
    {
    { "Great Sword", "Sword", 40, 100, "Knight" },
    { "Scimitar", "Sword", 35, 75, "Knight" },
    { "Dagger", "Sword", 10, 35, "Knight" },
    { "Long Bow", "Bow", 20, 55, "Archer" },
    { "Cross Bow", "Bow", 40, 100, "Archer" },
    { "Rusty Spear", "Spear", 10, 35, "Spearman" },
    { "Iron Spear", "Spear", 20, 65, "Spearman" }
    };
    //Vector holding all the weapons, weapon types, prices, damage, roles

    cout << "Enter player #1 name: " << endl;
    getline(cin, player1Name);
    cout << "Enter player #2 name: " << endl;
    getline(cin, player2Name);
    cout << "Enter player #3 name: " << endl;
    getline(cin, player3Name);
    //Name input and output

    cout << "Welcome to the shop " << player1Name << " " << player2Name << " " << "and " << player3Name << endl;
    cout << "Your current balance is " << gold << "coins. Here are the items you can buy:" << endl;
    //Introduction to shop

    while (!runtime)
    {
        for (int i = 0; i < (sizeof(chosenItem) / sizeof(string)); i++)
        {
            cout << item[i].weaponName << "[" << item[i].weaponPrice << " " << item[1].weaponDamage << "]" << endl;
        }

        cout << "Player 1, enter your weapon for purchase: " << endl;
        cin >> response;

        cout << "Are you happy with your selction of weapons? (yes/no):" << endl;
        cin >> response;

        if (response == "yes")
        {
            cout << "Player 1, enter your weapon for purchase: " << endl;
        }
        else if (response == "no")
        {
            cout << player1Name;
            cout << player2Name;
            cout << player3Name;
            cout << "You are situated in a forest. A monster appears..." << endl;
        }
    }
    //Runtime loop allowing purchasing interactions and response bias. Disfunctional
    return 0;
}
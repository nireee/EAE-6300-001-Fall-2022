// MonsterChase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(int MonsterCount, char UserName)
{
    cout << "Welcome to MonsterChase!\n";
    cout << endl;
    cout << "How many monsters to start: ";
    cin >> MonsterCount;\
    cout << endl;

    for (int i = 0; i < MonsterCount; i++) 
    {
        cout << "Enter a name for monster " << i << endl;
    }
    cout << endl;
    cout << "Enter a name for the player: ";
    cin >> UserName;
    cout << endl;




}


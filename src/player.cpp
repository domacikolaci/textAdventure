#include "player.h"
#include <iostream>
#include <string>

using namespace std;

player::player()
{
    string playerName;

    //Line 12 is for testing purposes only
    cout << "you are in player.cpp fam" << endl;


    cout << "What is your name adventurer?" << endl;
    cin >> playerName;
    cout << playerName << ", you see up the road a goblin, you pull out your sword and get ready to fight..." << endl;
    cin >> playerName;
    //load combat
}

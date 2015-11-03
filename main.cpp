#include <iostream>

/*
TODO:
-Make level 1
-Make basic enemy
-Make combat system
-Make player stats
--Make classes
*/
using namespace std;

int main()
{
    string name;
    string answerGameStart;



    cout << "What is your name adventurer?" << endl;
    cin >> name;
    cout << "Hello " << name << " Are you ready to set off on an adventure?" << endl;
    cin >> answerGameStart;

    if (answerGameStart == "yes")
    {
        gameLevel1Class();
    }
    else
    {
        cout << "riiiiip" << endl;
    }
}


class gameLevel1Class()
{
    cout << "ayyyyylmao" << endl;
}

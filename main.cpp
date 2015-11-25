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

class gameLevel1
{
    public:
        void ayyLmao(){
            cout << "ayyyyyyyyyyyy" << endl;
        }
};


int main()
{
    string name;
    string answerGameStart;

    gameLevel1 level1;

    cout << "What is your name adventurer?" << endl;
    cin >> name;
    cout << "Hello " << name << " Are you ready to set off on an adventure?" << endl;
    cin >> answerGameStart;

    if (answerGameStart == "yes")
    {
        level1.ayyLmao();
        cin >> name;
    }
    else
    {
        cout << "riiiiip" << endl;
    }

    return 0;
}



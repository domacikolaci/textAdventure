#include <iostream>
#include "player.h"
/*
TODO:
-Make level 1
-Make basic enemy
-Make combat system
-Make player stats
--Make HP
--Make Damage system
--Make classes
*/
using namespace std;




/*class gameLevel1
{
    string answer;
    string answer2;
    characterSetUp charSetUp;

    public:
        void ayyLmao(){
            cout << "name should be said after this fam" << endl;
            cin >> answer;
            std::cout << characterSetUp.playerName;
            std::cin >> answer2;
        }
};
*/
int main()
{

    string answerGameStart;

    cout << "Hello Are you ready to set off on an adventure?" << endl;
    cin >> answerGameStart;

    player player;

    if (answerGameStart == "yes")
    {
        player;

    }
    else
    {
        cout << "riiiiip" << endl;
    }

}





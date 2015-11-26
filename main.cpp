#include <iostream>
#include "player.h"
#include "enemyGoblin.h"
#include "level1.h"
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





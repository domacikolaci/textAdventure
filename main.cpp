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
    string answer;
    string answer2;

    public:
        void ayyLmao(){
            cout << "ayyyyyyyyyyyy" << endl;
            cin >> answer;
            std::cout << answer;
            std::cin >> answer2;
        }
};

class characterSetUp
{
    gameLevel1 level1;
    string name;
    public:
        void characterStats(){
            cout << "What is your name adventurer?" << endl;
            cin >> name;
            cout << name << endl;
            level1.ayyLmao();
        }
};


int main()
{

    string answerGameStart;


    characterSetUp charSetUp;


    cout << "Hello Are you ready to set off on an adventure?" << endl;
    cin >> answerGameStart;

    if (answerGameStart == "yes")
    {
        charSetUp.characterStats();

    }
    else
    {
        cout << "riiiiip" << endl;
    }


}



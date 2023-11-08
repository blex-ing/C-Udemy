#include "Player.h"
#include <iostream>

using namespace std;

int main()
{
   {
    Player alex;
    alex.set_name("Alex");
    cout << alex.get_name() << endl;

    Player hero("Hero");
    hero.set_health(200);
    cout << hero.get_name() << endl;
    cout << hero.get_health() << endl;


    Player villain("Villain", 100);
    cout << villain.get_name() << endl;
    cout << villain.get_health() << endl;
    cout << villain.get_xp() << endl;
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);

    delete enemy;
    delete level_boss;
    return (0);
}
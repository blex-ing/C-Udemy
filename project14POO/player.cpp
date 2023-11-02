#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    // Attributes
    string name;
    int health;
    int xp;

    // Methods
    void talk(string text_to_say);
    bool is_dead();

};

int main()
{
    Player frank;
    Player hero;

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;
    return (0);
}
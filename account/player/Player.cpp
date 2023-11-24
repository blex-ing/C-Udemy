#include "Player.h"
#include <iostream>

using namespace std;

// Player::Player()
//     : name {"None"}, health {0}, xp {0}
// {
//     // cout << "No args constructor called" << endl;
//     // name = "None";
//     // health = 100;
//     // xp = 3;
// }

// Player::Player(string name_val)
// {
//     cout << "String arg constructor called" << endl;
//     name = name_val;
//     health = 100;
//     xp = 3;
// }

// Player::Player(string name_val, int health_val, int xp_val)
// {
//     cout << "Three args constructor called" << endl;
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
// }

// Player::Player()
//     : Player{"None", 0, 0}
// {
//     // cout << "No args constructor called" << endl;
//     // name = "None";
//     // health = 100;
//     // xp = 3;
// }

// Player::Player(string name_val)
// 	: Player {name_val, 0 ,0}
// {
//     cout << "String arg constructor called" << endl;
//     // name = name_val;
//     // health = 100;
//     // xp = 3;
// }

Player::Player(string name_val, int health_val, int xp_val)
: name {name_val}, health {health_val}, xp {xp_val}
{
    cout << "Three args constructor called" << endl;
    cout << "n" + name << endl;
    cout << "h" + health << endl;
    cout << "x" + xp << endl;
    // name = name_val;
    // health = health_val;
    // xp = xp_val;
}


Player::~Player()
{
    cout << "Destructor called for " << name << endl;
}
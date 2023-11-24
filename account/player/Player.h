#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
    // methods
        void set_name(std::string name_val) {name = name_val;}
        void set_health(int health_val) {health = health_val;}
        std::string get_name() {return name;}
        int get_health() {return health;}
        int get_xp() {return xp;}
    // Overloaded Constructors
        // Player();
        // Player(std::string name_val);
        Player(std::string name_val = "None1", int health_val = 0, int xp_val = 50);
        //Player (std::string name_val , int health_val, int xp_val);
    //destructors
        ~Player();
};

#endif // _PLAYER_H_
#include <iostream>
using namespace std; 

#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"



class Warrior : public Player{
    private:
        string weapon; 
    public:
        Warrior(string name, int health, int damage, string weapon); 
        Warrior();
        void swingWeapon(Player* opponent); 
}; 

#endif
#include <iostream>
using namespace std; 

#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"



class Warrior : protected Player{
    private:
        string weapon; 
    public:
        void swingWeapon(Player* opponent); 
}; 

#endif
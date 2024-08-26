#include<iostream>
using namespace std; 

#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard : public Player{
    private:
        int mana; 
    public:
        Wizard(string name, int health, int damage, int mana); 
        Wizard(); 
        void castSpell(Player* opponent); 
        
}; 

#endif
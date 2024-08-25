#include<iostream>
using namespace std; 

#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard{
    private:
        int mana; 
    public:
        void castSpell(Player* opponent); 
        
}; 

#endif
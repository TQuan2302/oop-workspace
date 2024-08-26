#include<iostream>
using namespace std; 

#include "wizard.h"


Wizard:: Wizard(string name, int health, int damage, int mana): Player(name, health, damage){
    this->mana = mana; 
}

void Wizard :: castSpell(Player* opponent){
    Player:: attack(opponent, mana);
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}
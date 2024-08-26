#include<iostream>
using namespace std; 

#include "warrior.h"


Warrior:: Warrior(string name, int health, int damage, string weapon): Player(name, health, damage){
    this -> weapon = weapon; 
}

Warrior:: Warrior(){
    Warrior("", 0,0,""); 
}


void Warrior :: swingWeapon(Player* opponent){
    Player:: attack(opponent, Player:: damage);
    cout << this ->name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}



string Warrior :: getName(){
    return this->name; 
}
#include <iostream>

using namespace std; 
#include "player.h"

Player:: Player(string name, int health, int damage){
    this -> name = name;
    this -> health = health;  
    this -> damage = damage; 
}

Player:: Player(){
    Player("",0,0); 
}


void Player:: attack(Player* opponent, int damage){
    opponent->health = opponent->health - damage; 
}

void Player::  takeDamage(int damage){
    this->health = this->health - damage; 
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

//Getter:
int Player:: getHealth(){
    return health; 
}


string Player:: getName(){
    return name; 
}


int Player:: getDamage(){
    return damage; 
}
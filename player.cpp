#include <iostream>

using namespace std; 
#include "player.h"

Player (string name, int health, int damage){
    this->name = name; 
}

void Player:: attack(Player* opponent, int damage){

}

void Player::  takeDamage(int damage){

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
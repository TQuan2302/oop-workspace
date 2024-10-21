#include<iostream>
using namespace std; 
#include<cstdlib>
#include "GameEntity.h"
#include "Ship.h"
#include "Explosion.h"
#include"Mine.h"

int main(){
    Ship ship(12,13); 
    Mine mine(13,14); 
    Explosion explosion(12,13); 
    ship.move(13,14); 
    // mine.explode(); 
    // explosion.apply(ship);
    cout << get<0>(ship.getPos()) <<  ", " << get<1>(ship.getPos())  << endl; 
    return 0; 
}
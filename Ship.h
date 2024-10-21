#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>

class Ship: public GameEntity{
    public: 
        void move(int dx, int dy){
            get<0>(position) += dx; 
            get<1>(position) += dy; 
        }
        Ship(int x, int y): GameEntity(x,y,'n'){
            type = ShipType; 
        }
};

#endif
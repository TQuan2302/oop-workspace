#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>

class Ship: public GameEntity{
    public: 
        void move(int dx, int dy){
            position = make_tuple(dx, dy); 
        }
        Ship(int x, int y): GameEntity(x,y,'n'){
            position = make_tuple(x,y); 
            type = ShipType; 
        }
};

#endif
#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include "Explosion.h"

class Ship: public GameEntity{
    public: 
        void move(int dx, int dy){
            this->setPosition(get<0>(this->getPosition()) + dx, get<1>(this->getPosition()) + dy ); 
        }

        Ship(int x, int y): GameEntity(x, y, 'c'){
            this->setPosition(x,y); 
            this->setType(ShipType); 
        }
    
};

#endif
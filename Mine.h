#ifndef MINE_H
#define MINE_H
#include"GameEntity.h"
#include "Explosion.h"

class Mine: public GameEntity{
    Explosion explode(){
        this->setType(NoneType); 
        Explosion explosion(get<0>(this->getPosition()), get<1>(this->getPosition())); 
        return explosion; 

    }

    Mine(int x, int y): GameEntity(x,y,'c'){
        this->setType(MineType); 
    }
};  

#endif
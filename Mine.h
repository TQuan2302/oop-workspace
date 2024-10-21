#ifndef MINE_H
#define MINE_H
#include"GameEntity.h"
#include "Explosion.h"
#include <tuple>

class Mine: public GameEntity{ 
    public: 
        Explosion explode(){
            type = NoneType;
            tuple<int, int> pos =  this->getPos(); 
            Explosion exObject(get<0>(pos), get<1>(pos));  
            return exObject; 
        }
        Mine(int x, int y): GameEntity(x,y,'n'){
            type = MineType; 
        }
};

#endif
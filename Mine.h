#ifndef MINE_H
#define MINE_H
#include"GameEntity.h"
#include "Explosion.h"
#include <tuple>

class Mine: public GameEntity{ 
    public: 
        Explosion explode(){
            type = NoneType;
            Explosion exObject(0,0);  
            return exObject; 
        }
        Mine(int x, int y): GameEntity(x,y,'n'){
            type = MineType; 
        }
};

#endif
#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"
#include<tuple>


class Explosion: public GameEntity, public Effect{
    public:
        Explosion(int x, int y): GameEntity(x,y, 'n'){
            this->type = ExplosionType; 
        }
        void apply(GameEntity& entity){
            entity.setPosition(-1,-1); 
            entity.setType(2); 
        }
};

#endif
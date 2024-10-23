#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion: public GameEntity, public Effect{
    public: 
        Explosion(int x, int y): GameEntity(x,y,'c'){
            this->type = ExplosionType; 
        }

        void apply(GameEntity& object){
            setPosition(-1,-1); 
            object.setType(NoneType); 
        }
};

#endif

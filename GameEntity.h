#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H
#include<iostream>
// #include"Explosion.h"
using namespace std; 
#include<tuple> 

enum GameEntityType{
    ExplosionType, 
    MineType, 
    NoneType,
    ShipType
};

class GameEntity{
    protected: 
        
        tuple<int, int> position; 
        GameEntityType type; 
    public: 
        GameEntity(int x, int y, char type){
            this->position = make_tuple(x,y); 
        }
        tuple<int, int> getPos(){
            return position; 
        }
        GameEntityType getType(){
            return type; 
        }

        void setPosition(int x, int y){
            position = make_tuple(x,y);
        }
        virtual void move(int x, int y){

        }

        void setType(int number){
            if(number > 3){
                return; 
            }
            switch(number){
                case 0:
                    type = ExplosionType; 
                case 1: 
                    type = MineType; 
                case 2: 
                    type = NoneType; 
                case 3: 
                    type = ShipType; 
            }

        }
        // virtual Explosion explode(){
        //     type = NoneType;
        //     Explosion exObject(0,0);  
        //     return exObject; 
        // }
};
#endif
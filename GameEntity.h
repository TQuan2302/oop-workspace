#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H
#include<iostream>
using namespace std; 
#include<tuple> 

enum GameEntityType{
    ExplosionType = 0, 
    MineType = 1, 
    NoneType = 2,
    ShipType = 3
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

};
#endif
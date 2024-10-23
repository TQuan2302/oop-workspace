#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H
#include<tuple> 
using namespace std; 

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
        GameEntity(int x, int y, char type){// and effect. 
            get<0>(this->position) = x; 
            get<1>(this->position) = y;
        }
        tuple<int, int> getPos(){
            return position; 
        }
        GameEntityType getType(){
            return type; 
        }
        void setType(GameEntityType type){
            this->type = type; 
        }
        tuple<int, int> getPosition(){
            return position; 
        }
        void setPosition(int x, int y){
            get<0>(this->position) = x; 
            get<1>(this->position) = y; 
        }
};


#endif
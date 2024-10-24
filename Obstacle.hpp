#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle:public Interactable{
    public:
        Obstacle(int x, int y, int width, int height): Interactable(x,y,width,height){

        }
        bool interact(Robot* player){
            if(Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates()) == 0){
                player->takeHit(); 
                if(Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates()) == 0 && player->getHealth() == 0){
                    return true; 
                }
            }
            return false; 
            
        }
        InteractableType getType(){
            return OBSTACLE; 
        }
};

#endif
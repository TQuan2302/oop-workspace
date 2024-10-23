#ifndef GOAL_H
#define GOAL_H
#include "Interactable.hpp"
#include "Helper.hpp"

class Goal: public Interactable{
    public: 
        Goal(int width, int height):Interactable(0,0,width,height){

        }
        bool interact(Robot* player){
            if(Helper:: euclideanDistance(this->getCoordinates(), player->getCoordinates()) == 0){
                return true; 
            }
            return false; 
        }

        InteractableType getType(){
            return GOAL; 
        }
};

#endif
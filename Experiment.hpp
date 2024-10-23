#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include "Interactable.hpp"
#include "Scientist.hpp"
#include "Helper.hpp"

class Experiment: public Interactable{
    public:
        Experiment(int x, int y, int width, int height):Interactable(x, y, width, height){

        }

        bool interact(Scientist& player){
            if(Helper:: manhattanDistance(this->getCoordinate(), player.getCoordinate()) == 0){
                player.runExperiment(); 
                if(player.getExperimentNumber() > 3){
                    return true;
                }
                //O day co the 1 cai return false nua 
            }
            return false; 
        }

        InteractableType getType(){
            return EXPERIMENT; 
        }
};

#endif
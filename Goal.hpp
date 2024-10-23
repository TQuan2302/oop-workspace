#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"

class Goal: public Interactable{
    public:
        Goal(int width, int height): Interactable(width - 1, height - 1, width, height) {
        }

        bool interact(Scientist* player) override {
        if (Helper::manhattanDistance(getCoordinate(), player->getCoordinate()) == 0 &&
            player->getActiveGridItemNumber() >= 1) {
            return true;  
        }
        return false;  
    }

        InteractableType getType() const override{
            return GOAL; 
        }
};

#endif
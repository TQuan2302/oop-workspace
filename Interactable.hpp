#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP
#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType{
    GOAL, 
    OBSTACLE
}; 

class Interactable: public GridItem{
    private: 
        static int activeInteractableCount; 
    public:
        Interactable(int x, int y, int width, int height): GridItem(x,y,width,height){
            activeInteractableCount++; 
        }
        Interactable():GridItem(){
            activeInteractableCount++; 
        }

        int getActiveInteractableCount(){
            return activeInteractableCount;
        }

        virtual ~Interactable(){
            activeInteractableCount--; 
        }

        virtual bool interact(Robot* player) = 0; 
        virtual InteractableType getType() = 0; 


};
int Interactable:: activeInteractableCount = 0; 

#endif
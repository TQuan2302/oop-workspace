#ifndef INTERACTABLE_H
#define INTERACTABLE_H
#include"GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType { GOAL, EXPERIMENT };

class Interactable: public GridItem{
    private: 
        static int ActiveinteractableNumber;
    public:
        Interactable(): GridItem(0,0,0,0){
            ActiveinteractableNumber++; 
        }

        Interactable(int x, int y, int width, int height): GridItem(x, y, width, height){
            ActiveinteractableNumber++; 
        }

        virtual ~Interactable(){
            ActiveinteractableNumber--; 
        }

        virtual bool interact(Scientist* player) = 0;
        
        virtual InteractableType getType() const = 0;

        static int getActiveinteractableNumber();
};

int Interactable:: ActiveinteractableNumber = 0; 

int Interactable:: getActiveinteractableNumber(){
    return ActiveinteractableNumber; 
}
#endif
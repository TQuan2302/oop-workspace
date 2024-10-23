#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "GridItem.hpp"

class Robot: public GridItem{
    private: 
        int health; 
    public:
        Robot(int gridWidth, int gridHeight){
            this->setCoordinate(0,0); 
            health = 3; 

        }
        int getHealth(){
            return health; 

        } // gets the current health of the robot

        void setHealth(){//Decrease by 1 
            this->health--; 
        }
        
    
        void takeHit(){
            int extimateHealth = this->getHealth() - 1;
            if(extimateHealth < 0){
                return; 
            }
            setHealth(); 
        } // decrements the health of the robot. The robot cannot have negative health

        bool move(int xOffset, int yOffset){

            if(xOffset == 0 || yOffset == 0){
                int eX = xOffset + this->getCoordinates().first; 
                int eY = yOffset + this->getCoordinates().second; 
                if( (eX <= this->getGridWidth() && eX >=0 ) && (eY <= this->getGridHeight() && eY >= 0)  ){
                    this->setCoordinate(this->getCoordinates().first + xOffset, this->getCoordinates().second + yOffset ); 
                    return true; 
                }
            }
            return false; 
        } // moves the robot in the x or y directions by the provided number of steps. 
        //The robot should only be able to move either the x direction or y direction in one call of this function but not both at the same time. 
        //So (0,-1) and (3,0) are legal moves for example but (1,3) is not. 
        //If the robot makes a legal move within the bounds of the grid then return true and otherwise false.




};

#endif
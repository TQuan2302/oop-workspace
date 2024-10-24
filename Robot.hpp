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
        //     if (abs(xOffset) <= 2 && abs(yOffset) <= 2) {
        //     int newX = getCoordinates().first + xOffset;
        //     int newY = getCoordinates().second + yOffset;
        //     if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
        //         setCoordinates(newX, newY);
        //         return true;
        //     }
        // }
        // return false;
            if(abs(xOffset) <= 2 && abs(yOffset) <= 2){
                int eX = xOffset + this->getCoordinates().first; 
                int eY = yOffset + this->getCoordinates().second; 
                cout << "x: " << eX << endl; 
                cout << "y: " << eY << endl; 
                cout << "w: " << this->getGridWidth() << endl; 
                cout << "h: " << this->getGridHeight() << endl; 
                // cout << "Rs1: " << eX << this->getGridWidth() && eX >=0  ;
                // cout << "Rs2: " << eY << this->getGridHeight() && eY >= 0  ;
                if( eX < this->getGridWidth() && eX >=0  && eY < this->getGridHeight() && eY >= 0  ){
                    cout << "Da chay" << endl; 
                    this->setCoordinate(eX, eY ); 
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
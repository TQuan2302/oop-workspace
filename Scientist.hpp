#ifndef SCIENTIST_H
#define SCIENCETIST_H
#include "GridItem.hpp"
#include<cmath>
#include<cstdlib>
using namespace std; 

class Scientist: public GridItem{
    private: 
        int experimentNumber; //Can be static
    
    public:
        Scientist(int gridWidth, int gridHeight): GridItem(0, 0, gridWidth, gridHeight){
        }

        int getExperimentNumber(){
            return experimentNumber; 
        }

        void runExperiment(){
            experimentNumber++; 
        }

        bool move(int xOffset, int yOffset){
            if(abs(xOffset) <= 2 && abs(yOffset) <= 2){
                int newXCoor = this->getCoordinate().first + xOffset; 
                int newYCoor = this->getCoordinate().second + yOffset; 

                if(newXCoor >= 0 && newXCoor < getGridWidth() && newYCoor >=0 && newYCoor < getGridHeight() ){
                    setCoordinate(newXCoor, newYCoor); 
                    return true; 
                }
            }
            return false; 
        }
};

#endif
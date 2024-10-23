#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP
#include<utility>
using namespace std; 

class GridItem{
    protected: 
        int x; 
        int y; 
        int width; 
        int height; 
        static int activeGridItemNumber; 
    public: 
        GridItem(int x, int y, int width, int height){
            this->x = x; 
            this->y  =y; 
            this->width = width; 
            this->height  = height; 
            activeGridItemNumber++; 
        }
        GridItem():GridItem(0,0,0,0){
            activeGridItemNumber++; 
        }
        virtual ~GridItem(){ //Virtual destructor
            activeGridItemNumber--; 
        }
        void setCoordinate(int x, int y){
            this->x = x; 
            this->y = y; 
        }
        pair<int, int>getCoordinate(){
            pair<int, int> coordinate = make_pair(x,y);
            return coordinate;  
        }

        void setCoordinates(int x, int y){
            this->x = x;
            this->y = y;
        }
        int getGridWidth(){
            return width; 
        }
        int getGridHeight(){
            return height; 
        }

        static int getActiveGridItemNumber(); 
};

int GridItem:: activeGridItemNumber = 0; 

int GridItem:: getActiveGridItemNumber(){
    return activeGridItemNumber;
}

#endif
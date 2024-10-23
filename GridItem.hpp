#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP
#include<iostream>
#include<utility>
using namespace std; 

class GridItem{
        public: 
        GridItem(int x, int y, int width, int height){
            this->coordinate.first = x; 
            this->coordinate.second = y; 
            this->gridWidth = width; 
            this->gridHeight = height; 
            ActiveGridItemCount++; 

        }
        GridItem(){
            this->coordinate.first = 0; 
            this->coordinate.second = 0; 
            this->gridWidth = 0; 
            this->gridHeight = 0; 
            ActiveGridItemCount++; 
        }
        void setCoordinates(int x, int y){
            this->coordinate.first = x; 
            this->coordinate.second = y; 
        }
        std::pair<int,int> getCoordinates(){
            return coordinate;
        }
        void setCoordinate(int x, int y){
            this->coordinate.first = x; 
            this->coordinate.second = y; 
        }
        int getGridWidth(){
            return gridWidth; 
        }
        int getGridHeight(){
            return gridHeight; 
        }
        int getActiveGridItemCount(){
            return ActiveGridItemCount; 
        }
        virtual ~GridItem(){
            ActiveGridItemCount--; 
        }
    private: 
        static int ActiveGridItemCount; 
        int gridWidth; 
        int gridHeight; 
        pair<int, int> coordinate; 
};

int GridItem:: ActiveGridItemCount = 0;

#endif
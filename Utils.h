#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <stdlib.h>
#include<cmath>

using namespace std; 

class Utils{
    static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight); 

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2); 
};

#endif

tuple<int, int> Utils:: generateRandomPos(int gridWidth, int gridHeight){
    //Min is 0, max is gridWidth, gridHeight
    int randomWidth = rand() % gridWidth; 
    int randomHeight = rand() % gridHeight; 
        
    tuple<int, int> randomPos(randomWidth, randomHeight); 
    return randomPos; 
}

double Utils:: calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        double result = sqrt( pow( get<0>(pos2) - get<0>(pos1) ,2) + pow(get<1>(pos2) - get<1>(pos1), 2)); 
        return result; 
    }
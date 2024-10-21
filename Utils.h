#ifndef UTILS_H
#define UTILS_H
#include<iostream>
#include <cstdlib>
#include<tuple> 
#include<ctime> 
#include<cmath>


using namespace std;

class Utils{
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight); 
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

std::tuple<int, int> Utils:: generateRandomPos(int gridWidth, int gridHeight){
    int min = 1; 
    // srand(static_cast<unsigned int>(time(0))); 

    int rangeWidth = gridWidth - min + 1; 
    int rangeHeight = gridHeight - min + 1; 

    int randomWidth = min + (rand() % rangeWidth);
    int randomHeight = min + (rand() % rangeHeight);

    tuple<int, int> randomGrid = make_tuple(randomWidth, randomHeight); 

    return randomGrid; 
}

double Utils:: calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    double distance = sqrt(pow(get<0>(pos2) - get<0>(pos1),2) + pow(get<1>(pos2) - get<1>(pos1),2)); 
    return distance; 
}

#endif

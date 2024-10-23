#ifndef HELPER_HPP
#define HELPER_HPP
#include<utility>
#include<cmath>

class Helper{
    public: 
        static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2); 
};

double Helper:: euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
    double result = sqrt(pow(item2.first - item1.first,2)  + pow(item2.second - item1.second,2)); 
    return result; 
}

#endif 
#ifndef HELPER_HPP
#define HELPER_HPP
#include<utility>
#include<cmath>

class Helper{
    public: 
        double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
            double result = sqrt(pow(item1.first - item2.first,2)  + pow(item1.first - item2.first,2)); 
            return result; 
        }
};

#endif 
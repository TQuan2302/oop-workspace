#ifndef HELPER_H
#define HELPER_H
#include<utility>
#include<cmath>
#include<cstdlib>
using namespace std; 

class Helper{
    public:
        static int manhattanDistance( pair<int, int> item1, pair<int, int> item2  );
};

int Helper:: manhattanDistance( pair<int, int> item1, pair<int, int> item2  ){
    int result = abs(item2.first - item1.first) + abs(item2.second - item1.second); 
    return result; 
}

#endif
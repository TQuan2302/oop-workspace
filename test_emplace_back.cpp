#include<iostream> 
#include<vector> 
using namespace std; 

template<typename TYPE> 

struct Point{
    public: 
        Point(TYPE x, TYPE y){
            this->x = x; 
            this->y = y; 
        }

        TYPE x;
        TYPE y; 
}; 

template<typename Z> 
Z printSth(Z value ){
    return value; 
}

typedef Point<int> PointInt; 

int main(){//emplace_back does need a constructor even with struct, push back does not. 
    //PointInt num1 = {5,3}; aBunchOfPoint.emplace_back(num1) or aBunchOfPoint.emplace_back(5,3) ; -> Valid 
    //aBunchOfPoint.emplace_back({5,3}}); -> Invalid

    vector<PointInt> aBunchOfPoint;
    PointInt num1 = {5,3}; 
    aBunchOfPoint.emplace_back(5,3);
    cout << aBunchOfPoint[0].y << endl; 
    return 0; 
}
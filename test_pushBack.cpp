#include<iostream> 
#include<vector> 
using namespace std; 

template<typename TYPE> 

class Point{
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
    // aBunchOfPoint.push_back({5,3}); -> valid
    // aBunchOfPoint.push_back(5,3); -> Invalid
    // PointInt p1(1,2); ; aBunchOfPoint.push_back(p1); -> Invalid
    vector<PointInt> aBunchOfPoint;
    aBunchOfPoint.resize(3); 
    PointInt p1(1,2); 
    aBunchOfPoint.push_back({5,3});
    cout << aBunchOfPoint[0].y << endl; 
    return 0; 
}
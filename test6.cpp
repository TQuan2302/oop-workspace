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


typedef Point<int> PointInt; 

int main(){
    vector<PointInt> aBunchOfPoint;
    // aBunchOfPoint.resize(3); //Make 3 space and fill in it with PointInt( Call the default constructor)

    //resize(3) -> Make 3 space and fill in it with PointInt( Call the default constructor)
    //reserve(3) -> reserve 3 space and does not call the default constructor
    aBunchOfPoint.reserve(3);

    aBunchOfPoint.push_back({0,5});
    aBunchOfPoint.push_back({4,5});
    cout << aBunchOfPoint.size() << endl; 
    return 0; 
}
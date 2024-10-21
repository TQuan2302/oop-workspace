#include<iostream>
using namespace std; 

struct Point{
    int x; 
    int y;
}; 

class PointHandler{
    public: 
        PointHandler(){
            point1  = new Point{10,12}; 
        }
        ~PointHandler(){
            cout << "Deleting point1"; 
            delete point1; 
        }
    protected: 
        Point* point1;  
}; 

class MultiPointHandler: public PointHandler{ 
    public: 
        MultiPointHandler(){
            point2  = new Point{10,12}; 
        }
        ~MultiPointHandler(){
            cout << "Deleting point2"; 
            delete point2; 
        }
    private: 
        Point* point2;  
}; 

int main(){
    MultiPointHandler ph1; //Call constructor of PointHandler then call the constructor of MultiPointHandler
    //At the end of constructor of MultiPointHandler, call the destructor of MultiPointHandler then call the destructor of PointHandler. 
}


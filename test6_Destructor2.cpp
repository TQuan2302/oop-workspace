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
        virtual ~PointHandler(){
            cout << "Deleting point1" << endl; 
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
            cout << "Deleting point2" << endl; 
            delete point2; 
        }
    private: 
        Point* point2;  
}; 

int main(){
    PointHandler* ph1 = new MultiPointHandler(); //Only call the destructor of PointHandler as the object is cast from MultiPointHandler into PointHandler
    delete ph1; 
}


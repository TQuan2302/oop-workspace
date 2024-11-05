#include<iostream>
using namespace std; 

struct Point{
    int x; 
    int y;
}; 

class PointHandler{
    public: 
        PointHandler(){
            p  = new Point{10,20}; 
        }

        //Customized copy constructor: 
        PointHandler(const PointHandler& other){
            p = new Point{other.p->x, other.p->y}; 
            cout << "Da chay" << endl; 
        }
        void setPoint(int x, int y){
            p->x = x; 
            p->y = y; 
        }
        Point getPoint(){return *p; }

    private: 
        Point* p;  
}; 


int main(){
    PointHandler ph1; 
    ph1.setPoint(1920, 1080); 

    PointHandler ph2(ph1);  
    ph1.setPoint(5,5);
    cout << ph1.getPoint().x << " " << ph1.getPoint().y << endl; 
    cout << ph2.getPoint().x << " " << ph2.getPoint().y << endl; 
    // cout << ph1.getNumberAddress() << endl; 
    // cout << ph2.getNumberAddress() << endl; 
}




































































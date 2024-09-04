#include<iostream>
using namespace std; 

struct Point{
    double x; 
    double y; 
};

class Shape{
    protected:
        Point center; 
    public:
        Shape(){
            center.x = 0; 
            center.y = 0; 
        }
    virtual double get_area() = 0; //Make a function pure so that create a abstract class. 

}; 

class Square: public Shape{
    private: 
        double side; 
    public:
        Square(){
            side = 5; 
            cout << "Obj created" << endl; //If no constructor in base class then have to initialize base class data member here
            Shape:: center.x = 12;
            Shape:: center.y = 13; 
        }
    double get_area(){
        return 123; 
    }

    double get_X_Y(){
        cout << Shape:: center.x << endl; 
        cout << Shape:: center.y << endl; 
        return 2;  

    }    

};

class Circle: public Shape {
    private: 
        double radius; 
    public:
        Circle(): Shape(),radius(radius){
            
            radius = 5; 
            cout << "Obj created" << endl; 
        }
    double get_area(){
        return 123; 
    }    

};


int main(){
    Shape* circle = new Circle(); 
    Shape* square = new Square();
    return 0; 
}
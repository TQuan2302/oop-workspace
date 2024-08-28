//Demo on Copy Contructor
#include<iostream>
#include<string>


using namespace std; 

class Point{
    //The class have default constructor, copy constructor and assign operator "=" automatically if we does not write one 
    private:
        int* _x;
        int* _y;
       
    public:
        Point(){
            _x = new int; 
            _y = new int; 
            *_x = 0; 
            *_y = 0;
        }

        //Copy Constructor
        Point(const Point &pnt){
            _x = new int; 
            _y = new int; 
            *_x = *(pnt._x); 
            *_y = *(pnt._y); 
        }

        //Set the "=" operator do the following job: (use the "=" as deep copy operator )
        //If we do not define this then the "=" just do shallow copy
        void operator=(const Point &pnt){ 
            *_x = *(pnt._x); 
            *_y = *(pnt._y); 
        }
        void print(){
            cout << *_x << "," << *_y << endl;
        }

        void setPoint(int x, int y){
            *_x = x; 
            *_y = y; 
        }
};

void foo(Point pnt){
    // The default Copy Constructor create a copy of the object pnt locally in this function 
    pnt.setPoint(123, 124); 
    pnt.print(); 
}

int main(){
    Point p1; 
    p1.setPoint(10,10);
    

    //The cocpy constructor is called when: 
    // Point p2 = p1; 
    // p2.print(); 

    //Although change the value of x, y of p1 object in foo() but the actual p1 does not change
    // foo(p1); 
    // p1.print(); 

    //Shallow copy: Copy all the value of attribute of p1 to p2
    Point p2;
    p2 = p1;
    // p2.setPoint(485, 95); 

    //Deep copy: Copy all the value of attribute of p1 to p2 and allocate new space for dynamic allocated variables if there are any
    //Doing this by create a optional Copy Constructor: 
    p1.print(); 
    p2.print(); 

    return 0;
}
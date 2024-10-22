#include<iostream>
using namespace std; 

class Shape
{
public:
    virtual float getArea() { return 0; };
};

class Circle : public Shape
{
public:
    float getArea() { return radius * radius * PI; }
private:
    const float PI = 3.14;
    float radius = 5.0;
};

void printAreaOfShape(Shape* shape)
{
    cout << shape->getArea() << endl;
}

int main()
{
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Circle();
    printAreaOfShape(shapes[0]);
}
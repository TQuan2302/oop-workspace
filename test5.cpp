#include <iostream>

using namespace std;

class ImageReader
{
private: 
    double number; 
public:
    ImageReader()
    {
        cout << "constructor" << endl;
    }

    void PrintImagePath()
    {
        cout << "none" << endl;
    }

    double getNumber(){
        return number;
    }
};

int main()
{
    ImageReader* img1 = new ImageReader; //Dynamic allocated memory in the heap and call default contructor, garbage data assign 
    ImageReader* img2 = new ImageReader(); //Dynamic allocated memory in the heap and call default contructor, 0  assign 

    cout << img1->getNumber() << endl; 
    cout << img2->getNumber() << endl; 

    int a; 
    cout << a << endl; 
    
    return 0;
}
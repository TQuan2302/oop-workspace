#include <iostream>
using namespace std; 

class ImageReader
{
private: 
    int number; 
public:
    ImageReader() {
        number = 0; 
    }; // Constructor

    void PrintImagePath()
    {
        cout << "none" << endl;
    }

    int getNumber(){
        return number; 

    }
};

int main()
{
    ImageReader img1 = ImageReader(); //Copy initialization: Create an object of ImageReader and initialize img1 using ImageReader object
    //But in mordern c++ compiler, it is optimized by creating the img1 object directly. 

    ImageReader img2; //Default constructor initialization 

    // ImageReader img3(); //Wrong way to Create an object since this is trated as an decleration of function img3(): 
    cout << img1.getNumber() << endl; 
    return 0;
}
#include <iostream>
using namespace std; 

class ImageReader
{
private: 
    int size; 
    int* array; 
public:
    ImageReader(int size): size(size) {
        array = new int[size]; //If have the {} then there is default value, no then there is garbage value 
    }; // Constructor

    void PrintImagePath()
    {
        cout << "none" << endl;
    }

    int getSize(){
        return size; 
    }

    void print(){
        for(int i = 0; i<size; i++){
            cout << array[i] << endl; 
        }
    }
};

int main()
{
    // ImageReader r1(3); 
    // r1.print();

    // ImageReader r2(3); 
    // r1.print();  

    int* array3 = new int[3];
    float* array5 = new float[3]; 
    int* array4 = new int[3]{};

    for(int i = 0; i< 3; i++){
        cout << array3[i] << endl; 
        cout << array4[i] << endl; 
    }
}
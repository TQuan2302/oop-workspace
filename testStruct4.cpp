#include<iostream>
using namespace std; 

struct IntArray
{
    int* a = nullptr; 
    int size = 0; 
    
};



int main(){
    IntArray i; 
    i.a = new int[5]{1,2,3,4,5}; 
    i.size = 5; 
    IntArray j;
    j = i; 
    cout << "Before delete i: " << i.a << endl; 
    cout << "Before delete j: " << j.a << endl; 

    delete i.a;
    int* tempt = new int;
    cout << "j After delete i: " << j.a << endl; 

    i.a = new int[4]{}; 
    cout << "i After realocation of i: " << i.a << endl; 
    cout << "j After realocation of i: " << j.a << endl; 

    i.size = 4; 
    i.a[0] = 3; 
    cout << j.a[0] << endl; //Undefine behaviour as the j point to the old address of i but the address of i has been changed due to the dynamic allocation of 
    //tempt variable so lead to undefine behabiour. 
    
    delete i.a; 
    // delete j.a; 
    return 0; 
}
#include<iostream>
using namespace std; 

struct IntArray
{
    int a[5]  = {};
    int size = 5;  
};



int main(){
    IntArray i; 
    i.a[0] = 5; 
    i.a[1] = 10; 
    cout << i.a << endl; 

    return 0; 
}
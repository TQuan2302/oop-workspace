#include<iostream>
using namespace std; 

extern void modifyArray(double* array, int size, double value); 


int main(){
    int size1 = 4;
    double array1[size1] = {10,11,9,8}; 
    modifyArray(array1, size1, 1.1);

    for(int i = 0 ;i < size1; i++){
        cout << array1[i] << endl; 
    }

    return 0;
}
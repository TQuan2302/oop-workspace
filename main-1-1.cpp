#include<iostream>
using namespace std; 

extern double arrayMin(double* array, int size); 



int main(){
    int size1 = 5;
    double array1[size1] = {10,11,9,8,-2}; 
    cout << arrayMin(array1, size1) << endl; 
    return 0; 
}
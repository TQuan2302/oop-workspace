#include<iostream>
using namespace std; 

extern double* duplicateArray(double* array, int size);

int main(){
    int size1 = 6;
    double array1[size1] = {10,11,9,8,0,-2}; 
    double* array2 = duplicateArray(array1, size1);

    for(int i = 0 ;i < size1; i++){
        cout << array1[i] << endl; 
    }

    return 0;
}
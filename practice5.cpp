#include<iostream>
using namespace std; 

double* dynamicArray(int n){
    double* array = new double[n];
    for(int i = 0; i<n; i++){
        array[i] = i; 
    }
    return array;

}

int main(){
    double* number = dynamicArray(10); 
    for(int i = 0; i < 10; i++){
        cout << number[i] << endl; 
    }
}














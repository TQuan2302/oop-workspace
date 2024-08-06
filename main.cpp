#include<iostream>
using namespace std; 

double arrayMax(double* array, int n){
    double max = array[0]; 

    for(int i = 0; i<n ; i++){
        if(max < array[i]){
            max = array[i]; 
        }
    }
    return max; 
}

double* dynamicArray(int n, double M){
    double* array = new double[n];
    for(int i = 0; i<n; i++){
        array[i] = M; 
    }
    return array;

}

void printArray(double* array, int n){
    for(int i = 0; i< n; i++){
        cout << array[i] << endl;
    }
}


int main(){
    double* number = dynamicArray(10, 12.3); 
    double max = arrayMax(number,10); 
    printArray(number, 10);
    cout << max << endl; 

    delete[] number; 
}
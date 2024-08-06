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

#include<iostream>

double weighted_average(int array[], int n){
    double result = 0; 
    if(n<1){
        return result; 
    }

    int appear[n]; 
    //Fill in value for appear
    for(int i = 0; i<n; i++){
        appear[i] = 0; 
    }
    //Count how many times each element appears in the array
    for(int i = 0; i < n; i++){
        int count = 0; 
        int target = array[i];
        for(int j = 0; j < n; j++){
            if(target == array[j]){
                count++; 
            }
        }
        appear[i] = count;

        
    }

    for(int i = 0; i < n; i++){
        result = result + (array[i] * appear[i])*1.0/n; 
    }    
    return result; 
}
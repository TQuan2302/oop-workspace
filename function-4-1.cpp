#include<iostream>

using namespace std; 

int findSum(int* array, int size){
    int sum = 0; 
    for(int i = 0; i< size; i++){
        sum  = sum + array[i];         
    }
    return sum; 
}



int secondSmallestSum(int *numbers,int length){
    int smallest = -10000; 
    int subLength = 0; 
    
    
    for(int i = 0; i<length; i++){
        int* subArray = new int(subLength); 
        for(int j = 0; j < i; j++){
            subArray[j] = numbers[j]; 
            cout << "SubArray: " << subArray[i] << "Array: " << numbers[i] << endl; 
            subLength++; 
        }
        int tempt_sum = findSum(subArray, subLength);
        if(smallest < tempt_sum){
            smallest  = tempt_sum; 
        }
        delete[] subArray; 
        cout << endl; 
       
    }
    return smallest;
}


#include<iostream>

using namespace std; 

int findSum(int* array, int size){
    int sum = 0; 
    for(int i = 0; i< size; i++){
        sum  = sum + array[i];         
    }
    return sum; 
}



int findMinOfSubArray(int *numbers,int length){
    int min = 100000; 
    int subLength = 1; 
    
    
    for(int i = 0; i < length; i++){
        //Create the size for subArray
        int* subArray = new int[subLength]; 

        //Add every element of the original array into sub array: {1},{1,2},{1,2,3}, {1,2,3,4}
        for(int j = 0; j < i+1; j++){
            subArray[j] = numbers[j]; 
        }

        int tempt_sum = findSum(subArray, subLength);

        //Find Min among subArrays:
        for(int i = 0; i<subLength; i++){
            if(min > tempt_sum){
                min = tempt_sum; 
            }
        }
        
        subLength++; 
        delete[] subArray; 
       
    }
    return min; 
}


int secondSmallestSum(int *numbers,int length){
    int minArray[100] = {}; 
    int counter = 0; 
    int sizeOfSubArray = length; 
    int min = 100000; 
    int secondMin = 100000; 

    //Find the smallest number of sum among subarrays:
    for(int i = 0; i<length; i++){
        int tempt_min = findMinOfSubArray(&(numbers[i]), sizeOfSubArray);
        minArray[i] = tempt_min; 
        counter++;
        sizeOfSubArray--;

        if(min > tempt_min){
            min  = tempt_min;
        }
    }

    //Find the second smallest number: 
    for(int i = 0; i<counter; i++){
        if(minArray[i] == min){
            continue;
        }
        else if(secondMin > minArray[i]){
            secondMin = minArray[i]; 
        }
    }
    return secondMin; 

}


int* readNumbers(){
    int* array = new int[10]; 

    for(int i = 0; i<10; i++){
        cin >> array[i] ; 
    }

    return array; 
}

void printNumbers(int *numbers, int length){
    for(int i = 0; i<length; i++){
        cout << i << " " << numbers[i] << endl; 
    }
}






















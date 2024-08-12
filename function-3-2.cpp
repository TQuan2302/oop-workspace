#include<iostream>
using namespace std; 

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

bool equalsArray(int *numbers1,int *numbers2,int length){
    bool is_equal = 1;
    for(int i = 0; i<length; i++){
        if(numbers1[i] != numbers2[i]){
            is_equal = 0; 
        }
    }
    return is_equal; 
}


int *reverseArray(int *numbers1,int length){
    int* result = new int[length]; 
    int reverse_index  = length - 1;

    for(int i = 0; i< length; i++){
        result[reverse_index] = numbers1[i]; 
        reverse_index--; 
    }

    return result; 

}
#include<iostream>

bool is_fanarray(int array[], int n){
    if(n<1){
        return false; 
    }

    int left = 0;  
    int right = n-1; 

    int before = array[0]; 
    bool result = true; 

    while(left <= right){
        if(!(array[left] == array[right]) || !(before <= array[left])){
            result = false; 
            break; 
        }
        before = array[left]; 
        left++;
        right--; 
    }

    return result; 
}

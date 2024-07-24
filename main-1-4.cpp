#include<iostream>

int sum_two_arrays(int array[], int secondarray[], int n); 


int main(){
    int array[] = {1,2,3,2};
    int array2[] = {1,2,3,2}; 
    std:: cout << sum_two_arrays(array, array2, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 
}
#include<iostream>

double array_mean(int array[], int n); 


int main(){
    int array[] = {1,2,3};
    std:: cout << array_mean(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 
}
#include<iostream>

double weighted_average(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5,6}; 
    std:: cout << "Result:" << weighted_average(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 

}
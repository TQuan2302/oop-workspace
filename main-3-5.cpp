#include<iostream>

double sum_even(double array[], int n); 

int main(){
    double array[] = {1,2,3,4,5,6}; 
    std:: cout << "Result:" << sum_even(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 

}
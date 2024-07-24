#include<iostream>

int num_count(int array[], int n, int number);


int main(){
    int array[] = {1,2,3,2};
    int num = 2; 
    std:: cout << num_count(array, sizeof(array)/sizeof(int),num) << std:: endl; 
    return 0; 
}
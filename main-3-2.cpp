#include<iostream>

int median_array(int array[], int n);

int main(){
    int array[] = {1,2}; 
    std:: cout << "Result:" << median_array(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 

}
#include<iostream>

bool is_descending(int array[], int n);


int main(){
    int array[] = {1,2,3,4,5,6}; 
    std:: cout << "Result:" << is_descending(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 

}
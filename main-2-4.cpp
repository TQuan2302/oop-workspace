#include<iostream>

bool is_ascending(int array[], int n); 


int main(){
    int array[] = {1,2,3,4,5,6}; 
    std:: cout << "Result:" << is_ascending(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 

}
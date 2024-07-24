#include<iostream>
 int max_element(int array[], int n); 


int main(){
    int array[] = {1,2,3,4,56,7,8,9,10};
    std:: cout << max_element(array, sizeof(array)/sizeof(int)) << std:: endl; 
    return 0; 
}
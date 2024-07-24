#include<iostream>

void two_five_nine(int array[], int n); 

int main(){
    int array[] = {1,2,3,4,5,6}; 
    two_five_nine(array, sizeof(array)/sizeof(int));

    return 0; 

}
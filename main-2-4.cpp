#include<iostream>
using namespace std; 


extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length); 
extern int sum_min_max(int integers[], int length); 


int main(){
    int array[] = {};
    cout << sum_min_max(array, sizeof(array)/sizeof(int));; 
    return 0; 
}
#include<iostream>

extern void print_scaled(int array[3][3],int scale); 

int main(){
    int array[3][3] = {{1,2,3}, {6,7,8}, {1,2,3}}; 
    print_scaled(array, 10); 

}
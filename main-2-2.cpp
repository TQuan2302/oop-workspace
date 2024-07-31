#include<iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits) ;


int main(){
    int number[] = {1,1}; 
    cout<< binary_to_int(number, sizeof(number)/sizeof(int)) << endl; 

}
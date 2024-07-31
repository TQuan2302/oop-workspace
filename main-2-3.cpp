#include<iostream>
using namespace std; 


extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length); 
extern int sum_array_element(int integers[], int length) ;



int main(){
    int number[] = {1,2,3,2,1,4}; 
    cout << sum_if_palindrome(number, sizeof(number)/sizeof(int)) << endl; 

}
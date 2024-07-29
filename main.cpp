#include<iostream>
#include<string>
using namespace std; 

extern string convert_to_binary(int number); 


int main(){
    int number = 300; 
    std:: cout << convert_to_binary(number);
}
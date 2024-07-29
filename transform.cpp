#include<iostream>
#include<string>
#include<cmath> 
#include <algorithm>

using namespace std; 

string convert_to_binary(int number){
    string s = ""; 
    int counter = 0; 
    int remainder = 0; 

    while(number!=0){
        remainder = number % 2; 
        number = floor(number / 2); 
        s.append(to_string(remainder)); 
    }

    reverse(s.begin(), s.end()); 


    return s; 
}
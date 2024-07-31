#include<iostream>
#include<string>
#include<cmath> 
#include <algorithm>

using namespace std; 

void print_binary_str(std:: string decimal_number){
    int number = stoi(decimal_number); 
    string s = ""; 
    int remainder = 0; 

    while(number!=0){
        remainder = number % 2; 
        number = floor(number / 2); 
        s.append(to_string(remainder)); 
    }

    reverse(s.begin(), s.end()); 


    cout << s << endl; 
}


#include<iostream>

void print_pass_fail(char grade){
    switch(grade){
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            std:: cout << "Pass" << std::endl; 
            break; 
        case 'E': 
            std:: cout << "Fail" << std::endl; 
            break;
        default: 
            std:: cout << "Nothing" << std::endl; 
            break; 


    }
}
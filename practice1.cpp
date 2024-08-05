#include<iostream>

using namespace std; 





int main(){
    double num1 = 10;
    char c = 'C'; 

    double* num1_p = &num1; 
    char* c_p = &c; 


    cout << "Pointer to num1: " <<  *num1_p << endl;
    cout << "Pointer to a character: " << c_p << endl;

}
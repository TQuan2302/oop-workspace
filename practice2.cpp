#include<iostream>
using namespace std; 

void changeValue(double *number){
    *number = 42; 
}


int main(){
    double number; 
    cout<< "Please enter a number: " << endl; 
    cin >> number; 

    changeValue(&number); 
    cout << "ChangeValue: " << number; 

}
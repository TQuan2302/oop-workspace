#include<iostream>
#include<string> 

using namespace std;

string shift_left(string binary_number){
    string result = ""; 
    for(int i = 1; i < binary_number.size(); i++){
        result = result + binary_number[i];
    }
    result = result + string("0"); 
    return result;
}


int main(){
    string number = "101101"; 
    cout << shift_left(number); 
    return 0; 
}
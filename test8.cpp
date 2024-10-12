#include<iostream>
using namespace std; 



int main(){
    int* value = new int[4]{1}; 
    for(int i = 0; i<4; i++){
        cout << value[i] << endl; 
    }
    return 0; 
}
#include<iostream>
using namespace std; 

void change(int* a){
    *a = 12; 
}

int main(){
    int** array = new int*[3](); 

    for(int i = 0; i<3; i++){
        array[i] = new int[10](); 
    }

    int number = 0; 

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            array[i][j] = number; 
            number++; 
            cout << array[i][j] << endl; 
        }
        cout << endl; 
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            delete array[i][j]; 
        }
        delete array[i]; 
    }
    
}
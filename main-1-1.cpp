#include<iostream>
#include "Person.h"
using namespace std; 

extern Person* createPersonArray(int n);  

int main(){
    Person* array = createPersonArray(5);

    for(int i = 0; i<5; i++){
        cout << array[i].name << endl; 
        cout << array[i].age << endl; 
        cout << endl; 
    }
}
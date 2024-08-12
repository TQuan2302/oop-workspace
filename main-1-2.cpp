#include<iostream>
#include "Person.h"

using namespace std; 

extern PersonList createPersonList(int n);


int main(){
    PersonList array = createPersonList(5);
    cout << array.numPeople << endl; 

    for(int i = 0; i<array.numPeople; i++){
        cout << array.people[i].name << endl;
        cout << array.people[i].age << endl;
    } 
}
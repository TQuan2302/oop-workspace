#include<iostream>
#include "Person.h"

using namespace std; 

extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n); 



int main(){
    PersonList array = createPersonList(5);
    PersonList array2  = deepCopyPersonList(array);
    cout << array2.numPeople << endl; 

    for(int i = 0; i<array2.numPeople; i++){
        cout << array2.people[i].name << endl;
        cout << array2.people[i].age << endl;
    } 
}
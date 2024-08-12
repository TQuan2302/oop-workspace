#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList list; 
    list.numPeople = pl.numPeople; 
    list.people = pl.people; 
    return list; 
}


PersonList createPersonList(int n){
    PersonList list; 
    list.numPeople = n; 
    list.people =  new Person[n]; 
    for(int i = 0; i<n; i++){
        list.people[i].name = "John Doe"; 
        list.people[i].age = 0; 
    }
    return list; 
}
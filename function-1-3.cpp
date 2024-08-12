#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList result; 
    result.numPeople = pl.numPeople;
    result.people = new Person[pl.numPeople]; 

    for(int i = 0; i<pl.numPeople; i++){
        result.people[i] = pl.people[i]; 
    }
    return result;
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
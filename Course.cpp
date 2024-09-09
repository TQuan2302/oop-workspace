#include "Course.h"
void Course:: addPerson(Person* p){
    persons[curr_index] = p; 
    curr_index++; 
}

Course:: Course(){
    Course("", 0); 
}

Course:: Course(string name, int id){
    this->name = name; 
    this->id = id; 
    persons = new Person*[100];//Maximum 100 student
    curr_index = 0; 
}

int Course:: get_courseID(){
    return id; 
}
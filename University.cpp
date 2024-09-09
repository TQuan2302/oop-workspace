#include<iostream>
#include "University.h"

using namespace std; 

void University:: addCourse(int id, std::string name){
    
}


University:: University(string name, string location){
    this->name = name; 
    this->location = location; 
}

University:: University(){
    University("", ""); 
    gradeBook = Gradebook();
}
#include<iostream>
#include "Student.h"

Student:: Student(string name,int id):Person(name), id(id){;}

Student:: Student(): Student("",0){;}

string Student:: get_name(){
    return Person::get_name();
}

int Student:: get_ID(){
    return id; 
}
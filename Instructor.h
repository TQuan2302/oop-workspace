#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<iostream>
#include "Person.h"

using namespace std; 

class Instructor: public Person{
    public:
        Instructor(string name); 
};

#endif
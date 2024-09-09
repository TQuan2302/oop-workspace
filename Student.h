#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include "Person.h"
#include "Grade.h"
using namespace std; 

class Student: public Person{
    private:
        int id;
        Grade g; 
    public:
        Student(); 
        Student(string name, int id ); 
        string get_name(); 
        int get_ID(); 

};

#endif
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<iostream>
#include "Student.h"
#include"Course.h"

using namespace std; 


class Gradebook{
    private: 
        Grade** grades; 
        int index; 
    public:
        void addGrade(int student_id, int course_id, string assignment, int value);
        Gradebook(); 
};


#endif
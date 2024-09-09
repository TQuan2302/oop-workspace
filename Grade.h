#ifndef GRADE_H
#define GRADE_H
#include<iostream>

using namespace std; 
class Grade {

    private: 
        int student_id;
        int course_id; 
        string assignment; 
        int value;

    public:
        Grade(); 
        Grade(int student_id, int course_id,string assignment, int value);
        int get_student_id(); 
        int get_course_id(); 

};

#endif
 


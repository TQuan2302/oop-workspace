#ifndef COURSE_H
#define COURSE_H
#include "Person.h"

class Course {
    private: 
        Person** persons;
        string name; 
        int id; 
        int curr_index; 
    public:
        Course(); 
        Course(string name, int id); 
        void addPerson(Person* p); 
        int get_courseID(); 
};

#endif
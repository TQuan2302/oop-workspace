#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include"Gradebook.h"
#include<iostream>
using namespace std; 

class University {
      private: 
        string name;
        string location;
        Gradebook gradeBook; 
      public:
        void addCourse(int id, std::string name);
        University(string name, string location); 
        University(); 
};
 
#endif

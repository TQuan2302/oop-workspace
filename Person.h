#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std; 

class Person{
    private:
        string name;
    public:
        Person(string name); 
        string get_name(); 
};

#endif
//Demo for Pointer to, and Array of Object

#include<iostream>
#include<string>

#include "student.h"


using namespace std; 

Student* studentFactory(){
    Student* k = new Student();
    return k; 
}

int main(){
    // Student s1("Feras", 1457, 0.0);
    // Student* p; 

    // p = &s1;

    // cout << p->get_name() << endl;  //Use -> to work with the pointer to the object
    // cout << s1.get_name() << endl; //Use . to work with the object itself

    // Student* p = new Student("Ferras", 1457, 0.0);

    // p->set_grade(5.5); 
    // cout << p->get_name() << endl; 
    // cout << p->get_grade() << endl;


    // Student* p = studentFactory(); 
    // cout << p->get_name() << endl; 
    // cout << p->get_grade() << endl;

    //For this one to work, need a default constructor in student.h
    Student* a = new Student[5]; 


    return 0;
}
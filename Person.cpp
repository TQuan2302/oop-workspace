#include<iostream>
using namespace std; 
#include "Person.h"

Person:: Person(string name):name(name){;}

string Person:: get_name(){
    return name; 
}
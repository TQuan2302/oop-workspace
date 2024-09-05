#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include<iostream>
using namespace std; 

class Helicopter: public AirVehicle{
    public: 
        Helicopter(int w, string n);// creates a Helicopter with weight w and name n
        void fly(int headwind, int minutes);
        string get_name(); 
        void set_name(string name); 

    private:
        string name;// name of the Helicopter
};


#endif
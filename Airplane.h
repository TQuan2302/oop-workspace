#ifndef AIRPLANE_H
#define AIRPLANE_H

#include<iostream>
#include "AirVehicle.h"

using namespace std; 

class Airplane: public AirVehicle{
    private:
        int numPassengers;
    public:
        Airplane();
        Airplane(int w, int p);

        void reducePassengers(int x);
        void fly(int headwind, int minutes);

        int get_numPassengers();
        void set_numPassengers(int p); 
};
#endif
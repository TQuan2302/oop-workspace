#include<iostream>
using namespace std; 

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
    protected:
        time_t timeOfEntry; 
        int ID; 
    public:
        Vehicle(int ID);
        Vehicle(); 

        int getID(); 

        char*  get_time_of_entry();

        virtual int getParkingDuration();

        time_t  getTimeOfEntry();
};

#endif
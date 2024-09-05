#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirVehicle.h"
#include"Helicopter.h"
#include "Airplane.h"

class AirFleet{ 
    public:  
        AirFleet();                           
        /* creates an air fleet containing pointers to 5 AirVehicle objects as an array; 
        */
        AirVehicle **get_fleet();      // returns the array of pointers to the five AirVehicle objects
    private:
        AirVehicle **fleet; 
}; 

#endif
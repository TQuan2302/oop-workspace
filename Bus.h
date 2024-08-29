#include<iostream>
#include "Vehicle.h"

#ifndef BUS_H
#define BUS_H

class Bus: public Vehicle{
    public:
        Bus(int ID);
        int getParkingDuration();
};

#endif
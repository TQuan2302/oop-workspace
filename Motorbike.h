#include<iostream>
#include "Vehicle.h"

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike: public Vehicle{
    
    public:
        Motorbike(int ID);
        int getParkingDuration();
};

#endif
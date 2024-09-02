#include<iostream>
#include "Appliance.h"

#ifndef FRIDGE_H
#define FRIDGE_H

class Fridge: public Appliance{
    public:
        Fridge(); 
        Fridge(int powerRating, double volume); 
        void setVolume(double volume); 
        double getVolume();
        double getPowerConsumption(); 
    private:
        double volume; 

};


#endif
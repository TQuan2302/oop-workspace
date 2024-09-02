#include<iostream>

#include "Appliance.h"

#ifndef HOUSE_H
#define HOUSE_H

class House{
    public:
        House(); 
        House(int numAppliances); 
        bool addAppliance(Appliance* appliance);//return true if there is space, otherwise return false
        double getTotalPowerConsumption(); 
        virtual ~House(); 
    private:
        int curr_index; 
        Appliance** appliances; 
        int numAppliances;

}; 

#endif
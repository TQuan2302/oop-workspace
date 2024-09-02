#include<iostream>

#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    public:
        Appliance(); 
        Appliance(int powerRating); 
        void turnOn(); 
        void turnOff(); 
        virtual double getPowerConsumption(); 
        int get_PowerRating(); 
        bool get_IsOn(); 

    protected:
        int powerRating; 
        bool isOn; 


};

#endif
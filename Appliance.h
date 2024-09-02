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
        int get_powerRating(); 
        bool get_isOn(); 
        void set_powerRating(int powerRating); 
        void set_isOn(bool isOn); 

    protected:
        int powerRating; 
        bool isOn; 


};

#endif
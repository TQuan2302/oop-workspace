#include<iostream>
#include "Appliance.h"


Appliance:: Appliance(){
    this->powerRating = 0; 
    this->isOn = false; 
}

Appliance :: Appliance(int powerRating){
    this->powerRating = powerRating; 
    this->isOn = false; 
}

void Appliance :: turnOn(){
    this->isOn = true; 
}

void Appliance::  turnOff(){
    this->isOn = false; 
} 

double Appliance:: getPowerConsumption(){
    return 0; 
}

int Appliance :: get_PowerRating(){
    return powerRating;
}

bool Appliance ::  get_IsOn(){
    return isOn; 
}
#include<iostream>
#include "House.h"


House :: House(){
    curr_index = 0; 
    this->numAppliances = 0; 
    this->appliances = new Appliance*[numAppliances];

}

House:: House(int numAppliances){
    curr_index = 0; 
    this->numAppliances = numAppliances; 
    this->appliances = new Appliance*[numAppliances];
}

bool House::  addAppliance(Appliance* appliance){
    if(curr_index < numAppliances){
        appliances[curr_index] = appliance; 
        curr_index++; 
        return true; 
    }
    return false; 
}

double House::  getTotalPowerConsumption(){
    double total = 0; 

    for(int i = 0; i<curr_index; i++){
        total = total + appliances[i]->getPowerConsumption(); 
    }
    return total; 
}

House::  ~House(){
    for(int i = 0; i<curr_index; i++){
        delete appliances[i]; 
    }
    delete[] appliances;
}

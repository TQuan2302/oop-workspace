#include<iostream>
#include<ctime>
using namespace std; 

#include "Motorbike.h"

Motorbike:: Motorbike(int ID){
    this ->ID = ID; 
    timeOfEntry = time(0); 
}

int Motorbike::   getParkingDuration(){
    time_t now = time(0); 
    int result = (now - this->getTimeOfEntry())*(1-0.15);
    return result; 
}
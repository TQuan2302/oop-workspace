#include<iostream>
#include<ctime>
using namespace std; 

#include "Bus.h"

Bus:: Bus(int ID){
    this->ID = ID; 
    timeOfEntry = time(0); 
}

int Bus:: getParkingDuration(){
    time_t now = time(0); 
    int result = (now - this->getTimeOfEntry())*(1-0.25);
    return result; 
}
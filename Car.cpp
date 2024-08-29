#include<iostream>
#include<ctime>
using namespace std; 

#include "Car.h"

Car :: Car(int ID){
    this ->ID = ID; 
    timeOfEntry = time(0); 
}

int Car:: getParkingDuration(){
    time_t now = time(0); 
    int result = (now - this->getTimeOfEntry())*(1-0.1);
    return result; 
}
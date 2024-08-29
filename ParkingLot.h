#include<iostream>
using namespace std; 

#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"

#ifndef PARKINGLOT_H
#define PARKINGLOT_H

class ParkingLot{
    private:
        Vehicle** vehicles;
        int max_capacity; 
        int curr_capacity;  
        int* deleted_pos_array; 
        int deleted_array_index; 
    public:
        ParkingLot(int max_capacity); 
        int getCount(); 
        void parkVehicle(Vehicle* object); //Put the vehicle into the park if there is any space, if not then print:"The lot is full"
        void unparkVehicle(int ID); //Remove the vehicle with "ID", if ID is not found then print: "Vehicle not in the lot"
        ~ParkingLot(); //The dafault destructor
        Vehicle* getVehicle(int ID);
        bool checkID(int ID); //If ID is in the deleted list then ignore in unparkVehicle. 
        int countOverStayingVehicles(int maxParkingDuration); // Return the number of vehicle stayed in the parking lot for more than the maxParkingDuration 

};

#endif
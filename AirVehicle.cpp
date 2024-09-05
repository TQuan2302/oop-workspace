#include<iostream>
#include "AirVehicle.h"

AirVehicle:: AirVehicle(): AirVehicle(0){

}

AirVehicle:: AirVehicle(int w){
    this->weight = w; 
    this->fuel = 100; 
    this->numberOfFlights = 0; 
}  // creates an AirVehicle with weight w

void AirVehicle:: refuel(){
    this->fuel = 100; 
}      // Resets fuel back to 100%

void AirVehicle:: fly(int headwind, int minutes){
    this->numberOfFlights++; 
} // headwind in km/h and minutes (time flying)

int AirVehicle:: get_weight(){
    return weight;
}

float AirVehicle:: get_fuel(){
    return fuel; 
}

int AirVehicle:: get_numberOfFlights(){
    return numberOfFlights;
}

void AirVehicle:: set_weight(int weight){
    this->weight = weight; 
}
void AirVehicle:: set_fuel(float fuel){
    this->fuel = fuel; 
}
void AirVehicle:: set_numberOfFlights(int numFlight){
    numberOfFlights = numFlight; 
}
#include<iostream>
#include "AirCraft.h"

AirCraft:: AirCraft(){
    weight = 0; 
    fuel = 0; 
    numberOfFlights = 0;
}

AirCraft:: AirCraft(int w){
    this->weight = w; 
    this->fuel = 100; 
    this->numberOfFlights = 0; 
}

void AirCraft:: refuel(){
    this->fuel = 100; 

}

void AirCraft:: fly(int headwind, int minutes){
    this->numberOfFlights++; 
}

int AirCraft:: get_weight(){
    return this->get_weight(); 
}

float AirCraft:: get_fuel(){
    return this->fuel; 
}

int AirCraft:: get_numberOfFlights(){
    return this->get_numberOfFlights(); 
}

void AirCraft:: set_weight(int w){
    weight = w; 
}
void AirCraft:: set_fuel(float f){
    fuel = f; 
}
void AirCraft:: set_numberOfFlights(int n){
    numberOfFlights = n; 
}
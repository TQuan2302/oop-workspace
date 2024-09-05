#include<iostream>
using namespace std; 

#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"

int main(){
    Airplane(20, 10);
    Helicopter(10000, "BlackHawk"); 
    AirVehicle(5000);
    Helicopter(100, "WhiteHawk");
    Airplane(15, 20);

    // AirVehicle** fleet = AirFleet f1(); 

    return 0; 
}
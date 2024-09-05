#include<iostream>
using namespace std; 
#include "AirFleet.h"
#include "AirVehicle.h"

AirFleet:: AirFleet(){
    fleet = new AirVehicle*[5];
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);
}                           
/* creates an air fleet containing pointers to 5 AirVehicle objects as an array; 
*/
AirVehicle** AirFleet:: get_fleet(){
    return fleet;
}      // returns the array of pointers to the five AirVehicle objects
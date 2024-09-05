#include<iostream>
using namespace std; 
#include "AirFleet.h"

AirFleet:: AirFleet(){
    fleet = new AirVehicle*[5]; 
}                           
/* creates an air fleet containing pointers to 5 AirVehicle objects as an array; 
*/
AirVehicle** AirFleet:: get_fleet(){
    return fleet;
}      // returns the array of pointers to the five AirVehicle objects
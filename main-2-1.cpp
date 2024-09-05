#include<iostream>
using namespace std; 

#include "AirVehicle.h"
#include "Helicopter.h"

int main(){
    Helicopter h1(50, "num1");
    cout << h1.get_numberOfFlights() << endl; 
    cout << h1.get_fuel() << endl; 
    cout << h1.get_weight() << endl; 
    return 0; 
}
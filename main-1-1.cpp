#include<iostream>
using namespace std; 

#include "AirVehicle.h"

int main(){
    AirVehicle v1(50);
    cout << v1.get_numberOfFlights() << endl; 
    cout << v1.get_fuel() << endl; 
    cout << v1.get_weight() << endl; 
    return 0; 
}
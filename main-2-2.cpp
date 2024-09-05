#include<iostream>
using namespace std; 

#include "AirVehicle.h"
#include "Airplane.h"

int main(){
    Airplane h1(50, 20);
    cout << h1.get_numberOfFlights() << endl; 
    cout << h1.get_fuel() << endl; 
    cout << h1.get_weight() << endl; 

    return 0; 
}
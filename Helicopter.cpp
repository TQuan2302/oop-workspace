#include "Helicopter.h"


Helicopter:: Helicopter(int w, string n): AirVehicle(w), name(n){
}   // creates a Helicopter with weight w and name n


                    // name of the Helicopter
void Helicopter:: fly(int headwind, int minutes){
    float fuelNeeded = 0;
    int extraWeight = weight - 5670;

    if (headwind < 40) {
        fuelNeeded += 0.18 * minutes;
    }

    else {
        fuelNeeded += 0.4 * minutes;
    }

    if (extraWeight > 0) {
        fuelNeeded += 0.01 * extraWeight * minutes;
    }

    if (fuel - fuelNeeded < 20) {
        return;
    }

    fuel -= fuelNeeded;
    numberOfFlights++;  
}

string Helicopter:: get_name(){
    return name; 
}

void Helicopter:: set_name(string name){
    this->name = name; 
}
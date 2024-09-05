#include "Helicopter.h"


Helicopter:: Helicopter(int w, string n): AirVehicle(w), name(n){
}   // creates a Helicopter with weight w and name n


                    // name of the Helicopter
void Helicopter:: fly(int headwind, int minutes){
    float consumption = 0;
    int extraWeight = weight - 5670;

    if (headwind < 40) {
        consumption += 0.18 * minutes;
    }

    else {
        consumption += 0.4 * minutes;
    }

    if (extraWeight > 0) {
        consumption += 0.01 * extraWeight * minutes;
    }

    if (fuel - consumption < 20) {
        return;
    }

    fuel -= consumption;
    numberOfFlights++;  
}

string Helicopter:: get_name(){
    return name; 
}

void Helicopter:: set_name(string name){
    this->name = name; 
}
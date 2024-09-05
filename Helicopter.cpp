#include "Helicopter.h"


Helicopter:: Helicopter(int w, string n): AirVehicle(w), name(n){
}   // creates a Helicopter with weight w and name n


                    // name of the Helicopter
void Helicopter:: fly(int headwind, int minutes){
    float  consumption = 0; 
    if(headwind >= 40){
        consumption = minutes*(0.4);
    }
    else{
        consumption = minutes*(0.18); 
    }
    int extra_weight = weight - 5670; 
    if(extra_weight > 0){
        consumption = consumption + extra_weight*((0.01)*fuel); 
    }

    if(fuel - consumption < 20){//Less than 20% then do not fly
        return; 
    }

    fuel = fuel - consumption; 
    numberOfFlights++; 
}

string Helicopter:: get_name(){
    return name; 
}

void Helicopter:: set_name(string name){
    this->name = name; 
}
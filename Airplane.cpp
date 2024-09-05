#include "Airplane.h"

Airplane:: Airplane(): Airplane(0, 0){

}
Airplane:: Airplane(int w, int p): AirVehicle(w), numPassengers(p){
}

void Airplane:: reducePassengers(int x){
    if(numPassengers - x <= 0){
        numPassengers = 0; 
    }
    else{
        numPassengers = numPassengers-x; 
    }
}

void Airplane:: fly(int headwind, int minutes){
    float  consumption = 0; 
    if(headwind >= 60){
        consumption = minutes*(0.5);
    }
    else{
        consumption = minutes*(0.25); 
    }

    
    consumption = consumption + numPassengers*(((0.001)*fuel)*minutes); 
    

    if(fuel - consumption < 20){//Less than 20% then do not fly
        return; 
    }
    else{
        fuel = fuel - consumption; 
        numberOfFlights++; 
    }
}

int Airplane:: get_numPassengers(){
    return numPassengers;
}
void Airplane:: set_numPassengers(int p){
    this->numPassengers = p; 
}
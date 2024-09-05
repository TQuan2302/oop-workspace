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
    float consumption = 0.001 * numPassengers * minutes;

    if (headwind < 60){
        consumption += 0.25* minutes;
    }

    else {
        consumption += 0.5 * minutes;
    }

    if ((fuel - consumption) < 20){
        return;
    }

    fuel = fuel - consumption;
    numberOfFlights++;
}

int Airplane:: get_numPassengers(){
    return numPassengers;
}
void Airplane:: set_numPassengers(int p){
    this->numPassengers = p; 
}
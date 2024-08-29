#include<iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main(){
    ParkingLot p1(3); 
    int number = 0; 

    string type = ""; 

    Vehicle tempt; 

    for(int i = 0; i<3; i++){
        cout << "Please enter the type: "; 
        cin >> type; 
        if(type.compare("bus")){
            Bus* b = new Bus(i); 
            p1.parkVehicle(b);  
            cout << p1.getVehicle(i)->getID() << endl;
        }
        else if(type.compare("motorbike")){
            Motorbike* m = new Motorbike(i); 
            p1.parkVehicle(m);  
            cout << p1.getVehicle(i)->getID() << endl;
        }

        else if(type.compare("car")){
            Car* c = new Car(i); 
            p1.parkVehicle(c);  
            cout << p1.getVehicle(i)->getID() << endl;

        }

    }
    Motorbike* m2 = new Motorbike(123);
    p1.parkVehicle(m2); 

    cout << "please enter the ID of the vehicle you want to unpark: ";
    int ID = 0; 
    cin >> ID;  
    p1.unparkVehicle(ID);

}
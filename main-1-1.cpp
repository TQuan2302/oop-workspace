#include<iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

int main(){
    int number = 0; 
    cout << "Pleaese enter the number and type of vehicle you want to park: " << endl; 
    cin >> number; 

    string type = ""; 

    Vehicle list[number]; 
    Vehicle tempt; 

    for(int i = 0; i<number; i++){
        cout << "Please enter the type: "; 
        cin >> type; 
        if(type.compare("bus")){
            Bus b(i);
            list[i] = b; 
            cout << list[i].get_time_of_entry() << endl;
        }
        else if(type.compare("motorbike")){
            Motorbike m(i); 
            list[i] = m; 
            cout << list[i].get_time_of_entry() << endl;
        }

        else if(type.compare("car")){
            Car c(i); 
            list[i] = c; 
            cout << list[i].get_time_of_entry() << endl;
        }

    }
}
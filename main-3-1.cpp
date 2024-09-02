#include<iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std; 

int main(){
    Fridge* f1 = new Fridge(120, 12.2); 
    TV* t1 = new TV(130, 25.5);
    Fridge* f2 = new Fridge(140, 10.6); 
    TV* t2 = new TV(140, 26.5);

    House house(2);

    cout << house.addAppliance(f1) << endl;
    cout << house.addAppliance(t1) << endl;
    cout << house.addAppliance(f2) << endl;
    cout << house.addAppliance(t2) << endl;

    return 0; 
}
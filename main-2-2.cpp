#include<iostream>

#include "Appliance.h"
#include "Fridge.h"
using namespace std; 

int main(){
    Fridge f1(120, 12.2); 
    cout << f1.getVolume() << endl;
    f1.setVolume(13.3); 
    cout << f1.getVolume() << endl;
    cout << f1.get_PowerRating() << endl;

    cout << f1.getPowerConsumption() << endl; 
    return 0; 
}
#include<iostream>
#include "Appliance.h"

using namespace std; 

int main(){
    Appliance a1(120); 

    cout << a1.get_isOn() << endl; 
    cout << a1.getPowerConsumption() << endl; 
    cout << a1.get_powerRating() << endl; 

    return 0; 
}
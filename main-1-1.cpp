#include<iostream>
#include "Appliance.h"

using namespace std; 

int main(){
    Appliance a1(120); 

    cout << a1.getIsOn() << endl; 
    cout << a1.getPowerConsumption() << endl; 
    cout << a1.getPowerRating() << endl; 

    return 0; 
}
#include<iostream>

#include "Appliance.h"
#include "TV.h"
using namespace std; 

int main(){
    TV f1(120, 12.2); 
    cout << f1.getScreenSize() << endl;
    f1.setScreenSize(13.3); 
    cout << f1.getScreenSize() << endl;
    cout << f1.get_powerRating() << endl;

    cout << f1.getPowerConsumption() << endl; 
    return 0; 
}
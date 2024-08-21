#include<iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std; 


int main(){
    ApartmentBuilding a(10); 


    Unit u1(100,3,50.5); 
    Unit u2(200,4,5.4); 
    Unit u3(200,4,5.4); 
    Unit u4(200,4,5.4); 
    Unit u5(200,4,5.4); 
    Unit u6(200,4,5.4); 
    Unit u7(200,4,5.4); 
    Unit u8(200,4,5.4); 
    Unit u9(200,4,5.4); 
    Unit u10(200,4,5.4); 
    Unit u11(200,4,5.4); 
    Unit u12(200,4,5.4); 

    a.add_Unit(u1); 
    a.add_Unit(u2); 
    a.add_Unit(u3); 
    a.add_Unit(u4); 
    a.add_Unit(u5); 
    a.add_Unit(u6); 
    a.add_Unit(u7); 
    a.add_Unit(u8); 
    a.add_Unit(u9);
    cout << a.add_Unit(u10) << endl; 
    cout << a.add_Unit(u11)<< endl;
    cout << a.add_Unit(u12)<< endl;   

    return 0; 

}
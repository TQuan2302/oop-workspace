#include<iostream>
#include "Truck.h"

using namespace std; 

int main(){
    Truck t1(11, "Toyota"); 
    Truck t2; 

    cout << t1.get_brand_code() << endl; 
    cout << t1.get_brand_name() << endl; 
    cout << t2.get_brand_code() << endl; 
    cout << t2.get_brand_name() << endl; 
    
    return 0;
}
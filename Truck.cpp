#include<iostream>
#include "Truck.h"


Truck:: Truck(){
    brand_code = 0; 
    brand_name = ""; 
} // default constructor - makes new truck with brand code number 0 and
         // and empty string "" for brand name

Truck:: Truck(int b_code, std::string b_name){
    brand_code = b_code; 
    brand_name = b_name; 
} // constructor taking string representing brand name
                                       // and integer representing code for that brand

std::string Truck:: get_brand_name(){
    return brand_name; 
} // returns the brand name of the truck

int Truck:: get_brand_code(){
    return brand_code; 
} // returns the brand code number of truck

Truck:: ~Truck(){
} // destructor

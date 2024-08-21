#include<iostream>
#include "Unit.h"

using namespace std; 

#ifndef APARTMENT_BUILDING_H
#define APARTMENT_BUILDING_H

class ApartmentBuilding{
    private:
        int max_capacity; 
        Unit* unit_collection;
        int curr_capacity;

    public:
        //Default contructor:
        ApartmentBuilding();

        //Optional Contructor:
        ApartmentBuilding(int max_capacity); 

        //Getter:
        int get_Capacity(); 

        int get_Current_Number_Of_Units(); 

        Unit* get_Contents();


        //Return true and add unit if there is enough space, otherwise return false
        bool add_Unit(Unit unit);

        //Destructor:
        ~ApartmentBuilding();






};

#endif


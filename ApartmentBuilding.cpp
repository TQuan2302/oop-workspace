#include<iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

    //Default contructor:
    ApartmentBuilding:: ApartmentBuilding(){
        curr_capacity = 0; 
        max_capacity = 10; 
        unit_collection = new Unit [max_capacity]; 

    }

    //Optional Contructor:
    ApartmentBuilding:: ApartmentBuilding(int max_capacity){
        curr_capacity = 0; 
        this -> max_capacity = max_capacity; 
        unit_collection = new Unit [max_capacity]; 
    }

    //Getter:
    int ApartmentBuilding:: ApartmentBuilding::  get_Capacity(){
        return max_capacity; 
    }

    int ApartmentBuilding:: ApartmentBuilding::  get_Current_Number_Of_Units(){
        return curr_capacity;
    } 

    Unit* ApartmentBuilding:: get_Contents(){
        return unit_collection;
    }


    //Return true and add unit if there is enough space, otherwise return false
    bool ApartmentBuilding:: add_Unit(Unit unit){
        if(curr_capacity < max_capacity){
            unit_collection[curr_capacity] = unit; 
            curr_capacity++;
            return true; 
        }
        return false; 
    }

    //Destructor:
    ApartmentBuilding:: ~ApartmentBuilding(){
        delete[] unit_collection; 
    }

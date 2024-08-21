#include<iostream>
#include "Unit.h"


    //Default Constructor:
    Unit::Unit(){}

    //The Constructor that take the value, number of beds and Unit size:
    Unit:: Unit(int value, int num_beds, double unit_size) : unit_val(value), num_beds(num_beds), unit_size(unit_size){
        if(value < 0){
            unit_val = 0; 
        }

        if(num_beds < 0){
            num_beds = 0; 
        }

        if(unit_size < 0){
            unit_size = 0; 
        }
        
    }

    int Unit::  get_val(){
        return unit_val; 
    }

    int Unit::  get_num_beds(){
        return num_beds; 
    }

    double Unit:: get_Area(){
        return unit_size; 
    }

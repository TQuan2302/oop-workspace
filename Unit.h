#include<iostream>
using namespace std; 

#ifndef UNIT_H
#define UNIT_H

class Unit{
    private:
        int unit_val; 
        int num_beds;
        double unit_size; 
    
    public:
        //Default Constructor:
        Unit();

        //The Constructor that take the value, number of beds and Unit size:
        Unit(int value, int num_beds, double unit_size);

        int get_val();

        int get_num_beds();

        double get_Area();
};
#endif
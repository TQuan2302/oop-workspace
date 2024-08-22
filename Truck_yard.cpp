#include<iostream>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std; 


Truck_yard :: Truck_yard(){
    Truck_yard(0);
}  // default constructor for yard with zero capacity

Truck_yard:: Truck_yard(int capacity){
    max_capacity = capacity; 
    curr_capacity = 0; 
    stock = new Truck[max_capacity]; 
} // constructor for yard that can hold "capacity" trucks

int Truck_yard:: get_total_stock_count(){
    return curr_capacity; 
} // returns count of the current number of trucks in yard

int Truck_yard::  get_stock_count(int code){
    int count = 0; 

    for(int i = 0; i<curr_capacity; i++){
        if(stock[i].get_brand_code() == code){
            count++; 
        }
    }
    return count; 
} // returns count of the number of trucks with brand code equal to "code"

Truck* Truck_yard :: get_current_stock_list(){
    return stock; 
} // returns an array containing all the trucks in the yard

bool Truck_yard:: addStock(Truck c){
    if(curr_capacity < max_capacity){
        stock[curr_capacity] = c; 
        curr_capacity++;
        return true; 
    }
    return false; 
} // tries to add a truck to yard. If there is enough space, return true
                         // and adds truck to the yard. Otherwise, do not save truck, and return false. 

Truck_yard:: ~Truck_yard(){
    delete[] stock; 
} // destructor
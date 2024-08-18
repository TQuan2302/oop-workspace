#include<iostream>
#include "Orchestra.h"

using namespace std; 

Orchestra:: Orchestra(int size){
    max_size = size; 
    current_size = 0;
    list = new Musician[max_size]; 
}

Orchestra :: Orchestra(){
    Orchestra(0); 
}

int Orchestra :: get_current_number_of_members(){
    return current_size; 
}

bool Orchestra :: has_instrument(std::string instrument){
    for(int i = 0; i< current_size; i++){
        if(instrument.compare(list[i].get_instrument()) == 0){
            return true; 
        }   
    }
    return false; 
}

Musician* Orchestra :: get_members(){
    return list;
}

bool Orchestra :: add_musician(Musician new_musician){
    if(current_size <  max_size){
        list[current_size] = Musician();
        return true; 
    }
    return false;
}

Orchestra :: ~Orchestra(){
    delete[] list; 
}
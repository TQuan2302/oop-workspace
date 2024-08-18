#include <iostream> 
#include "Musician.h"

using namespace std; 

Musician::Musician(){
    instrument = "null";
    year_of_experience = 0; 
}

Musician::Musician(std::string instrument, int experience){
    this -> instrument = instrument; 
    year_of_experience = experience; 
}

std::string Musician::get_instrument(){
    return instrument; 
}

int Musician::get_experience(){
    return year_of_experience; 
}


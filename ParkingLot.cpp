#include "ParkingLot.h"

ParkingLot:: ParkingLot(int max_capacity){
    this->max_capacity = max_capacity; 
    this->curr_capacity = 0; 
    this->vehicles = new Vehicle*[max_capacity]; 
    this->deleted_pos_array = new int[max_capacity]; //When the unpark() work, update the position of the vehicle to deleted_pos_array; 
    this->deleted_array_index = 0; 
}

int ParkingLot:: getCount(){    
    return curr_capacity; 
}

void ParkingLot:: parkVehicle(Vehicle* object){
    if(curr_capacity < max_capacity){
        vehicles[curr_capacity] = object; 
        curr_capacity++; 
    }
    else{
        cout << "The lot is full" << endl ; 
    }

} //Put the vehicle into the park if there is any space, if not then print:"The lot is full"

void ParkingLot:: unparkVehicle(int ID){
    for(int i = 0; i<curr_capacity; i++){
        if(vehicles[i]->getID() == ID ){
            delete vehicles[i]; 
            deleted_pos_array[deleted_array_index] = vehicles[i]->getID(); 
            deleted_array_index++; 
            curr_capacity--; 
            return; 
        }
    }
    cout << "Vehicle not in the lot" << endl; 
} //Remove the vehicle with "ID", if ID is not found then print: "Vehicle not in the lot"

ParkingLot:: ~ParkingLot(){//Destructor
    for(int i = 0; i<curr_capacity; i++){
        if(checkID(vehicles[i]->getID())){
            continue; 
        }
    }
    delete[] vehicles; 
}

Vehicle* ParkingLot:: getVehicle(int ID){
    for(int i = 0; i<curr_capacity; i++){
        if(ID == vehicles[i]->Vehicle::getID() ){
            return vehicles[i]; 
        }
    }
    return NULL; 
}

bool ParkingLot:: checkID(int ID){
    bool is_in = 0; 
    for(int i = 0; i<deleted_array_index+1; i++){
        if(ID == deleted_pos_array[i]){
            is_in = 1;
        }
    }
    return is_in; 
} //If ID is in the deleted list then ignore in unparkVehicle. 





#include<iostream>
#include<ctime> 

#include "Vehicle.h"


using namespace std; 


Vehicle :: Vehicle(int ID){
    this->ID = ID; 
    //Get the current data and time
    timeOfEntry = time(0); 
}

Vehicle :: Vehicle(){
    this->ID = 0; 
    //Get the current data and time
    timeOfEntry = time(0); 
}

int  Vehicle :: getID(){
    return ID; 
}

time_t Vehicle:: getTimeOfEntry(){
    return  timeOfEntry; 
}

char* Vehicle :: get_time_of_entry(){//for testing
    time_t now = time(0); 
    char* now_Time = ctime(&now); 
    cout << now_Time << endl; 
    char* date_time = ctime(&timeOfEntry); 
    cout << date_time << endl; 
    return date_time; 
}

int Vehicle :: getParkingDuration(){
    return 0; 
}

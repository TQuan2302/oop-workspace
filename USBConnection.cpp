#include<iostream>
#include "USBConnection.h"

stack<int> USBConnection:: ids({3,2,1}); //Initialize and allocate memory for the static data member; 
//If don't have this line, link error

int USBConnection:: get_id(){
    return this->id; 
}

USBConnection::USBConnection(){
    this->id = ids.top(); 
    ids.pop(); 
}

USBConnection* USBConnection:: CreateUsbConnection(){

    if(!ids.empty()){
        return new USBConnection(); 
    }
    return nullptr; 
}


USBConnection:: ~USBConnection(){
    ids.push(this->id); 
}
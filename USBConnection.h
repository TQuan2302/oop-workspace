#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H
#include<iostream>
#include<stack> 
using namespace std; 


class USBConnection{
    static stack<int> ids; //Declare the static data member; 
    private:
        USBConnection(); 
        int id; 
    public:
        static USBConnection* CreateUsbConnection(); 
        int get_id(); 
        ~USBConnection(); 

};

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


#endif


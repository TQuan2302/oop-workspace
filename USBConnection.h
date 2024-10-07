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


#endif


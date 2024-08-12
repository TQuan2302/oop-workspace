#include<iostream>
#include "server.h"
#include <iostream> 

using namespace std; 

int main(){
    Server s;
    string password = "";

    cin >> password;  
    s.login(password); 
    s.printLoginStatus();
    return 0; 
}
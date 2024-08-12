#include<iostream>

using namespace std; 

class Server{
    public:
        void login(string password);
        void printLoginStatus();

        bool getIsLoggedIn(); 
    private:
        bool isLoggedIn = false;
        string password = "password123"; 
}; 

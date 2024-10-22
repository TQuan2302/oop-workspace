#include<iostream>
using namespace std; 

class GameObject{
    public: 
        int printState(){
            cout << "Game object" << endl; 
            return 0; 
        }
         ~GameObject(){
            cout << "Object destroyed" << endl; 
        }
}; 

class PickupItem: public GameObject{
    public:
        int printState(){
            cout << "PickupItem" ; return 1; 
        }
        ~PickupItem(){
            cout << "item destroyed" << endl; 
        }
}; 

class HealthPickup: public PickupItem{
    public: 
        int printState(){
            cout << "HealthPickup"; return 2; 
        }
        ~HealthPickup(){
            cout << "health destroyed" << endl; 
        }
}; 

int main(){
    PickupItem* object = new HealthPickup(); 
    delete object; 
    return 0; 
}
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
        virtual ~PickupItem(){
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

class TestPickup: public HealthPickup{
    public: 
        int printState(){
            cout << "HealthPickup"; return 2; 
        }
        ~TestPickup(){
            cout << "test destroyed" << endl; 
        }
};

int main(){
    HealthPickup* object = new TestPickup(); 
    delete object; 
    return 0; 
}

//General rule for Destructor calling in inheritance: 
// when "delete", go to the destructor of that variable type -> Check if are there any virtual of not -> If yes then use the object version of destructor
//Else, continue to implicitly call the destructor of parent class -> Check virtual again
//Destructor of base class alway call the destructor of parent class implicitly at last
#include<iostream>
using namespace std; 

class GameObject
{
public:
    void printState() { cout << "GameObject "; }
};

class PickupItem : public GameObject
{
public:
    void printState() { cout << "PickupItem "; }
};

class HealthPickup : public PickupItem
{
public:
    void printState() { cout << "HealthPickup "; }
};

int main()
{
    HealthPickup health;
    PickupItem* object = &health;
    object->printState();
}
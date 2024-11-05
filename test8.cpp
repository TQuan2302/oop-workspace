#include <iostream>

using namespace std;

class GameObject 
{
public:
    GameObject(){cout << "GO ";}
    virtual int printstate() = 0;
    ~GameObject()
    {
        cout << "Object destroyed ";
    }
};

class PickupItem : public GameObject
{
public:
    PickupItem(){cout << "PUI ";}
    int printstate() { cout << "PickupItem "; return 1; }
    ~PickupItem()
    {
        cout << "Item destroyed ";
    }
};

class HealthPickup : public PickupItem
{
public:
    HealthPickup(){cout << "HPU ";}
    int printstate() { cout << "HealthPickup "; return 2; }
    ~HealthPickup()
    {
        cout << "Health destroyed ";
    }
};

int main()
{
    GameObject* object = new HealthPickup();
    
    object->printstate();
    delete object;
    cout << endl;
}
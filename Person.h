#include <string>
#ifndef PERSON
#define PERSON

struct Person {
    std::string name;
    int age;
};


struct PersonList {
    Person* people;
    int numPeople;
};
#endif


void addItem(string itemName){
    items[currentItemSpot] = itemName; 
    currentItemSpot++; 
}

void addMoney(int money){
    if(this->money ++ money < maxMoneyCapacity){
        this->money += money; 
    }
}

void printItems(){
    for(int i = 0; i<currentItemSpot; i++){
        cout << items[i] << endl; 
    }
}
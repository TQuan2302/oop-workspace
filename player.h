#include <iostream>

using namespace std; 

#ifndef PLAYER
#define PLAYER


class Player{
    protected:
        string name; 
        int health; 
        int damage;
    public:
        Player(string name, int health, int damage);
        Player(); 
        void attack(Player* opponent, int damage); 
        void takeDamage(int damage); 

        //Getter:
        int getHealth();


        string getName();


        int getDamage();

}; 

#endif
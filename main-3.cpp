#include<iostream>
#include"Game.h"
using namespace std; 

int main(){
    Game newGame; 
    newGame.initGame(10,10,20,20);
    newGame.gameLoop(5,150); 
    return 0; 
}
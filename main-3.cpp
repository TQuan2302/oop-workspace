#include<iostream>
#include"Game.h"
using namespace std; 

int main(){
    Game newGame; 
    newGame.initGame(5,5,20,20); 
    newGame.gameLoop(10,150); 
    return 0; 
}
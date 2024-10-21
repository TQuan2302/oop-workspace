#include<iostream>
using namespace std; 
#include<cstdlib>
#include<ctime> 
#include "GameEntity.h"
#include "Effect.h"
#include"Utils.h"

int main(){
    tuple<int, int> pos1 = Utils::generateRandomPos(20,20); 
    cout << get<0>(pos1) << "," << get<1>(pos1) << endl;  

    tuple<int, int> pos2 = Utils:: generateRandomPos(20,20); 
    cout << get<0>(pos2) << "," << get<1>(pos2) << endl;  

    cout << Utils:: calculateDistance(pos1, pos2) << endl; 
}
#include<iostream>
using namespace std; 
#include "Robot.hpp"



int main(){
    Robot r1(4,3); 
    r1.move(0,1); 
    cout << r1.getCoordinates().first << " ," << r1.getCoordinates().second << endl; 


    return 0; 
}
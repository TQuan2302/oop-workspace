#include<iostream>
using namespace std; 
#include "GridItem.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"

int main(){
    GridItem item1(1, 2, 3, 4);
    GridItem item2(5, 6, 3, 4);

    
    item1.setCoordinates(3, 4);
    auto coords = item1.getCoordinate();
    std::cout << "Item1 Coordinates: (" << coords.first << ", " << coords.second << ")\n";

    cout << item1.getActiveGridItemNumber() << endl; 

    int distance = Helper::manhattanDistance(item1.getCoordinate(), item2.getCoordinate());
    std::cout << "Manhattan Distance between item1 and item2: " << distance << "\n";

    Scientist s1(10,10); 
    
    cout << s1.move(2,2) << endl; 
    auto coords2 = s1.getCoordinate(); 
    std::cout << "SC Coordinates: (" << coords2.first << ", " << coords2.second << ")\n";

}
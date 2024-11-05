#include<iostream>
#include<map>
#include<algorithm>

using namespace std; 

int main(){
    //test map: 
    map<string, int> pokemonRatings; 
    pokemonRatings["Gengar"] = 10; 
    pokemonRatings["Deoxys"] = 9; 
    pokemonRatings["Vaporeon"] = 1; 

    pokemonRatings.insert({"Gengar", 12});
    //  If use insert then if the map  has already has the key then does not add into it(No change in both key and value)
    
    pokemonRatings["Gengar"] = 100; 
    //If doing something like this, if the key is already in the map then only change its value

    pokemonRatings["Pikachu"]; 
    //Add pikachu to the end of the list with default value. 
    
    //Map auto sort the key in asciiz value order. 
    for(auto const& tempt: pokemonRatings){
        cout << tempt.first << tempt.second << endl; 
    }
    return 0; 
}
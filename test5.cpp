#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std; 

int main(){
    //test map: 
    unordered_map<string, int> pokemonRatings; 
    pokemonRatings["a"] = 10; 
    pokemonRatings["b"] = 9; 
    pokemonRatings["c"] = 1; 

    
    //unordered_map does not auto sort the key in asciiz value order. 
    for(auto const& tempt: pokemonRatings){
        cout << tempt.first << tempt.second << endl; 
    }
    return 0; 
}